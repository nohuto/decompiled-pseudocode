/*
 * XREFs of sub_14083347C @ 0x14083347C
 * Callers:
 *     sub_140833350 @ 0x140833350 (sub_140833350.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140833748 @ 0x140833748 (sub_140833748.c)
 */

__int64 __fastcall sub_14083347C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x60uLL);
  sub_140833748(a1 + 16, 4LL, sub_1409234E0, a3);
  result = sub_140359DE0(a2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 88) |= 1u;
    result = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
    *(_DWORD *)(a1 + 92) = result;
  }
  *(_QWORD *)(a1 + 80) = a2;
  return result;
}
