/*
 * XREFs of ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00858C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

char __fastcall ndisOidPreReceiveFilterCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  int v2; // ebx
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // r12
  unsigned __int16 *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r15d
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
      0xAu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v1,
      v5,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x38u )
    {
      *(_DWORD *)(v3 + 56) = 56;
      v2 = -1073676268;
      v4 = 1;
      goto LABEL_21;
    }
    if ( !v1 )
      goto LABEL_22;
    if ( *(_DWORD *)(v3 + 32) == 66081 )
      v7 = *(unsigned __int16 **)(v1 + 3536);
    else
      v7 = *(unsigned __int16 **)(v1 + 3544);
    if ( v7 )
    {
      v8 = v7[1];
      if ( v7[1] >= 0x54u )
        v8 = 84;
      v9 = *(_DWORD *)(v3 + 48);
      if ( v8 < v9 )
        v9 = v8;
      v10 = v9;
      memmove(*(void **)(v3 + 40), v7, v9);
      v11 = *(_QWORD *)(v3 + 40);
      v4 = 1;
      if ( v10 < 0x54 )
      {
        if ( v10 >= 0x38 )
        {
          *(_BYTE *)(v11 + 1) = 1;
          *(_WORD *)(v11 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v11 + 1) = 2;
        *(_WORD *)(v11 + 2) = 84;
      }
      *(_DWORD *)(v3 + 52) = v10;
      goto LABEL_21;
    }
  }
  v4 = 1;
  v2 = -1073741637;
LABEL_21:
  *((_DWORD *)a1 + 10) = v2;
LABEL_22:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v2;
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v1,
      v5,
      v4,
      *(_DWORD *)v13);
  }
  return v4;
}
