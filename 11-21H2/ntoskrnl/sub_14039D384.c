/*
 * XREFs of sub_14039D384 @ 0x14039D384
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExIsFastResourceHeldExclusive @ 0x14039C670 (ExIsFastResourceHeldExclusive.c)
 *     ExIsFastResourceHeld @ 0x14039C750 (ExIsFastResourceHeld.c)
 *     sub_14039C830 @ 0x14039C830 (sub_14039C830.c)
 *     sub_14039CA48 @ 0x14039CA48 (sub_14039CA48.c)
 *     sub_14063CDF0 @ 0x14063CDF0 (sub_14063CDF0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_14039D384(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rcx

  v4 = (__int64 **)(a1 + 1656 + (a3 != 0 ? 0x18 : 0));
  for ( i = *v4; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v4 )
      return 0LL;
    if ( i[3] == a2 )
      break;
  }
  if ( a4 && (*((_BYTE *)i + 17) & 2) == 0 )
  {
    v7 = (__int64 *)i[5];
    v8 = i + 5;
    while ( v7 != v8 )
    {
      if ( (*((_BYTE *)v7 + 17) & 2) != 0 )
        return v7;
      v7 = (__int64 *)*v7;
    }
    return 0LL;
  }
  return i;
}
