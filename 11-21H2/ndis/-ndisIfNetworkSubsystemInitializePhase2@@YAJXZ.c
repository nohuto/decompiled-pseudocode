/*
 * XREFs of ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002C128
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0112350 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0022378 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002B1C8 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ndisIfCreateNetworkBlock @ 0x1C002C3E0 (ndisIfCreateNetworkBlock.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 ndisIfNetworkSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int NetworkBlock; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 Pool2; // rax
  int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // r14d
  KIRQL v9; // r13
  __int64 v10; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  char v14; // r12
  __int64 v15; // r15
  _QWORD v17[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v18[20]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v19; // [rsp+130h] [rbp+67h]
  __int64 v20; // [rsp+138h] [rbp+6Fh]
  void *v21; // [rsp+140h] [rbp+77h]

  v0 = 0LL;
  memset(v17, 0, 0x48uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x18u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids);
  memset(v18, 0, 0x70uLL);
  LODWORD(v18[3]) = 6;
  v18[2] = &NPI_MS_NDIS_MODULEID;
  v18[4] = 0x100000000LL;
  v18[5] = 0LL;
  LODWORD(v18[6]) = 16;
  v18[7] = 0LL;
  LODWORD(v18[8]) = 528;
  LODWORD(v18[13]) = 0;
  NetworkBlock = NsiEnumerateObjectsAllParametersEx(v18);
  if ( NetworkBlock >= 0 )
  {
    v2 = v18[13];
    if ( LODWORD(v18[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v18[13];
        }
        v3 = 16 * v2;
        if ( 16 * (unsigned __int64)v2 > 0xFFFFFFFF || 544 * v2 < 16 * v2 )
        {
          NetworkBlock = -1073741670;
          goto LABEL_24;
        }
        v4 = v3;
        Pool2 = ExAllocatePool2(64LL, v3 + 528LL * v2, 1718174798);
        v21 = (void *)Pool2;
        v0 = (void *)Pool2;
        if ( !Pool2 )
        {
          NetworkBlock = -1073741670;
          goto LABEL_24;
        }
        v18[5] = Pool2;
        LODWORD(v18[6]) = 16;
        v18[7] = v4 + Pool2;
        LODWORD(v18[8]) = 528;
        v6 = NsiEnumerateObjectsAllParametersEx(v18);
        if ( v6 != 261 )
          break;
        v2 = v18[13];
      }
      NetworkBlock = v6;
      if ( v6 >= 0 )
      {
        v7 = v18[7];
        v20 = v18[5];
        v19 = v18[7];
        v8 = 0;
        v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( LODWORD(v18[13]) )
        {
          do
          {
            v10 = v7 + 528LL * v8;
            if ( *(_BYTE *)v10 == 0xAC && *(_BYTE *)(v10 + 1) && *(_WORD *)(v10 + 2) >= 0x210u )
            {
              CompartmentBlock = ndisIfFindCompartmentBlock(*(_DWORD *)(v10 + 4));
              v13 = 2 * v12;
              v14 = (char)CompartmentBlock;
              v15 = v20 + 8 * v13;
              if ( CompartmentBlock )
              {
                if ( !ndisIfFindNetworkBlock((const struct _GUID *)(v20 + 8 * v13)) )
                  NetworkBlock = ndisIfCreateNetworkBlock(v14, v15);
              }
              else
              {
                KeReleaseSpinLock(&ndisIfListLock, v9);
                v17[3] = 6LL;
                v17[1] = 0LL;
                v17[2] = &NPI_MS_NDIS_MODULEID;
                v17[6] = 16LL;
                v17[8] = 528LL;
                v17[0] = 0LL;
                v17[4] = 0x300000000LL;
                v17[5] = v15;
                v17[7] = v10;
                NsiSetAllParametersEx(v17);
                v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              }
              v7 = v19;
            }
            ++v8;
          }
          while ( v8 < LODWORD(v18[13]) );
          v0 = v21;
        }
        KeReleaseSpinLock(&ndisIfListLock, v9);
      }
      ExFreePoolWithTag(v0, 0);
    }
  }
LABEL_24:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      NetworkBlock);
  return (unsigned int)NetworkBlock;
}
