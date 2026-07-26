/*
 * XREFs of ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0024D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

char __fastcall ndisOidPreRSSCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  char v4; // bl
  __int64 v5; // r15
  unsigned int v7; // eax
  unsigned __int16 v8; // si
  unsigned __int64 v9; // rdx

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x87u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      v1,
      v5,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_9;
  if ( !*(_QWORD *)a1 )
    goto LABEL_5;
  if ( *(_WORD *)(v1 + 2694) )
  {
    *((_DWORD *)a1 + 10) = 0;
    v7 = *(_DWORD *)(v3 + 48);
    if ( v7 >= 0x10 )
    {
      if ( *(_BYTE *)(v1 + 1992) )
      {
        *(_DWORD *)(v1 + 2696) |= 0x8000000u;
        v7 = *(_DWORD *)(v3 + 48);
      }
      v8 = 20;
      v9 = v7;
      if ( v7 >= 0x14 )
        v9 = 20LL;
      if ( v9 >= *(unsigned __int16 *)(v1 + 2694) )
      {
        v8 = *(_WORD *)(v1 + 2694);
      }
      else if ( v7 < 0x14 )
      {
        v8 = *(_WORD *)(v3 + 48);
      }
      memmove(*(void **)(v3 + 40), (const void *)(v1 + 2692), v8);
      *(_WORD *)(*(_QWORD *)(v3 + 40) + 2LL) = v8;
      *(_DWORD *)(v3 + 52) = v8;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
LABEL_9:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  v4 = 1;
LABEL_5:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x88u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      v1,
      v5,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
