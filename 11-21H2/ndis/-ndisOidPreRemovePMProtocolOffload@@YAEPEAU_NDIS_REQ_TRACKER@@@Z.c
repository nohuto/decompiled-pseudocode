/*
 * XREFs of ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008D838 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _SINGLE_LIST_ENTRY *v3; // rbp
  char v4; // bl
  __int64 v5; // r14
  struct _SINGLE_LIST_ENTRY *v6; // rax
  _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  int v11; // edx
  struct _SINGLE_LIST_ENTRY *v12; // rcx
  void *OidSourceHandle; // rax
  int v14; // edx
  __int64 *v15; // rcx
  void *v16; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v6 = v3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x67u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      v5,
      v1);
    v6 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  }
  if ( (!v6
     || (Next = v6[3].Next, LOBYTE(Next[7].Next) > 6u)
     || LOBYTE(Next[7].Next) == 6 && BYTE1(Next[7].Next) >= 0x14u)
    && ((v8 = *((_QWORD *)a1 + 1)) == 0
     || _bittest((const signed __int32 *)(v1 + 88), 0xEu)
     || (v9 = *(_QWORD *)(v8 + 16), *(_BYTE *)(v9 + 100) > 6u)
     || *(_BYTE *)(v9 + 100) == 6 && *(_BYTE *)(v9 + 101) >= 0x14u)
    && *(_DWORD *)(v1 + 4) == 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      v10 = *(int **)(v1 + 40);
      *(_DWORD *)(v1 + 56) = 0;
      v11 = *v10;
      if ( !*((_QWORD *)a1 + 3) || ndisFindPatternEntry(v3 + 64, v11) )
      {
        v12 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
        if ( !v12 || _bittest((const signed __int32 *)(v1 + 88), 0xEu) || ndisFindPatternEntry(v12 + 90, v11) )
        {
          if ( !*(_QWORD *)a1 )
            goto LABEL_28;
          OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
          v15 = *(__int64 **)(v5 + 976);
          v16 = OidSourceHandle;
          while ( v15 )
          {
            if ( *((_DWORD *)v15 + 49) == v14 )
            {
              v18 = v15 + 1;
              v19 = v15 + 1;
              if ( v15 == (__int64 *)-8LL )
                break;
              do
              {
                v20 = v19 - 1;
                if ( (void *)v19[2] == v16 )
                  break;
                v19 = (_QWORD *)*v19;
                v20 = 0LL;
              }
              while ( v19 );
              if ( !v20 )
                break;
              if ( !*v18 )
                goto LABEL_28;
              goto LABEL_27;
            }
            v15 = (__int64 *)*v15;
          }
        }
      }
      *((_DWORD *)a1 + 10) = -1073676261;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_27:
  v4 = 1;
LABEL_28:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      *(_QWORD *)a1,
      v21);
  }
  return v4;
}
