/*
 * XREFs of sub_14020AA84 @ 0x14020AA84
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 * Callees:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

__int64 __fastcall sub_14020AA84(_QWORD *a1)
{
  __int64 result; // rax

  result = sub_140347C10(a1, 0LL, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 18) = 1;
  return result;
}
