/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801C92B4
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800E2E90 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??0PerMonitorShellPositionerManager@@QEAA@XZ @ 0x1801A0800 (--0PerMonitorShellPositionerManager@@QEAA@XZ.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1803BEEF0 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults_____lambda_6084a6cce004fd5fee81c22a52dae34d___ @ 0x1804988A0 (Windows--Internal--COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_67d44a18aa71790abd3976d622df6952___ @ 0x18049891C (Windows--Internal--COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows--Inte.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8F18 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_xfg_dispatch_icall_fptr();
    a1 += a2;
  }
}
