/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B5D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // r12
  unsigned int v5; // r11d
  bool IsCompartmentAccessibleByClient; // al
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  bool v10; // cf
  __int64 v11; // r15
  _OWORD *v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  KIRQL v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+48h] [rbp-50h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h]

  v22 = 0LL;
  v23 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v22);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v3 = qword_1C00ECDD0;
  v4 = v2;
  v21 = v2;
  v5 = 0;
  if ( (__int64 *)qword_1C00ECDD0 != &qword_1C00ECDD0 )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(
                                          *(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(v3 + 48),
                                          (const struct _NDIS_NSI_CLIENT_INFO *)&v22,
                                          0);
      v3 = *(_QWORD *)v3;
      v8 = v7 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v7;
      v5 = v8;
    }
    while ( (__int64 *)v3 != &qword_1C00ECDD0 );
    v4 = v21;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v9 )
  {
    v11 = *((_QWORD *)a1 + 2);
    v12 = (_OWORD *)*((_QWORD *)a1 + 5);
    if ( v11 && *((_DWORD *)a1 + 6) != 16 || v12 && *((_DWORD *)a1 + 12) < 0x210u )
    {
      v13 = -1073741306;
      goto LABEL_28;
    }
    v14 = qword_1C00ECDD0;
    v15 = 0;
    do
    {
      if ( (__int64 *)v14 == &qword_1C00ECDD0 )
        break;
      if ( ndisIsCompartmentAccessibleByClient(
             *(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(v14 + 48),
             (const struct _NDIS_NSI_CLIENT_INFO *)&v22,
             0) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_OWORD *)(v11 + 16LL * v15) = *(_OWORD *)(v14 + 32);
        if ( *((_QWORD *)a1 + 5) )
        {
          v16 = 4LL;
          v17 = (_OWORD *)(v14 + 80);
          v18 = v12;
          do
          {
            *v18 = *v17;
            v18[1] = v17[1];
            v18[2] = v17[2];
            v18[3] = v17[3];
            v18[4] = v17[4];
            v18[5] = v17[5];
            v18[6] = v17[6];
            v18 += 8;
            v19 = v17[7];
            v17 += 8;
            *(v18 - 1) = v19;
            --v16;
          }
          while ( v16 );
          *v18 = *v17;
          v12 = (_OWORD *)((char *)v12 + *((unsigned int *)a1 + 12));
        }
        ++v15;
      }
      v14 = *(_QWORD *)v14;
    }
    while ( v15 < v9 );
    v4 = v21;
    v10 = v15 < v5;
  }
  else
  {
    v10 = v5 != 0;
  }
  v13 = v10 ? 0x105 : 0;
LABEL_28:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v13);
  return v13;
}
