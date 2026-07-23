/*
 * XREFs of sub_14098E64C @ 0x14098E64C
 * Callers:
 *     sub_14098D49C @ 0x14098D49C (sub_14098D49C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 */

char __fastcall sub_14098E64C(__int64 a1, int a2, __int64 a3)
{
  ULONG_PTR v4; // rsi
  char v6; // di
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h]
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v11 = HIDWORD(a1);
  HashValue = 0;
  v4 = qword_140D04890;
  v9 = *(_OWORD *)*(_QWORD *)(a3 + 16);
  v6 = sub_14042A5E0(39LL, a3);
  if ( !v6 )
    sub_1405CAE6C(0x605uLL, 0x27uLL, qword_140D04890, 0LL);
  RtlHashUnicodeString(*(PCUNICODE_STRING *)(a3 + 16), 0, 0, &HashValue);
  v7 = *(_QWORD *)(a3 + 16);
  if ( *(_DWORD *)v7 != (_DWORD)v9 || *(_QWORD *)(v7 + 8) != *((_QWORD *)&v9 + 1) || HashValue != a2 )
    sub_1405CAE6C(0x705uLL, v4, 0x27uLL, 0x4E616D65uLL);
  return v6;
}
