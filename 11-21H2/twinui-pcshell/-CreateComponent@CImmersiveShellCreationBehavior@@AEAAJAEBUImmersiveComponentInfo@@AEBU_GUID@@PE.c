/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x1801479B0
 * Callers:
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x180147890 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        const struct ImmersiveComponentInfo *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v4; // eax
  unsigned __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 2);
  if ( (v4 & 4) != 0 )
  {
    v6 = 72LL;
  }
  else if ( (v4 & 2) != 0 )
  {
    v6 = 80LL;
  }
  else
  {
    v6 = (-(__int64)((v4 & 8) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 96;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v6) + 24LL))(
         *(_QWORD *)((char *)this + v6),
         *(_QWORD *)a2,
         a3,
         a4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2CE,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
