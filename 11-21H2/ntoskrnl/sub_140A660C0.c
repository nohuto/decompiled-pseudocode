/*
 * XREFs of sub_140A660C0 @ 0x140A660C0
 * Callers:
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055B244 @ 0x14055B244 (sub_14055B244.c)
 *     sub_14055C000 @ 0x14055C000 (sub_14055C000.c)
 *     sub_14093CC0C @ 0x14093CC0C (sub_14093CC0C.c)
 *     sub_140A66DB4 @ 0x140A66DB4 (sub_140A66DB4.c)
 */

char __fastcall sub_140A660C0(char *DeferredContext)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v4; // r12
  unsigned __int8 CurrentIrql; // r10
  __int64 v6; // r9
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 *v17[2]; // [rsp+48h] [rbp-20h] BYREF
  __int16 v18; // [rsp+58h] [rbp-10h]
  int v19; // [rsp+5Ah] [rbp-Eh]
  __int16 v20; // [rsp+5Eh] [rbp-Ah]
  int v21; // [rsp+B0h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)DeferredContext;
  v2 = 0LL;
  *((_DWORD *)DeferredContext + 2) = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v4 = 0LL;
  v22 = 0;
  v15 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  sub_14093CC0C();
  Affinity.Group = dword_140D0E5E0[0] >> 6;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (dword_140D0E5E0[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, (PGROUP_AFFINITY)DeferredContext + 6);
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 3) = 1;
  sub_14055C000();
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    v4 = sub_14055A628(0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  DeferredContext[88] = CurrentIrql;
  KeInitializeDpc((PRKDPC)(DeferredContext + 24), (PKDEFERRED_ROUTINE)sub_140A66050, DeferredContext);
  DeferredContext[25] = 2;
  v17[1] = (unsigned __int16 *)qword_140D06E48[0];
  v17[0] = (unsigned __int16 *)dword_140D06E40;
  v18 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v21, v17) )
  {
    if ( v21 == *((_DWORD *)DeferredContext + 28) )
    {
      _InterlockedAdd((volatile signed __int32 *)DeferredContext + 4, 1u);
    }
    else
    {
      v7 = *((_DWORD *)DeferredContext + 4);
      if ( !*((_QWORD *)DeferredContext + 10) )
        *((_WORD *)DeferredContext + 13) = v21 + 2048;
      KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
      v22 = 0;
      while ( v7 == *((_DWORD *)DeferredContext + 4) )
        sub_1402F32E0(&v22, v8, v9, v10);
    }
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  v11 = *(_DWORD *)(v1 + 80);
  if ( (v11 & 0x80u) != 0 )
  {
    v12 = sub_14055A628(0);
    v11 = *(_DWORD *)(v1 + 80);
    v2 = v12 - v4;
  }
  if ( (v11 & 0x100) == 0 )
    sub_140A66DB4(DeferredContext, 2LL, &v15);
  byte_140C22260 = 1;
  sub_140A66DB4(DeferredContext, 7LL, &v24);
  sub_140A66DB4(DeferredContext, 3LL, &v23);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  v13 = *(_DWORD *)(v1 + 80);
  if ( (v13 & 0x80u) != 0 )
    LOBYTE(v13) = sub_14055B244(*(const GUID **)DeferredContext, v2, v15, v24, v23);
  return v13;
}
