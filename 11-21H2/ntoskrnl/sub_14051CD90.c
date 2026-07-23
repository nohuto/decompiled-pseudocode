/*
 * XREFs of sub_14051CD90 @ 0x14051CD90
 * Callers:
 *     sub_14051C710 @ 0x14051C710 (sub_14051C710.c)
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     sub_140643CB4 @ 0x140643CB4 (sub_140643CB4.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

__int64 __fastcall sub_14051CD90(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  unsigned int *v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rcx

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1380274243 )
  {
    v3 = *(unsigned __int16 *)(a1 + 10);
    if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(72 * v3 + 128) )
    {
      v4 = (unsigned int *)(a1 + 128);
      v5 = 0;
      if ( v3 )
      {
        while ( RtlCompareMemory(v4 + 4, &xmmword_14003A5A0, 0x10uLL) != 16 )
        {
          v4 += 18;
          if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(a1 + 10) )
            return v1;
        }
        v6 = *v4;
        if ( *(_DWORD *)(a1 + 20) >= (unsigned int)v6 + v4[1] )
        {
          v7 = a1 + v6;
          if ( *(_DWORD *)(a1 + v6) != 1095059543 )
            return 0LL;
          return v7;
        }
      }
    }
  }
  return v1;
}
