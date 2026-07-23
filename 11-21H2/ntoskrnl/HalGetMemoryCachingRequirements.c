/*
 * XREFs of HalGetMemoryCachingRequirements @ 0x1403B4070
 * Callers:
 *     sub_140A52AD8 @ 0x140A52AD8 (sub_140A52AD8.c)
 *     sub_140B2388C @ 0x140B2388C (sub_140B2388C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalGetMemoryCachingRequirements(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  unsigned int v5; // r11d
  __int64 i; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  v3 = 0;
  if ( a3 )
  {
    v5 = dword_140C4D118;
    *a3 = 0;
    if ( !v5 )
      return 3221225473LL;
    for ( i = qword_140C4D110; ; i += 24LL )
    {
      v7 = *(_QWORD *)i << 12;
      if ( a1 >= v7 )
      {
        v8 = v7 + (*(_QWORD *)(i + 8) << 12);
        if ( a1 + a2 <= v8 )
        {
          *a3 = *(_DWORD *)(i + 16);
          return 0LL;
        }
        if ( a1 < v8 )
          return 3221225485LL;
      }
      if ( ++v3 >= v5 )
        return 3221225473LL;
    }
  }
  return 3221225485LL;
}
