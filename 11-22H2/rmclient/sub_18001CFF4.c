/*
 * XREFs of sub_18001CFF4 @ 0x18001CFF4
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     HamCreateActivityForProcess @ 0x180002590 (HamCreateActivityForProcess.c)
 *     HamStartActivityAsync @ 0x180008900 (HamStartActivityAsync.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001CD28 @ 0x18001CD28 (sub_18001CD28.c)
 */

__int64 __fastcall sub_18001CFF4(__int64 a1, __int64 a2, __int64 a3)
{
  int Pointer; // ebx
  __int64 v5; // rcx

  Pointer = (unsigned int)HamCreateActivityForProcess(*(_QWORD **)(a1 + 24), a1, a2, a3, (_QWORD *)(a1 + 32)).Pointer;
  if ( Pointer >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = 1;
    Pointer = (unsigned int)HamStartActivityAsync(v5).Pointer;
    if ( Pointer >= 0 )
      return 0;
    else
      sub_18001CD28(a1);
  }
  return (unsigned int)Pointer;
}
