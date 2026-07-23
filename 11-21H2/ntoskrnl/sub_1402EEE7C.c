/*
 * XREFs of sub_1402EEE7C @ 0x1402EEE7C
 * Callers:
 *     IoTryQueueWorkItem @ 0x140255440 (IoTryQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x1402EEE50 (ExTryQueueWorkItem.c)
 * Callees:
 *     sub_1402EF2BC @ 0x1402EF2BC (sub_1402EF2BC.c)
 *     sub_1402EF304 @ 0x1402EF304 (sub_1402EF304.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 *     sub_140346770 @ 0x140346770 (sub_140346770.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402EEE7C(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  int v4; // r12d
  char v7; // r15
  __int64 CurrentIrql; // rbx
  unsigned int v9; // esi
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // r14
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rdi
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+34h] [rbp-34h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v23 = 0;
  v7 = 0;
  sub_140346210(a2);
  v22 = sub_1402EF304(a3);
  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v9 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  v10 = v9;
  if ( (unsigned __int16)v9 < (unsigned __int16)word_140D05000 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)qword_140D31700[v10];
      if ( v11 == (unsigned __int16 *)((char *)&unk_140D3DDC0 + 280 * v10) )
        v11 = 0LL;
      if ( (unsigned __int8)sub_140346770(a1, v11, a4) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v11) + 8LL * (int)a4);
        if ( (v14 & 1) != 0 )
          v14 = 0LL;
        v7 = sub_1403462B0(v14, v4, v22, v12, v13);
        if ( v7 )
        {
LABEL_9:
          LOBYTE(CurrentIrql) = v24;
          break;
        }
        *(_DWORD *)(v14 + 716) |= 0x80000000;
        sub_1402EF2BC(a1, v11, v14);
      }
      v10 = sub_14030B3F0(v9, &v23);
      if ( v10 >= (unsigned __int16)word_140D05000 )
        goto LABEL_9;
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v7;
}
