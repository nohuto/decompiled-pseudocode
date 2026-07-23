/*
 * XREFs of sub_140589FC0 @ 0x140589FC0
 * Callers:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_1402655A0 @ 0x1402655A0 (sub_1402655A0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140589EE0 @ 0x140589EE0 (sub_140589EE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140589FC0(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  int v5; // eax
  _WORD *v6; // rax
  _WORD *v7; // rsi

  v1 = *(unsigned int **)(a1 + 64);
  v3 = (unsigned __int64)v1[10] >> 12;
  v4 = *(_QWORD *)(a1 + 40) - v3;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) == 0 )
    sub_140589EE0(*(_QWORD *)a1, v4);
  if ( !v3 )
    goto LABEL_4;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 0x40) == 0 )
      sub_1402655A0(a1);
    sub_140221A30((ULONG_PTR)v1, 0);
LABEL_4:
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( v4 > 0x800 )
  {
    v6 = sub_1402828F0(64, 8 * v3 + 48, 0x69646D4Du);
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      v6[5] = 0;
      *((_QWORD *)v6 + 4) = 0LL;
      *((_DWORD *)v6 + 11) = 0;
      v6[4] = 8 * (v3 + 6);
      *((_DWORD *)v6 + 10) = (_DWORD)v3 << 12;
      memmove(v6 + 24, (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v3);
      v7[5] = *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v7;
    }
  }
}
