/*
 * XREFs of ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001C624
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     HamCreateActivityForProcess @ 0x180001B20 (HamCreateActivityForProcess.c)
 *     HamStartActivityAsync @ 0x180005780 (HamStartActivityAsync.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Close@HamActivityWrapper@@QEAAXXZ @ 0x18001C358 (-Close@HamActivityWrapper@@QEAAXXZ.c)
 */

__int64 __fastcall HamActivityWrapper::StartAsyncForProcess(HamActivityWrapper *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  int Pointer; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v3 = (__int64 *)((char *)a1 + 32);
  Pointer = (unsigned int)HamCreateActivityForProcess(*((_QWORD **)a1 + 3), (__int64)a1, a2, a3, (_QWORD *)a1 + 4).Pointer;
  if ( Pointer >= 0 )
  {
    (*(void (__fastcall **)(HamActivityWrapper *))(*(_QWORD *)a1 + 8LL))(a1);
    v6 = *v3;
    v7 = (_QWORD *)*((_QWORD *)a1 + 3);
    *((_DWORD *)a1 + 10) = 1;
    Pointer = (unsigned int)HamStartActivityAsync(v7, v6, 0, 0LL).Pointer;
    if ( Pointer >= 0 )
      return 0;
    else
      HamActivityWrapper::Close(a1);
  }
  return (unsigned int)Pointer;
}
