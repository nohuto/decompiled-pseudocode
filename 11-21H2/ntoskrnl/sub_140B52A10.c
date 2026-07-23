/*
 * XREFs of sub_140B52A10 @ 0x140B52A10
 * Callers:
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_14080C778 @ 0x14080C778 (sub_14080C778.c)
 *     sub_140B52AFC @ 0x140B52AFC (sub_140B52AFC.c)
 */

__int64 __fastcall sub_140B52A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rbx
  __int64 result; // rax

  *(_QWORD *)(a2 + 48) = a4;
  v8 = a4 - a3 + a5;
  *(_QWORD *)(v8 + 48) = a4;
  sub_140B52AFC(a1, a3, a4, *(unsigned int *)(a2 + 64));
  *(_DWORD *)(a2 + 104) |= 0x1000000u;
  *(_QWORD *)(a2 + 56) = a4 + *(unsigned int *)(v8 + 40);
  result = (unsigned int)(a6 << 12);
  *(_DWORD *)(a2 + 64) = result;
  if ( (dword_140D06880 & 0x4000) != 0 )
    return sub_14080C778(0LL, a3, 0, 2u);
  return result;
}
