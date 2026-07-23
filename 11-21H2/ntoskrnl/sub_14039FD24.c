/*
 * XREFs of sub_14039FD24 @ 0x14039FD24
 * Callers:
 *     sub_1403715C4 @ 0x1403715C4 (sub_1403715C4.c)
 * Callees:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 */

__int64 __fastcall sub_14039FD24(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned __int8 v5; // al

  v4 = ((((unsigned int)dword_140C1BBE0 >> 10) & 1) + 2LL) << 6;
  if ( *(_BYTE *)(a2 + 2) == 1 )
    v5 = 0;
  else
    v5 = *(_BYTE *)(v4 + *((unsigned __int8 *)KeGetCurrentThread() + 1653) + a2);
  return sub_14034A490(
           a1,
           a2,
           *(_QWORD *)(v4
                     + *(unsigned __int8 *)(a1 + 56)
                     - (unsigned __int64)((*(_BYTE *)(a1 + 56) - 1) & 7)
                     + 7
                     + 8LL * v5
                     + a2),
           a3,
           a4);
}
