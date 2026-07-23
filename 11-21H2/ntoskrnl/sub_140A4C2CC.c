/*
 * XREFs of sub_140A4C2CC @ 0x140A4C2CC
 * Callers:
 *     sub_140A4C0E8 @ 0x140A4C0E8 (sub_140A4C0E8.c)
 *     sub_140A4C204 @ 0x140A4C204 (sub_140A4C204.c)
 * Callees:
 *     sub_140A4C3CC @ 0x140A4C3CC (sub_140A4C3CC.c)
 *     sub_140A4D828 @ 0x140A4D828 (sub_140A4D828.c)
 *     sub_140A4D96C @ 0x140A4D96C (sub_140A4D96C.c)
 */

char __fastcall sub_140A4C2CC(__int64 a1, void *a2, _DWORD *a3, void *a4, int a5, unsigned int a6)
{
  char *v7; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int64 v13; // rsi
  char result; // al
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax

  v7 = (char *)qword_140C22C58;
  v11 = 8 * (unsigned __int8)*a3;
  v12 = ((*a3 >> 8) & 0x3FFFFF) + v11;
  v13 = sub_140A4D828(qword_140C22C58, v12 + 4, (unsigned int)(a5 << 12), a6);
  result = 0;
  if ( v13 )
  {
    sub_140A4C3CC(a3, 4uLL);
    sub_140A4C3CC(a4, v11);
    sub_140A4C3CC(a2, (*a3 >> 8) & 0x3FFFFF);
    v15 = __rdtsc();
    sub_140A4D96C(v7, v7 + 32, v13, v12 + 4);
    v16 = __rdtsc();
    *(_QWORD *)(a1 + 80) += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
    return 1;
  }
  return result;
}
