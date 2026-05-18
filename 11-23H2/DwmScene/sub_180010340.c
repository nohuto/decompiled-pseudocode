/*
 * XREFs of sub_180010340 @ 0x180010340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010340(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  signed __int32 v2; // r8d

  v1 = (volatile signed __int32 *)(a1 + 12);
  do
  {
    v2 = *v1;
    if ( *v1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  while ( v2 != _InterlockedCompareExchange(v1, v2 + 1, v2) );
  return (unsigned int)(v2 + 1);
}
