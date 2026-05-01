/*
 * XREFs of _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x18002E7FC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::Invoke @ 0x18002E7E0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x18002E8E4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180166A30 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ca324c265ed58b3d9541d2204f682216_::operator()(__int64 *a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  v10 = 0LL;
  v2 = *(_QWORD *)(*a1 + 120);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 136LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( v3(v2, &v10) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 168LL))(v10, &v11);
  v5 = *a1;
  v12 = v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details *)(2 * v6 + 16),
      (volatile int *)((unsigned __int64)v6 >> 63));
  }
LABEL_8:
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(v5, v11, v4, &v12);
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v12);
  if ( v8 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*a1 + 129) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return 0LL;
}
