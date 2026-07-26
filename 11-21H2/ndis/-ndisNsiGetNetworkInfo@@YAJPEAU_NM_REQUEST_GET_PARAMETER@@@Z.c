/*
 * XREFs of ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B5FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0017EF4 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0022378 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisCompareGuid @ 0x1C00223E0 (ndisCompareGuid.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisNsiGetNetworkInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  char *v1; // rbp
  int v3; // edi
  const struct _GUID *v4; // r14
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // r15
  int v8; // ecx
  __int64 *v9; // rbx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  char *v11; // r13
  int v12; // ebx
  int v13; // r15d
  char v14; // r12
  KIRQL v15; // bl
  unsigned int v17; // eax
  int v18; // r14d
  int v19; // ebx
  char v20; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h]

  v1 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v3 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 16 || !*((_DWORD *)a1 + 12) || !*((_QWORD *)a1 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_32;
  }
  v4 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v21);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v6 = *((_DWORD *)a1 + 14);
  v7 = v5;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        goto LABEL_12;
      v3 = -1073741808;
    }
    else
    {
      *v4 = 0LL;
      while ( 1 )
      {
LABEL_12:
        v9 = (__int64 *)qword_1C00ECDD0;
        v1 = 0LL;
        if ( (__int64 *)qword_1C00ECDD0 != &qword_1C00ECDD0 )
        {
          while ( (int)ndisCompareGuid((__int64)(v9 + 4), (__int64)v4) <= 0 )
          {
            v9 = (__int64 *)*v9;
            if ( v9 == &qword_1C00ECDD0 )
              goto LABEL_20;
          }
          v1 = (char *)v9;
        }
        if ( !v1 )
          break;
        v4 = (const struct _GUID *)(v1 + 32);
        if ( ndisIsCompartmentAccessibleByClient(
               *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)v1 + 6),
               (const struct _NDIS_NSI_CLIENT_INFO *)&v21,
               0) )
        {
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    NetworkBlock = ndisIfFindNetworkBlock(v4);
    v1 = (char *)NetworkBlock;
    if ( NetworkBlock )
    {
      if ( ndisIsCompartmentAccessibleByClient(
             *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
             (const struct _NDIS_NSI_CLIENT_INFO *)&v21,
             1) )
      {
LABEL_19:
        ++*((_DWORD *)v1 + 19);
        v20 = 1;
        *(_OWORD *)*((_QWORD *)a1 + 2) = *((_OWORD *)v1 + 2);
      }
      else
      {
        v1 = 0LL;
      }
    }
  }
LABEL_20:
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( v3 < 0 )
    goto LABEL_30;
  if ( !v1 )
  {
    v3 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_30;
  }
  v11 = (char *)*((_QWORD *)a1 + 5);
  v12 = *((_DWORD *)a1 + 13);
  v13 = *((_DWORD *)a1 + 12);
  if ( !v11 )
  {
    *((_DWORD *)a1 + 12) = 0;
    goto LABEL_30;
  }
  v14 = 0;
  if ( *((_DWORD *)a1 + 8) )
  {
    v3 = -1073741808;
    goto LABEL_30;
  }
  while ( v13 > 0 && !v14 )
  {
    switch ( v12 )
    {
      case 0:
        v18 = 4;
        goto LABEL_44;
      case 4:
        v18 = 8;
        goto LABEL_44;
      case 8:
        v18 = 12;
LABEL_44:
        v17 = 4;
        goto LABEL_45;
    }
    if ( v12 != 12 )
      goto LABEL_47;
    v17 = 516;
    v14 = 1;
    v18 = 528;
LABEL_45:
    if ( v13 < v17 )
    {
LABEL_47:
      v14 = 1;
    }
    else
    {
      memmove(v11, &v1[v12 + 80], v17);
      v11 += (unsigned int)(v18 - v12);
      v13 += v12 - v18;
      v12 = v18;
    }
  }
  v19 = v12 - *((_DWORD *)a1 + 13);
  *((_DWORD *)a1 + 12) = v19;
  if ( !v19 )
    v3 = -1073741811;
LABEL_30:
  if ( v20 )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v1);
    KeReleaseSpinLock(&ndisIfListLock, v15);
  }
LABEL_32:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v3);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
