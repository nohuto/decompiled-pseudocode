/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C002C6F8
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0112350 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C002CBC0 (ndisIfCreateCompartmentBlock.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase2(void)
{
  void *v0; // rsi
  int CompartmentBlock; // edi
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 Pool2; // rax
  int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  unsigned __int16 v12; // cx
  __int128 v13; // xmm0
  KIRQL v14; // bl
  __int64 i; // [rsp+38h] [rbp-D0h]
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v19; // [rsp+98h] [rbp-70h]
  _QWORD v20[14]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v21[206]; // [rsp+118h] [rbp+10h] BYREF

  memset(v18, 0, 0x48uLL);
  v19 = 0LL;
  v0 = 0LL;
  memset(v21, 0, 0x668uLL);
  LODWORD(v17) = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids);
  memset(v20, 0, sizeof(v20));
  v20[4] = 0x100000000LL;
  v20[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v20[3]) = 7;
  v20[5] = 0LL;
  LODWORD(v20[6]) = 4;
  v20[7] = 0LL;
  LODWORD(v20[8]) = 1640;
  LODWORD(v20[13]) = 0;
  CompartmentBlock = NsiEnumerateObjectsAllParametersEx(v20);
  if ( CompartmentBlock >= 0 )
  {
    v2 = v20[13];
    if ( LODWORD(v20[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v20[13];
        }
        v3 = (4 * v2 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 1640 * v2 < v3 )
        {
          CompartmentBlock = -1073741670;
          goto LABEL_32;
        }
        v4 = v3;
        Pool2 = ExAllocatePool2(64LL, v3 + 1640LL * v2, 1718174798);
        v0 = (void *)Pool2;
        if ( !Pool2 )
        {
          CompartmentBlock = -1073741670;
          goto LABEL_32;
        }
        v20[5] = Pool2;
        LODWORD(v20[6]) = 4;
        v20[7] = v4 + Pool2;
        LODWORD(v20[8]) = 1640;
        v6 = NsiEnumerateObjectsAllParametersEx(v20);
        if ( v6 != 261 )
          break;
        v2 = v20[13];
      }
      CompartmentBlock = v6;
      if ( v6 >= 0 )
      {
        v7 = 0;
        v8 = v20[7];
        v9 = v20[5];
        for ( i = v20[7]; v7 < LODWORD(v20[13]); ++v7 )
        {
          v10 = v8 + 1640LL * v7;
          if ( *(_BYTE *)v10 == 0xAD )
          {
            v11 = *(_BYTE *)(v10 + 1);
            if ( v11 )
            {
              v12 = *(_WORD *)(v10 + 2);
              if ( v12 >= 0x448u )
              {
                if ( v11 < 3u || v12 < 0x664u )
                {
                  *(_DWORD *)v10 = 107479981;
                  memset((void *)(v10 + 1096), 0, 0x204uLL);
                  *(_QWORD *)(v10 + 1612) = 1LL;
                  if ( *(_DWORD *)(v9 + 4LL * v7) == 1 )
                  {
                    *(_WORD *)(v10 + 1096) = 38;
                    *(_OWORD *)(v10 + 1098) = *(_OWORD *)L"Default Compartment";
                    *(_OWORD *)(v10 + 1114) = *(_OWORD *)L"Compartment";
                    *(_DWORD *)(v10 + 1130) = *(_DWORD *)L"ent";
                    *(_WORD *)(v10 + 1134) = aDefaultCompart[18];
                    v13 = *(_OWORD *)(v10 + 1080);
                    *(_DWORD *)(v10 + 1616) = 4;
                    *(_OWORD *)(v10 + 1620) = v13;
                  }
                  v18[1] = 0LL;
                  v18[0] = 0LL;
                  v18[4] = 0LL;
                  v18[2] = &NPI_MS_NDIS_MODULEID;
                  v18[3] = 7LL;
                  v18[6] = 4LL;
                  v18[8] = 1640LL;
                  v18[5] = v9 + 4LL * v7;
                  v18[7] = v10;
                  NsiSetAllParametersEx(v18);
                }
                CompartmentBlock = ndisIfCreateCompartmentBlock(*(_DWORD *)(v9 + 4LL * v7));
                if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() && CompartmentBlock >= 0 )
                {
                  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
                  COMPARTMENTBLOCK_DECREMENT_REF(v19);
                  KeReleaseSpinLock(&ndisIfListLock, v14);
                }
              }
              v8 = i;
            }
          }
        }
      }
      ExFreePoolWithTag(v0, 0);
    }
    else
    {
      v18[2] = &NPI_MS_NDIS_MODULEID;
      v18[5] = &v17;
      *(_DWORD *)((char *)&v21[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v21[135] = xmmword_1C00D4FA8;
      HIWORD(v21[141]) = aDefaultCompart[18];
      v18[7] = v21;
      HIDWORD(v18[1]) = 0;
      v18[3] = 7LL;
      v18[6] = 4LL;
      v18[8] = 1640LL;
      v18[4] = 0x100000002LL;
      LODWORD(v21[0]) = 107479981;
      LOWORD(v21[137]) = 38;
      *(_OWORD *)((char *)&v21[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v21[201]) = 1;
      *(_OWORD *)((char *)&v21[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v21[202]) = 4;
      CompartmentBlock = NsiSetAllParametersEx(v18);
    }
  }
LABEL_32:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x20u,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      CompartmentBlock);
  return (unsigned int)CompartmentBlock;
}
