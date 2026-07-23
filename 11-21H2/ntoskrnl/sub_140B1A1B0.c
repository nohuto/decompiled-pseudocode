/*
 * XREFs of sub_140B1A1B0 @ 0x140B1A1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140B1A1B0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = sub_140317A10(a2);
  v9 = v4;
  if ( (v4 & 1) != 0 && (v4 & 0x80u) != 0LL )
  {
    v6 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL;
    if ( v6 <= qword_140C50840 && ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v7 = 512LL;
      if ( a3 > 1 )
      {
        v8 = (unsigned int)(a3 - 1);
        do
        {
          v7 <<= 9;
          --v8;
        }
        while ( v8 );
      }
      sub_1402C38D0((__int64)&StartContext, v6, v7, 1, 0);
    }
  }
  return 0LL;
}
