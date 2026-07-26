/*
 * XREFs of ?ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 */

char __fastcall ndisOidPreNicSwitchCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  char v13[4]; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x20u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v1,
      v5,
      v3);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x20u )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      v4 = 1;
    }
    else
    {
      if ( !v1 )
        goto LABEL_19;
      v4 = 1;
      if ( *(_DWORD *)(v3 + 32) == 66094 )
        v7 = *(_QWORD *)(v1 + 3560);
      else
        v7 = *(_QWORD *)(v1 + 3568);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v3 + 48);
        v9 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v9 = *(_OWORD *)v7;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)(v7 + 16);
        if ( v8 >= 0x74 )
        {
          *(_OWORD *)(v9 + 32) = *(_OWORD *)(v7 + 32);
          *(_OWORD *)(v9 + 48) = *(_OWORD *)(v7 + 48);
          *(_OWORD *)(v9 + 64) = *(_OWORD *)(v7 + 64);
          *(_OWORD *)(v9 + 80) = *(_OWORD *)(v7 + 80);
          *(_OWORD *)(v9 + 96) = *(_OWORD *)(v7 + 96);
          if ( v8 >= 0x84 )
          {
            *(_OWORD *)(v9 + 112) = *(_OWORD *)(v7 + 112);
            *(_DWORD *)(v9 + 128) = *(_DWORD *)(v7 + 128);
            *(_DWORD *)(v3 + 52) = 132;
          }
          else
          {
            *(_DWORD *)(v9 + 112) = *(_DWORD *)(v7 + 112);
            v11 = *(_QWORD *)(v3 + 40);
            *(_BYTE *)(v11 + 1) = 2;
            *(_WORD *)(v11 + 2) = 116;
            *(_DWORD *)(v3 + 52) = 116;
          }
        }
        else
        {
          v10 = *(_QWORD *)(v3 + 40);
          *(_BYTE *)(v10 + 1) = 1;
          *(_WORD *)(v10 + 2) = 32;
          *(_DWORD *)(v3 + 52) = 32;
        }
        goto LABEL_18;
      }
    }
    v2 = -1073741637;
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 32;
    v2 = -1073676268;
    v4 = 1;
  }
LABEL_18:
  *((_DWORD *)a1 + 10) = v2;
LABEL_19:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v2;
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x21u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v1,
      v5,
      v4,
      *(_DWORD *)v13);
  }
  return v4;
}
