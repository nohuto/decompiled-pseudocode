/*
 * XREFs of sub_140A121C0 @ 0x140A121C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140A12218 @ 0x140A12218 (sub_140A12218.c)
 */

__int64 __fastcall sub_140A121C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // eax

  v5 = *(_DWORD *)(a2 + 544);
  v8 = sub_1407ECF5C(a3, a5, 0xFFu);
  return sub_140A12218(a1, *(unsigned int *)(a3 + 1328), v5, v8);
}
