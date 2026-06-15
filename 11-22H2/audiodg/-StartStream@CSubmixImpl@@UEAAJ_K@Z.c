/*
 * XREFs of ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140068E90
 * Callers:
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140052400 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?StartStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140069530 (-StartStream@CProcessSubmix@@UEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000914C (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x14000994C (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::StartStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct IStreamInstanceInternal *Stream; // rax
  int updated; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    updated = -2005139430;
    v7 = 549LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)updated);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)updated;
  }
  (*(void (__fastcall **)(struct IStreamInstanceInternal *))(*(_QWORD *)Stream + 40LL))(Stream);
  updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
  if ( updated < 0 )
  {
    v7 = 555LL;
    goto LABEL_3;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
