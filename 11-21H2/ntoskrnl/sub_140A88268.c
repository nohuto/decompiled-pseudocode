/*
 * XREFs of sub_140A88268 @ 0x140A88268
 * Callers:
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 * Callees:
 *     sub_140A87B3C @ 0x140A87B3C (sub_140A87B3C.c)
 *     sub_140A87EC4 @ 0x140A87EC4 (sub_140A87EC4.c)
 */

__int64 __fastcall sub_140A88268(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx

  v3 = *(_DWORD *)(a1 + 32);
  if ( a3 )
  {
    v5 = ((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
    if ( (unsigned int)v5 >= v3 )
      LODWORD(v5) = *(_DWORD *)(a1 + 32);
  }
  else
  {
    if ( v3 > 1 )
      v3 = 1;
    LODWORD(v5) = v3;
  }
  result = (__int64)sub_140A87EC4(a1, a2, 0LL);
  if ( result )
  {
    if ( (_DWORD)v5 )
    {
      v7 = result + 12;
      do
      {
        if ( !*(_QWORD *)(v7 - 12) )
          break;
        sub_140A87B3C(*(_QWORD *)(v7 + 4) + 4096LL + (*(_DWORD *)(v7 - 12) & 0xFFF), *(_DWORD *)(v7 - 4), 1, 3);
        *(_DWORD *)v7 &= 0xFFFFFFFC;
        *(_QWORD *)(v7 - 12) = 0LL;
        *(_DWORD *)(v7 - 4) = 0;
        v7 += 32LL;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 32));
        LODWORD(v5) = v5 - 1;
      }
      while ( (_DWORD)v5 );
    }
    return 1LL;
  }
  return result;
}
