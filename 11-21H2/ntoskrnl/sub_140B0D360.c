/*
 * XREFs of sub_140B0D360 @ 0x140B0D360
 * Callers:
 *     sub_140B0C394 @ 0x140B0C394 (sub_140B0C394.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B0D254 @ 0x140B0D254 (sub_140B0D254.c)
 * Callees:
 *     _strnicmp @ 0x1403E1240 (_strnicmp.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 *     sub_140B0D408 @ 0x140B0D408 (sub_140B0D408.c)
 */

__int64 __fastcall sub_140B0D360(__int64 a1, __int64 a2, const char *a3, __int64 a4, unsigned int *a5)
{
  __int64 v5; // rsi
  unsigned int i; // ebx
  const char *v10; // rax
  const char *v11; // rdi
  size_t v12; // r8

  v5 = 0LL;
  for ( i = 0; ; ++i )
  {
    v10 = (const char *)sub_140B0D408(a1, a2, i);
    v11 = v10;
    if ( v10 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      if ( !strnicmp(v10, a3, v12) )
        break;
    }
    if ( !v11 )
      return v5;
  }
  v5 = sub_140B0D2E8(a1, a2, i, 0);
  if ( a5 )
    *a5 = i;
  return v5;
}
