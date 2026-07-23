/*
 * XREFs of MiIsAnyPartOfRangeInHugePfn @ 0x140621830
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAnyPartOfRangeInHugePfn(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rbx
  bool v10; // zf
  bool i; // zf

  v2 = 0;
  if ( !stru_140C67DE0.Buffer )
    return 0LL;
  v3 = ((a1 + a2 - 1) >> 18) & 0x3FFFFF;
  v4 = (a1 >> 18) & 0x3FFFFF;
  v5 = v3 - v4 + 1;
  if ( v4 >= stru_140C67DE0.SizeOfBitMap )
    return 1LL;
  if ( v5 <= 1 )
    return v3 != v4 || _bittest64((const signed __int64 *)&stru_140C67DE0.Buffer[v4 >> 6], v4 & 0x3F);
  if ( stru_140C67DE0.SizeOfBitMap - v4 < v5 )
    return 1LL;
  v7 = &stru_140C67DE0.Buffer[v4 >> 6];
  v8 = *v7;
  v9 = &stru_140C67DE0.Buffer[v3 >> 6];
  if ( v7 != v9 )
  {
    for ( i = (v8 & (-1LL << v4)) == 0; i; i = *v7 == 0 )
    {
      if ( ++v7 == v9 )
      {
        v10 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v3) & *v7) == 0;
        goto LABEL_15;
      }
    }
    return 1LL;
  }
  v10 = (v8 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v4)) == 0;
LABEL_15:
  LOBYTE(v2) = !v10;
  return v2;
}
