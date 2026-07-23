/*
 * XREFs of sub_140B52BA0 @ 0x140B52BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140B52BA0(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 i; // rbx
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rbp
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  if ( (a3 & 0x20000000) != 0 )
  {
    v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i < v3; i += 8LL )
    {
      v8 = sub_140317A10(i);
      v5 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v6 = v5 + 24576;
      while ( v5 < v6 )
      {
        *(_QWORD *)(v5 + 16) = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x60;
        sub_14026C644(v5, 0);
        v5 += 48LL;
      }
    }
  }
  return 0LL;
}
