/*
 * XREFs of sub_1409455A8 @ 0x1409455A8
 * Callers:
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_140945A9C @ 0x140945A9C (sub_140945A9C.c)
 * Callees:
 *     sub_1405600A8 @ 0x1405600A8 (sub_1405600A8.c)
 *     sub_140957130 @ 0x140957130 (sub_140957130.c)
 */

NTSTATUS __fastcall sub_1409455A8(__int64 a1, char a2, char a3, __int16 *a4)
{
  unsigned __int16 v4; // bx
  _QWORD *v6; // rdi
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  v13[0] = 0x20000LL;
  v6 = v13;
  v7 = &word_140867F00;
  if ( a1 != -40 )
    v6 = (_QWORD *)(a1 + 40);
  v13[1] = &word_140867F00;
  if ( a4 )
  {
    v7 = (const WCHAR *)*((_QWORD *)a4 + 1);
    v4 = *a4;
  }
  result = sub_140957130();
  if ( (byte_140C0DD4C & 1) != 0 )
    return sub_1405600A8(v11, v10, v12, *(_WORD *)v6 >> 1, v6[1], a2, a3, v4 >> 1, (__int64)v7);
  return result;
}
