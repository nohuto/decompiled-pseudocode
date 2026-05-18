/*
 * XREFs of sub_1800681E8 @ 0x1800681E8
 * Callers:
 *     sub_18009490C @ 0x18009490C (sub_18009490C.c)
 * Callees:
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 */

char __fastcall sub_1800681E8(__int64 a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  _QWORD *v5; // rsi
  unsigned int i; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v5 = (_QWORD *)(a1 + 256);
  for ( i = 0; i < 0xA; ++i )
  {
    if ( (i & 0xFFFFFFFC) != 0 || i == 1 )
    {
      LOBYTE(v3) = sub_1800122C0((_QWORD *)(a1 + 16 * ((int)i + 16LL)));
      if ( (_BYTE)v3 )
        LOBYTE(v3) = sub_180091F9C(*v5, a2, a3);
    }
    v5 += 2;
  }
  return (char)v3;
}
