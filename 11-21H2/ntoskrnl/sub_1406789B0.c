/*
 * XREFs of sub_1406789B0 @ 0x1406789B0
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 * Callees:
 *     sub_140682CF0 @ 0x140682CF0 (sub_140682CF0.c)
 *     sub_140682D58 @ 0x140682D58 (sub_140682D58.c)
 */

__int64 __fastcall sub_1406789B0(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  sub_140682D58(CurrentThread);
  v5 = *(_QWORD *)(a1 + 1264);
  v6 = 0;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 16) = 0;
    v6 = 1;
    *(_QWORD *)(a2 + 8) = v5;
  }
  v7 = 2LL * v6;
  *(_QWORD *)(a2 + 8 * v7 + 8) = a1;
  *(_BYTE *)(a2 + 8 * v7 + 16) = 0;
  *(_DWORD *)a2 = v6 + 1;
  return sub_140682CF0(CurrentThread);
}
