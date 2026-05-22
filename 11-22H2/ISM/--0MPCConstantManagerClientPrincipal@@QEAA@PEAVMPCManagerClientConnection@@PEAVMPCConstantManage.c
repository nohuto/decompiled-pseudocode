/*
 * XREFs of ??0MPCConstantManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCConstantManagerClient@@@Z @ 0x18019D880
 * Callers:
 *     ?EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ @ 0x180194E28 (-EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003ABAC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180051234 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

MPCConstantManagerClientPrincipal *__fastcall MPCConstantManagerClientPrincipal::MPCConstantManagerClientPrincipal(
        MPCConstantManagerClientPrincipal *this,
        struct MPCManagerClientConnection *a2,
        struct MPCConstantManagerClient *a3)
{
  volatile int *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *(_QWORD *)this = &BamoMPCConstantManagerClientCallbacksPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientCallbacksPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (MPCConstantManagerClientPrincipal *)((char *)this + 16),
    a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCConstantManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientCallbacksPrincipal'};
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
  {
    v6 = *((_QWORD *)a3 + 3);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a3 + 3, v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      return this;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v5);
  }
  return this;
}
