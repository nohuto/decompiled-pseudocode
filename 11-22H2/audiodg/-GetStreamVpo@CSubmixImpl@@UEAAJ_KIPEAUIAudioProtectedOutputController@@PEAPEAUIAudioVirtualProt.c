/*
 * XREFs of ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140068200
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140051010 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x14000994C (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::GetStreamVpo(
        CSubmixImpl *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct IStreamInstanceInternal *Stream; // rax
  int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v11 = -2005139430;
    v12 = 921LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v11);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(struct IStreamInstanceInternal *, _QWORD, struct IAudioProtectedOutputController *, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)Stream + 80LL))(
          Stream,
          a3,
          a4,
          a5);
  if ( v11 < 0 )
  {
    v12 = 922LL;
    goto LABEL_3;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
