/*
 * XREFs of ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0005AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z @ 0x1C003E218 (-ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z.c)
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AD924 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreGenStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  char v3; // cl
  __int64 v4; // rsi
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+50h] [rbp+28h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v10 = 0LL;
  v3 = 0;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  else
  {
    v4 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      return 0;
    if ( *(_BYTE *)(v4 + 32) >= 6u )
    {
      if ( *(_QWORD *)(v4 + 4448) )
        return ndisSSGetCachedOidValue(a1);
      return v3;
    }
    if ( *(_QWORD *)(v1 + 144) )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) >= 0x98u )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(v1 + 144) + 56LL);
        if ( !v6 )
        {
          v7 = *(_QWORD *)(v1 + 40);
          *(_QWORD *)v7 = 9961856LL;
          v8 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
          *(_DWORD *)(v7 + 4) = 16;
          *(_QWORD *)(v7 + 8) = v8;
          *(_QWORD *)(v7 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
          *(_DWORD *)(v7 + 4) = 48;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20219u, &v10);
          *(_QWORD *)(v7 + 24) = v10;
          *(_DWORD *)(v7 + 4) = 56;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20208u, &v10);
          *(_QWORD *)(v7 + 32) = v10;
          *(_DWORD *)(v7 + 4) = 57;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2020Au, &v10);
          *(_QWORD *)(v7 + 40) = v10;
          *(_DWORD *)(v7 + 4) = 59;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2020Cu, &v10);
          *(_QWORD *)(v7 + 48) = v10;
          *(_DWORD *)(v7 + 4) = 63;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2021Au, &v10);
          *(_QWORD *)(v7 + 56) = v10;
          *(_DWORD *)(v7 + 4) = 575;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20202u, &v10);
          *(_QWORD *)(v7 + 64) = v10;
          *(_DWORD *)(v7 + 4) = 639;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20204u, &v10);
          *(_QWORD *)(v7 + 72) = v10;
          *(_DWORD *)(v7 + 4) = 767;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20206u, &v10);
          v9 = v10;
          *(_DWORD *)(v7 + 4) = 1023;
          *(_QWORD *)(v7 + 80) = v9;
          *(_QWORD *)(v7 + 88) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
          *(_DWORD *)(v7 + 4) = 2047;
          *(_QWORD *)(v7 + 96) = 0LL;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20207u, &v10);
          *(_QWORD *)(v7 + 104) = v10;
          *(_DWORD *)(v7 + 4) = 67583;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20209u, &v10);
          *(_QWORD *)(v7 + 112) = v10;
          *(_DWORD *)(v7 + 4) = 198655;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2020Bu, &v10);
          *(_QWORD *)(v7 + 120) = v10;
          *(_DWORD *)(v7 + 4) = 460799;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20201u, &v10);
          *(_QWORD *)(v7 + 128) = v10;
          *(_DWORD *)(v7 + 4) = 985087;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20203u, &v10);
          *(_QWORD *)(v7 + 136) = v10;
          *(_DWORD *)(v7 + 4) = 2033663;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20205u, &v10);
          *(_QWORD *)(v7 + 144) = v10;
          *(_DWORD *)(v7 + 4) = 4130815;
          *(_DWORD *)(v1 + 52) = 152;
          *((_DWORD *)a1 + 10) = 0;
          ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
          v3 = 1;
          *(_QWORD *)(v1 + 144) = 0LL;
          return v3;
        }
        *((_DWORD *)a1 + 10) = v6;
      }
      else
      {
        *(_DWORD *)(v1 + 56) = 152;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
      *(_QWORD *)(v1 + 144) = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741670;
    }
    return 1;
  }
}
