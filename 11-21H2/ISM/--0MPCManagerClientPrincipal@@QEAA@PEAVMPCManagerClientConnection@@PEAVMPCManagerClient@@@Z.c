/*
 * XREFs of ??0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z @ 0x18015F534
 * Callers:
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18015D6BC (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180047284 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCManagerClientPrincipal *__fastcall MPCManagerClientPrincipal::MPCManagerClientPrincipal(
        MPCManagerClientPrincipal *this,
        struct MPCManagerClientConnection *a2,
        struct MPCManagerClient *a3)
{
  volatile int *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *(_QWORD *)this = &BamoMPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCManagerClientPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCManagerClientPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
  {
    v6 = *((_QWORD *)a3 + 6);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a3 + 6, v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      return this;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v5);
  }
  return this;
}
