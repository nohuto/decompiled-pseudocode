/*
 * XREFs of sub_1402A08EC @ 0x1402A08EC
 * Callers:
 *     sub_1402A08BC @ 0x1402A08BC (sub_1402A08BC.c)
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 * Callees:
 *     sub_1402A09C8 @ 0x1402A09C8 (sub_1402A09C8.c)
 *     sub_1402A09E8 @ 0x1402A09E8 (sub_1402A09E8.c)
 */

__int64 __fastcall sub_1402A08EC(int a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int16 v8; // bx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a2 >> 20;
  v11 = 0LL;
  v10[0] = 0LL;
  v8 = 0;
  if ( v4 < 2 )
    v4 = 2;
  HIDWORD(v11) = (HIDWORD(v11) & 0xFFFFF | 0x80100000) - 1;
  if ( word_140D05014 )
  {
    do
    {
      v12 = 0LL;
      sub_1402A09E8(a1, v8, v4, (unsigned int)&v12, (__int64)v10);
      *(_QWORD *)(a3 + 8LL * v8 + 8) = v12;
      sub_1402A09C8(&v11, v10);
      ++v8;
    }
    while ( v8 < (unsigned __int16)word_140D05014 );
  }
  result = v11;
  *a4 = v11;
  return result;
}
