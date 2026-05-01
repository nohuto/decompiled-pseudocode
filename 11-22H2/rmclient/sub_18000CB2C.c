/*
 * XREFs of sub_18000CB2C @ 0x18000CB2C
 * Callers:
 *     sub_18000F1DC @ 0x18000F1DC (sub_18000F1DC.c)
 * Callees:
 *     sub_18000CC20 @ 0x18000CC20 (sub_18000CC20.c)
 *     sub_18000CC5C @ 0x18000CC5C (sub_18000CC5C.c)
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall sub_18000CB2C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax

  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  v4 = a3[1];
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  a3[1] = 0LL;
  memset((void *)(a1 + 40), 0, 0x108uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  sub_18000CC5C(a1 + 40);
  sub_18000CC20(a1 + 232);
  return a1;
}
