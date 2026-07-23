/*
 * XREFs of sub_140B197C0 @ 0x140B197C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140B197C0(__int64 a1, unsigned __int64 a2, int a3)
{
  char v4; // bl
  unsigned __int64 v5; // rdx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = sub_140317A10(a2);
  v4 = v10;
  if ( (v10 & 1) != 0 )
  {
    v5 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFFLL;
    if ( v5 > qword_140C50840 || ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
      if ( v4 < 0 )
      {
        v7 = 512LL;
        if ( a3 > 1 )
        {
          v9 = (unsigned int)(a3 - 1);
          do
          {
            v7 <<= 9;
            --v9;
          }
          while ( v9 );
        }
      }
      else
      {
        v7 = 1LL;
      }
      v8 = 1;
      if ( (v4 & 0x10) != 0 )
      {
        v8 = 0;
      }
      else if ( (v4 & 8) != 0 )
      {
        v8 = 2;
      }
      sub_140215E54(1, v5, v7, v8, 0LL, 0LL);
    }
  }
  return 0LL;
}
