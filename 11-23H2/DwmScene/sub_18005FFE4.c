/*
 * XREFs of sub_18005FFE4 @ 0x18005FFE4
 * Callers:
 *     sub_180086AFC @ 0x180086AFC (sub_180086AFC.c)
 * Callees:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 */

char __fastcall sub_18005FFE4(__int64 a1, __int64 a2, unsigned int a3)
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
      LOBYTE(v3) = sub_180011DE0((_QWORD *)(a1 + 16 * ((int)i + 16LL)));
      if ( (_BYTE)v3 )
        LOBYTE(v3) = sub_180084738(*v5, a2, a3);
    }
    v5 += 2;
  }
  return (char)v3;
}
