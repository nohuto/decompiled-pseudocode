/*
 * XREFs of _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x18005BFBC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::Invoke @ 0x18005BFA0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x18005C0A4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180064538 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ca324c265ed58b3d9541d2204f682216_::operator()(__int64 *a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v11 = 0LL;
  v2 = *(_QWORD *)(*a1 + 120);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 136LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  if ( v3(v2, &v11) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 168LL))(v11, &v12);
  v6 = *a1;
  v13 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 64);
    while ( 1 )
    {
      v4 = (unsigned __int64)v7 >> 63;
      if ( v7 < 0 )
        break;
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v4 = v7 + 1;
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), (volatile int *)v6);
  }
LABEL_8:
  v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(v4, v12, v5, &v13);
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v13);
  if ( v9 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*a1 + 129) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return 0LL;
}
