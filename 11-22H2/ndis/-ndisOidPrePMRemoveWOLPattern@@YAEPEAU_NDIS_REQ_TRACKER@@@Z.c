/*
 * XREFs of ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C003DBF0 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094E54 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00982F0 (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009AE8C (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

unsigned __int8 __fastcall ndisOidPrePMRemoveWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // di
  struct _SINGLE_LIST_ENTRY *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v5; // r14
  __int64 v6; // rax
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rbx
  int v14; // edx
  struct _SINGLE_LIST_ENTRY *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-38h]
  unsigned __int8 v20; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v20 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x56u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)v5,
      v1);
  v6 = *((_QWORD *)a1 + 3);
  v7 = 6;
  v8 = 20;
  if ( v6
    && (v9 = *(_QWORD *)(v6 + 24), *(_BYTE *)(v9 + 56) <= 6u)
    && (*(_BYTE *)(v9 + 56) != 6 || *(_BYTE *)(v9 + 57) < 0x14u)
    || (v11 = *((_QWORD *)a1 + 1)) != 0
    && !_bittest((const signed __int32 *)(v1 + 88), 0xEu)
    && (v12 = *(_QWORD *)(v11 + 16), *(_BYTE *)(v12 + 100) <= 6u)
    && (*(_BYTE *)(v12 + 100) != 6 || *(_BYTE *)(v12 + 101) < 0x14u) )
  {
    v10 = (_DWORD *)((char *)a1 + 40);
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_33;
  }
  v13 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *v13 = -1073741637;
LABEL_15:
    v2 = 1;
LABEL_32:
    v10 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_33;
  }
  *v13 = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *v13 = -1073676268;
    goto LABEL_15;
  }
  *(_DWORD *)(v1 + 56) = 0;
  v14 = **(_DWORD **)(v1 + 40);
  *(_DWORD *)(v1 + 152) = v14;
  if ( *((_QWORD *)a1 + 3) && !ndisFindPatternEntry(v3 + 63, v14)
    || (v15 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1)) != 0LL
    && !_bittest((const signed __int32 *)(v1 + 88), 0xEu)
    && !ndisFindPatternEntry(v15 + 89, v14) )
  {
    *v13 = -1073676261;
    goto LABEL_15;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_32;
  if ( v5->MajorNdisVersion > v7 || v5->MajorNdisVersion == v7 && v5->MinorNdisVersion >= v8 )
  {
    v17 = ndisMiniportPreRemoveWOLPattern(v5, (struct _NDIS_OID_REQUEST *)v1, &v20);
    v2 = v20;
    *v13 = v17;
    goto LABEL_32;
  }
  v16 = ndisXlateRemoveWolPatternToPacketPatternOid(v5, (struct _NDIS_OID_REQUEST *)v1, &v20);
  v2 = v20;
  *v13 = v16;
  v10 = (_DWORD *)((char *)a1 + 40);
  if ( v2 != 1 )
  {
    *v13 = 0;
    v2 = ndisPreRemoveMiniportWakeUpPattern(v5, (struct _NDIS_OID_REQUEST *)v1);
    v10 = (_DWORD *)((char *)a1 + 40);
    if ( v2 != 1 )
      goto LABEL_32;
  }
LABEL_33:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = *v10;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x57u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *(_QWORD *)a1,
      v19);
  }
  return v2;
}
