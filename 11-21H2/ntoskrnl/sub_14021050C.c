/*
 * XREFs of sub_14021050C @ 0x14021050C
 * Callers:
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028F83C @ 0x14028F83C (sub_14028F83C.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 * Callees:
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 */

unsigned __int64 __fastcall sub_14021050C(__int64 a1, __int64 a2, char a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  v7 = (unsigned int)a3;
  if ( a1 )
    sub_140344A30(a2, a1, v7);
  else
    sub_140291010(0LL, a2, v7, 0LL);
  v8 = *(_QWORD *)(a2 + 32);
  if ( a4 > v8 || (result = v8 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
