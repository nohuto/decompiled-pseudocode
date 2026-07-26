/*
 * XREFs of ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C003DD70 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _SINGLE_LIST_ENTRY *v3; // rbp
  char v4; // bl
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  int *v11; // rax
  int v12; // edx
  struct _SINGLE_LIST_ENTRY *v13; // rcx
  void *OidSourceHandle; // rax
  int v15; // edx
  __int64 *v16; // rcx
  void *v17; // r9
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x67u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v5,
      v1);
  v6 = *((_QWORD *)a1 + 3);
  if ( v6
    && (v7 = *(_QWORD *)(v6 + 24), *(_BYTE *)(v7 + 56) <= 6u)
    && (*(_BYTE *)(v7 + 56) != 6 || *(_BYTE *)(v7 + 57) < 0x14u)
    || (v9 = *((_QWORD *)a1 + 1)) != 0
    && !_bittest((const signed __int32 *)(v1 + 88), 0xEu)
    && (v10 = *(_QWORD *)(v9 + 16), *(_BYTE *)(v10 + 100) <= 6u)
    && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x14u) )
  {
    v8 = (_DWORD *)((char *)a1 + 40);
LABEL_8:
    *v8 = -1073741637;
    goto LABEL_28;
  }
  v8 = (_DWORD *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_8;
  *v8 = 0;
  if ( *(_DWORD *)(v1 + 48) >= 4u )
  {
    v11 = *(int **)(v1 + 40);
    *(_DWORD *)(v1 + 56) = 0;
    v12 = *v11;
    if ( !*((_QWORD *)a1 + 3) || ndisFindPatternEntry(v3 + 64, v12) )
    {
      v13 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
      if ( !v13 || _bittest((const signed __int32 *)(v1 + 88), 0xEu) || ndisFindPatternEntry(v13 + 90, v12) )
      {
        if ( !*(_QWORD *)a1 )
          goto LABEL_29;
        OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
        v16 = *(__int64 **)(v5 + 976);
        v17 = OidSourceHandle;
        while ( v16 )
        {
          if ( *((_DWORD *)v16 + 49) == v15 )
          {
            v19 = v16 + 1;
            v20 = v16 + 1;
            if ( v16 == (__int64 *)-8LL )
              break;
            do
            {
              v21 = v20 - 1;
              if ( (void *)v20[2] == v17 )
                break;
              v20 = (_QWORD *)*v20;
              v21 = 0LL;
            }
            while ( v20 );
            if ( !v21 )
              break;
            if ( !*v19 )
              goto LABEL_29;
            goto LABEL_28;
          }
          v16 = (__int64 *)*v16;
        }
      }
    }
    *v8 = -1073676261;
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 4;
    *v8 = -1073676268;
  }
LABEL_28:
  v4 = 1;
LABEL_29:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = *v8;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *(_QWORD *)a1,
      v22);
  }
  return v4;
}
