/*
 * XREFs of sub_1800F1E58 @ 0x1800F1E58
 * Callers:
 *     sub_1800F1F50 @ 0x1800F1F50 (sub_1800F1F50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F1E58(__int64 a1)
{
  void **v1; // rbx
  void *v2; // rcx
  HRESULT v3; // eax
  ULONG_PTR v4; // rbx
  D2D1_FACTORY_OPTIONS pFactoryOptions; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v1 = (void **)(a1 + 512);
  if ( sub_1800E2DE0((_QWORD *)(a1 + 512)) )
  {
    pFactoryOptions.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    v2 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v3 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_1801BCDE8, &pFactoryOptions, v1);
    v4 = v3;
    if ( v3 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v4;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
