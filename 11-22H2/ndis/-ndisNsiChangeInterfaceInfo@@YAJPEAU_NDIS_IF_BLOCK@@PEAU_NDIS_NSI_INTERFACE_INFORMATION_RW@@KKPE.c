/*
 * XREFs of ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001B778
 * Callers:
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001B5C0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B9DD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001BF74 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0035978 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

__int64 __fastcall ndisNsiChangeInterfaceInfo(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_NSI_INTERFACE_INFORMATION_RW *a2,
        wchar_t *a3,
        int a4,
        unsigned int *a5)
{
  int v6; // r13d
  unsigned int v9; // ebx
  unsigned int *v10; // rdx
  char v11; // al
  unsigned __int64 v12; // rcx
  int v13; // ebp
  unsigned int v14; // r14d
  int updated; // eax
  unsigned int v16; // r13d
  _NDIS_NSI_INTERFACE_PURPOSE v18; // eax
  _OWORD *v19; // rdi
  __int64 v20; // r8
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _IF_COUNTED_STRING_LH *Pool2; // rax
  __int64 v23; // rax
  __int128 v24; // xmm1
  _OWORD *v25; // rcx
  __int64 v26; // r8
  _IF_COUNTED_STRING_LH *p_ifAlias; // rdx
  __int64 v28; // rax
  __int128 v29; // xmm1
  unsigned int v30; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+A0h] [rbp+18h]
  char v32; // [rsp+A8h] [rbp+20h]

  v31 = (int)a3;
  v6 = (int)a3;
  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Cu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)a1,
      a2);
  v10 = a5;
  v11 = 0;
  v12 = (unsigned int)v6;
  v32 = 0;
  v30 = v6;
  v13 = a4;
  *a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_15:
        v6 = v31;
        v10 = a5;
        goto LABEL_16;
      }
      v14 = 0;
      if ( !a4 )
      {
        v14 = 16;
        updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, (const struct _GUID *)a2, 0);
        if ( updated < 0 )
        {
          v9 = updated;
          goto LABEL_45;
        }
        v13 = 16;
        goto LABEL_8;
      }
      if ( a4 == 16 )
        break;
      switch ( a4 )
      {
        case 20:
          v14 = 516;
          if ( !ndisIsValidIfStringParts((const wchar_t *)a2 + 10, *((unsigned __int16 *)a2 + 10)) || a1->IsNdisFilter )
          {
LABEL_29:
            v9 = -1073741811;
LABEL_45:
            v12 = v30;
            v11 = 1;
            v32 = 1;
            goto LABEL_14;
          }
          p_ifAlias = &a1->ifAlias;
          v28 = 4LL;
          do
          {
            *(_OWORD *)&p_ifAlias->Length = *v25;
            *(_OWORD *)&p_ifAlias->String[7] = v25[1];
            *(_OWORD *)&p_ifAlias->String[15] = v25[2];
            *(_OWORD *)&p_ifAlias->String[23] = v25[3];
            *(_OWORD *)&p_ifAlias->String[31] = v25[4];
            *(_OWORD *)&p_ifAlias->String[39] = v25[5];
            *(_OWORD *)&p_ifAlias->String[47] = v25[6];
            p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + v26);
            v29 = v25[7];
            v25 = (_OWORD *)((char *)v25 + v26);
            *(_OWORD *)&p_ifAlias[-1].String[249] = v29;
            --v28;
          }
          while ( v28 );
          v13 = 536;
          *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)v25;
LABEL_8:
          LODWORD(v12) = v30;
LABEL_9:
          v11 = v32;
          goto LABEL_10;
        case 536:
          goto LABEL_29;
        case 570:
          v19 = (_OWORD *)((char *)a2 + 570);
          v14 = 516;
          if ( !ndisIsValidIfStringParts((const wchar_t *)v12, *((unsigned __int16 *)a2 + 285)) )
            goto LABEL_29;
          ifL2NetworkInfo = a1->ifL2NetworkInfo;
          if ( !ifL2NetworkInfo )
          {
            Pool2 = (_IF_COUNTED_STRING_LH *)ExAllocatePool2(66LL, 516LL, 1718174798);
            a1->ifL2NetworkInfo = Pool2;
            ifL2NetworkInfo = Pool2;
            if ( !Pool2 )
            {
              v9 = -1073741670;
              goto LABEL_45;
            }
            v20 = 128LL;
          }
          v23 = 4LL;
          do
          {
            *(_OWORD *)&ifL2NetworkInfo->Length = *v19;
            *(_OWORD *)&ifL2NetworkInfo->String[7] = v19[1];
            *(_OWORD *)&ifL2NetworkInfo->String[15] = v19[2];
            *(_OWORD *)&ifL2NetworkInfo->String[23] = v19[3];
            *(_OWORD *)&ifL2NetworkInfo->String[31] = v19[4];
            *(_OWORD *)&ifL2NetworkInfo->String[39] = v19[5];
            *(_OWORD *)&ifL2NetworkInfo->String[47] = v19[6];
            ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v20);
            v24 = v19[7];
            v19 = (_OWORD *)((char *)v19 + v20);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[249] = v24;
            --v23;
          }
          while ( v23 );
          v13 = 1088;
          *(_DWORD *)&ifL2NetworkInfo->Length = *(_DWORD *)v19;
          goto LABEL_8;
        case 1088:
          v18 = *((_DWORD *)a2 + 272);
          if ( (unsigned int)v18 > NDIS_NSI_INTERFACE_PURPOSE_IN_FAILOVER )
            goto LABEL_29;
          a1->ifPurpose = v18;
          v13 = 1092;
          v14 = 4;
          break;
      }
      v11 = 1;
      v32 = 1;
LABEL_10:
      if ( v9 || !v14 || (unsigned int)v12 < v14 )
        goto LABEL_45;
      v12 = (unsigned int)(a4 - v13 + v12);
      a4 = v13;
      v30 = v12;
LABEL_14:
      if ( (int)v12 <= 0 )
        goto LABEL_15;
    }
    v14 = 4;
    a1->ifAdminStatus = *((_DWORD *)a2 + 4);
    v13 = 20;
    goto LABEL_9;
  }
LABEL_16:
  v16 = v6 - v12;
  *v10 = v16;
  if ( !v16 )
    v9 = -1073741811;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Du,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)a1,
      (char)a2,
      v9);
  return v9;
}
