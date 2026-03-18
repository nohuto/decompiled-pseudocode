/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00AA418
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0076530 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C00AAC00 (bSetDevDragWidth.c)
 *     SortMonitorsInSpatialOrder @ 0x1C00AAC60 (SortMonitorsInSpatialOrder.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // ebx
  INT v5; // esi
  __int64 v6; // rcx
  __int64 SessionDpiServerInfo; // r14
  __int64 v8; // rdi
  __int64 v9; // r15
  INT v10; // eax
  INT v11; // edx
  INT v12; // ebx
  INT v13; // edx
  INT v14; // eax
  INT v15; // edx
  INT v16; // edx
  INT v17; // eax
  INT v18; // edx
  INT v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  int v23; // ecx
  int v24; // r8d
  int v25; // edi
  int v26; // esi
  int v27; // ebx

  SetDpiDepSysMet(0LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(1LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(11LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(4LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(12LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(13LL, *((unsigned int *)a1 + 5));
  SetDpiDepSysMet(2LL, (unsigned int)(*(_DWORD *)(gpsi + 2336LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL, *((unsigned int *)a1 + 125));
  v2 = *(_DWORD *)(gpsi + 2332LL) - 2;
  if ( v2 >= *(_DWORD *)(gpsi + 2304LL) / 2 )
    v2 = *(_DWORD *)(gpsi + 2304LL) / 2;
  SetDpiDepSysMet(20LL, v2 & 0xFFFFFFFE);
  v3 = *(_DWORD *)(gpsi + 2336LL) - 2;
  if ( v3 >= *(_DWORD *)(gpsi + 2308LL) / 2 )
    v3 = *(_DWORD *)(gpsi + 2308LL) / 2;
  SetDpiDepSysMet(21LL, v3 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(gpsi + 2364LL);
  if ( (signed int)v4 >= *(_DWORD *)(gpsi + 2368LL) )
    v4 = *(_DWORD *)(gpsi + 2368LL);
  SetDpiDepSysMet(20LL, v4);
  SetDpiDepSysMet(21LL, v4);
  SetDpiDepSysMet(23LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(24LL, *((unsigned int *)a1 + 30));
  SetDpiDepSysMet(22LL, (unsigned int)(*(_DWORD *)(gpsi + 2380LL) + 1));
  SetDpiDepSysMet(25LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(26LL, *((unsigned int *)a1 + 55));
  SetDpiDepSysMet(9LL, (unsigned int)(*(_DWORD *)(gpsi + 2388LL) + 1));
  v5 = *((_DWORD *)a1 + 1);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v6);
  *(_DWORD *)(SessionDpiServerInfo + 4) = v5;
  SetDpiDepSysMet(14LL, (unsigned int)(v5 + 3));
  SetDpiDepSysMet(15LL, (unsigned int)(v5 + 3));
  v8 = Get96DpiMetrics();
  v9 = Get96DpiServerInfo();
  v10 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v11 = *(_DWORD *)(v9 + 20) + 2;
  if ( v10 > v11 )
    v11 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2456LL) = v11;
  v12 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v13 = 8;
  else
    v13 = EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2452LL) = v13;
  v14 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v15 = *(_DWORD *)(v8 + 44) + 2;
  if ( v14 > v15 )
    v15 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2500LL) = v15;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v16 = 8;
  else
    v16 = EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2496LL) = v16;
  v17 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v18 = *(_DWORD *)(v8 + 28);
  if ( v17 > v18 )
    v18 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2508LL) = v18;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > 8 )
    v12 = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2504LL) = v12;
  *(_DWORD *)(gpsi + 2440LL) = *(_DWORD *)(gpsi + 2508LL) + 1;
  *(_DWORD *)(gpsi + 2412LL) = *(_DWORD *)(gpsi + 2456LL) + 1;
  *(_DWORD *)(gpsi + 2492LL) = *(_DWORD *)(gpsi + 2500LL) + 1;
  *(_DWORD *)(gpsi + 2520LL) = EngMulDiv(*(_DWORD *)(gpsi + 2400LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2448LL) = EngMulDiv(*(_DWORD *)(gpsi + 2328LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2420LL) = EngMulDiv(*(_DWORD *)(gpsi + 2300LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2404LL) = EngMulDiv(*(_DWORD *)(gpsi + 2284LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2408LL) = EngMulDiv(*(_DWORD *)(gpsi + 2288LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2444LL) = EngMulDiv(*(_DWORD *)(gpsi + 2324LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2416LL) = EngMulDiv(*(_DWORD *)(gpsi + 2296LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v19 = EngMulDiv(v5, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v20 = Get96DpiServerInfo();
  v21 = 2460LL;
  *(_DWORD *)(v20 + 4) = v19;
  v22 = v19 + 3;
  do
  {
    *(_DWORD *)(v21 + gpsi) = v22;
    v21 += 4LL;
  }
  while ( v21 < 2468 );
  v23 = *(_DWORD *)(gpsi + 2520LL);
  v24 = *(_DWORD *)(gpsi + 2400LL);
  v25 = v23 + *(_DWORD *)(gpsi + 2460LL);
  v26 = v23 + *(_DWORD *)(gpsi + 2464LL);
  v27 = v24 + *(_DWORD *)(gpsi + 2344LL);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2336LL)
                 + 3 * *(_DWORD *)(gpsi + 2332LL)
                 + 2 * (v24 + 2 + *(_DWORD *)(gpsi + 2340LL) + 2 * *(_DWORD *)(SessionDpiServerInfo + 16))));
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(gpsi + 2292LL) + 2 * v27));
  *(_DWORD *)(gpsi + 2468LL) = *(_DWORD *)(gpsi + 2456LL)
                             + 3 * *(_DWORD *)(gpsi + 2452LL)
                             + 2 * (v25 + 2 + 2 * *(_DWORD *)(v9 + 16));
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2412LL) + 2 * v26;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*((_DWORD *)a1 + 1) + 3));
  SortMonitorsInSpatialOrder();
}
