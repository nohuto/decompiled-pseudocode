/*
 * XREFs of ?ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007F150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 */

char __fastcall ndisOidPreNicSwitchCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // r15
  unsigned int v7; // edx
  __int64 v8; // rax
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
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      v1,
      v5,
      v3);
  *((_DWORD *)a1 + 10) = 0;
  v7 = *(_DWORD *)(v3 + 48);
  if ( v7 >= 0x20 )
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
        v8 = *(_QWORD *)(v1 + 3560);
      else
        v8 = *(_QWORD *)(v1 + 3568);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v9 = *(_OWORD *)v8;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)(v8 + 16);
        if ( v7 >= 0x74 )
        {
          *(_OWORD *)(v9 + 32) = *(_OWORD *)(v8 + 32);
          *(_OWORD *)(v9 + 48) = *(_OWORD *)(v8 + 48);
          *(_OWORD *)(v9 + 64) = *(_OWORD *)(v8 + 64);
          *(_OWORD *)(v9 + 80) = *(_OWORD *)(v8 + 80);
          *(_OWORD *)(v9 + 96) = *(_OWORD *)(v8 + 96);
          if ( v7 >= 0x84 )
          {
            *(_OWORD *)(v9 + 112) = *(_OWORD *)(v8 + 112);
            *(_DWORD *)(v9 + 128) = *(_DWORD *)(v8 + 128);
            *(_DWORD *)(v3 + 52) = 132;
          }
          else
          {
            *(_DWORD *)(v9 + 112) = *(_DWORD *)(v8 + 112);
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
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x21u,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      v1,
      v5,
      v4,
      *(_DWORD *)v13);
  }
  return v4;
}
