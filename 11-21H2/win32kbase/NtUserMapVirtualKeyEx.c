/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C003F300
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     InternalMapVirtualKeyEx @ 0x1C003F3A0 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x1C003FF30 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 )
    v14 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v14 = *(_QWORD *)(ThreadWin32Thread + 440);
  if ( v14 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v14 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
