/*
 * XREFs of IopSelectNextConfiguration @ 0x14081AFC4
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x140816048 (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     IopAddRemoveReqDescs @ 0x140818AC8 (IopAddRemoveReqDescs.c)
 */

char __fastcall IopSelectNextConfiguration(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebx
  __int64 *v8; // r14
  __int64 v9; // rbp
  __int64 *v11; // r14
  __int64 v12; // rbx

  v3 = 0;
  v7 = 0;
  if ( a2 )
  {
    v8 = (__int64 *)(a1 + 32);
    do
    {
      v9 = *v8;
      IopAddRemoveReqDescs(**(_QWORD **)(*v8 + 16) + 24LL, *(_DWORD *)(**(_QWORD **)(*v8 + 16) + 20LL), 0LL, 0);
      *(_QWORD *)(v9 + 16) += 8LL;
      if ( *(_QWORD *)(v9 + 16) < *(_QWORD *)(v9 + 24) )
        break;
      ++v7;
      v8 += 8;
      *(_QWORD *)(v9 + 16) = v9 + 40;
    }
    while ( v7 < a2 );
  }
  if ( v7 == a2 )
    return 0;
  if ( a2 )
  {
    v11 = (__int64 *)(a1 + 32);
    do
    {
      v12 = *v11;
      IopAddRemoveReqDescs(**(_QWORD **)(*v11 + 16) + 24LL, *(_DWORD *)(**(_QWORD **)(*v11 + 16) + 20LL), a3, 1);
      if ( *(_QWORD *)(v12 + 16) != v12 + 40 )
        break;
      ++v3;
      v11 += 8;
    }
    while ( v3 < a2 );
  }
  return 1;
}
