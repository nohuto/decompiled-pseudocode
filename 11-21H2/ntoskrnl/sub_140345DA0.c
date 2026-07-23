/*
 * XREFs of sub_140345DA0 @ 0x140345DA0
 * Callers:
 *     IoQueueWorkItem @ 0x14023E0D0 (IoQueueWorkItem.c)
 *     sub_1402DE684 @ 0x1402DE684 (sub_1402DE684.c)
 *     IoQueueWorkItemEx @ 0x140345D70 (IoQueueWorkItemEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 *     sub_140346260 @ 0x140346260 (sub_140346260.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 *     sub_140346770 @ 0x140346770 (sub_140346770.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140345DA0(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v3; // rbx
  int v4; // r12d
  char v5; // di
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned int v8; // eax
  int v9; // esi
  unsigned __int16 *v10; // r15
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  sub_140346210(BugCheckParameter2);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = dword_140016028[v3];
  v5 = 0;
  v23 = 0;
  v6 = *((_QWORD *)qword_140D06C40 + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  v9 = v8;
  if ( v8 < (unsigned __int16)word_140D05000 )
  {
    while ( 1 )
    {
      v10 = (unsigned __int16 *)qword_140D31700[(unsigned __int16)v8];
      if ( v10 == (unsigned __int16 *)((char *)&unk_140D3DDC0 + 280 * (unsigned __int16)v8) )
        v10 = 0LL;
      if ( (unsigned __int8)sub_140346770(v6, v10, 1LL) )
        break;
      v8 = sub_14030B3F0(v9, &v23);
      if ( v8 >= (unsigned __int16)word_140D05000 )
        goto LABEL_13;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL * *v10) + 8LL);
    if ( (v13 & 1) != 0 )
      v13 = v12;
    sub_1403462B0(v13, BugCheckParameter2, v4, v11, v12);
    if ( (unsigned __int8)sub_140346260(v13, *(unsigned int *)(v13 + 720), v14, v15) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL * *v10) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_13:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v3, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
