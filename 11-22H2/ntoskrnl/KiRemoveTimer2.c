/*
 * XREFs of KiRemoveTimer2 @ 0x140251790
 * Callers:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14024F590 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1402514C0 (KiTimer2Expiration.c)
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A40C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  char *v2; // rsi
  unsigned int v3; // edi
  int v4; // r12d
  __int64 v5; // r14
  __int64 v6; // r15
  char v7; // al
  _RTL_RB_TREE *v8; // rbp
  __int64 v9; // rcx
  _RTL_BALANCED_NODE *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  bool v16; // cf
  __int64 result; // rax
  _RTL_BALANCED_NODE *Min; // rax
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rcx

  v2 = (char *)(a1 + 130);
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = 72LL;
  do
  {
    v7 = *v2;
    if ( (*v2 & 0x10) != 0 )
      goto LABEL_7;
    v8 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v7 & 7) + 12853984);
    v9 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 12853984);
    v10 = (_RTL_BALANCED_NODE *)(a1 + 24 * (v3 + 1LL));
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
        v11 = 0LL;
      else
        v11 = v9 ^ ((unsigned __int64)v8 | 1);
    }
    else
    {
      v11 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 12853984);
    }
    if ( (_RTL_BALANCED_NODE *)v11 != v10 )
    {
      RtlRbRemoveNode(v8, v10);
      goto LABEL_7;
    }
    RtlRbRemoveNode(v8, v10);
    Min = v8->Min;
    v4 = 1;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        goto LABEL_24;
      v19 = (unsigned __int64)Min ^ ((unsigned __int64)v8 | 1);
    }
    else
    {
      v19 = (__int64)v8->Min;
    }
    if ( v19 )
    {
      v8[1].Root = *(_RTL_BALANCED_NODE **)(v6 - v5 + v19 - 24);
      goto LABEL_7;
    }
LABEL_24:
    v8[1].Root = (_RTL_BALANCED_NODE *)-1LL;
LABEL_7:
    ++v3;
    v6 += 8LL;
    ++v2;
    v5 += 24LL;
  }
  while ( v3 < 2 );
  if ( v4 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v12 = -1LL;
    v13 = (__int64 *)&unk_140C422F0;
    v14 = 5LL;
    do
    {
      v15 = v12;
      v12 = *v13;
      v16 = *v13 < v15;
      v13 += 3;
      if ( !v16 )
        v12 = v15;
      --v14;
    }
    while ( v14 );
    KiNextTimer2DueTime = v12;
  }
  result = *(unsigned __int8 *)(a1 + 129);
  if ( (result & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    v20 = *(volatile signed __int32 **)(result + 35000);
    if ( v20 )
      _InterlockedAnd(v20, 0xFFF7FFFF);
  }
  return result;
}
