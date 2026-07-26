/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C0033834
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C011B500 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002C178 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C0033D08 (ndisIfCreateCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage @ 0x1C0038080 (Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int CompartmentBlock; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 Pool2; // rax
  int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r12
  _WORD *v10; // rsi
  unsigned __int8 v11; // al
  unsigned __int16 v12; // cx
  __int128 v13; // xmm0
  KIRQL v14; // si
  int v15; // ecx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 i; // [rsp+40h] [rbp-C8h]
  _QWORD v19[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // [rsp+98h] [rbp-70h]
  _QWORD v21[14]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v22[206]; // [rsp+118h] [rbp+10h] BYREF

  memset(v19, 0, 0x48uLL);
  v20 = 0LL;
  v0 = 0LL;
  memset(v22, 0, 0x668uLL);
  LODWORD(v17) = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids);
  memset(v21, 0, sizeof(v21));
  v21[4] = 0x100000000LL;
  v21[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v21[3]) = 7;
  v21[5] = 0LL;
  LODWORD(v21[6]) = 4;
  v21[7] = 0LL;
  LODWORD(v21[8]) = 1640;
  LODWORD(v21[13]) = 0;
  CompartmentBlock = NsiEnumerateObjectsAllParametersEx(v21);
  if ( CompartmentBlock >= 0 )
  {
    v2 = v21[13];
    if ( LODWORD(v21[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v21[13];
        }
        v3 = (4 * v2 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 1640 * v2 < v3 )
        {
          CompartmentBlock = -1073741670;
          goto LABEL_35;
        }
        v4 = v3;
        Pool2 = ExAllocatePool2(64LL, v3 + 1640LL * v2, 1718174798);
        v0 = (void *)Pool2;
        if ( !Pool2 )
        {
          CompartmentBlock = -1073741670;
          goto LABEL_35;
        }
        v21[5] = Pool2;
        LODWORD(v21[6]) = 4;
        v21[7] = v4 + Pool2;
        LODWORD(v21[8]) = 1640;
        v6 = NsiEnumerateObjectsAllParametersEx(v21);
        if ( v6 != 261 )
          break;
        v2 = v21[13];
      }
      CompartmentBlock = v6;
      if ( v6 >= 0 )
      {
        v7 = 0;
        v8 = v21[7];
        v9 = v21[5];
        for ( i = v21[7]; v7 < LODWORD(v21[13]); ++v7 )
        {
          v10 = (_WORD *)(v8 + 1640LL * v7);
          if ( *(_BYTE *)v10 == 0xAD )
          {
            v11 = *((_BYTE *)v10 + 1);
            if ( v11 )
            {
              v12 = v10[1];
              if ( v12 >= 0x448u )
              {
                if ( v11 < 3u || v12 < 0x664u )
                {
                  *(_DWORD *)v10 = 107479981;
                  memset(v10 + 548, 0, 0x204uLL);
                  *(_QWORD *)(v10 + 806) = 1LL;
                  if ( *(_DWORD *)(v9 + 4LL * v7) == 1 )
                  {
                    v10[548] = 38;
                    *(_OWORD *)(v10 + 549) = *(_OWORD *)L"Default Compartment";
                    *(_OWORD *)(v10 + 557) = *(_OWORD *)L"Compartment";
                    *(_DWORD *)(v10 + 565) = *(_DWORD *)L"ent";
                    v10[567] = aDefaultCompart[18];
                    v13 = *(_OWORD *)(v10 + 540);
                    *((_DWORD *)v10 + 404) = 4;
                    *(_OWORD *)(v10 + 810) = v13;
                  }
                  v19[5] = v9 + 4LL * v7;
                  v19[2] = &NPI_MS_NDIS_MODULEID;
                  v19[1] = 0LL;
                  v19[3] = 7LL;
                  v19[6] = 4LL;
                  v19[8] = 1640LL;
                  v19[0] = 0LL;
                  v19[4] = 0LL;
                  v19[7] = v10;
                  NsiSetAllParametersEx(v19);
                }
                CompartmentBlock = ndisIfCreateCompartmentBlock(*(_DWORD *)(v9 + 4LL * v7), 0LL, v10);
                if ( CompartmentBlock >= 0 )
                {
                  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
                  if ( (unsigned int)Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage() )
                  {
                    v15 = dword_1C00F4950;
                    if ( dword_1C00F4950 <= (unsigned int)(*(_DWORD *)(v9 + 4LL * v7) + 1) )
                      v15 = *(_DWORD *)(v9 + 4LL * v7) + 1;
                    dword_1C00F4950 = v15;
                  }
                  COMPARTMENTBLOCK_DECREMENT_REF(v20);
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
      v19[3] = 7LL;
      v19[5] = &v17;
      *(_DWORD *)((char *)&v22[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v22[135] = xmmword_1C00DCAE8;
      HIWORD(v22[141]) = aDefaultCompart[18];
      v19[7] = v22;
      HIDWORD(v19[1]) = 0;
      v19[6] = 4LL;
      v19[8] = 1640LL;
      v19[2] = &NPI_MS_NDIS_MODULEID;
      v19[4] = 0x100000002LL;
      LODWORD(v22[0]) = 107479981;
      LOWORD(v22[137]) = 38;
      *(_OWORD *)((char *)&v22[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v22[201]) = 1;
      *(_OWORD *)((char *)&v22[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v22[202]) = 4;
      CompartmentBlock = NsiSetAllParametersEx(v19);
    }
  }
LABEL_35:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x20u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      CompartmentBlock,
      v17);
  return (unsigned int)CompartmentBlock;
}
