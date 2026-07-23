/*
 * XREFs of sub_1406C7E48 @ 0x1406C7E48
 * Callers:
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779A08 @ 0x140779A08 (sub_140779A08.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall sub_1406C7E48(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &stru_140C44B60;
  v4 = v2 - 1;
  if ( !v4 )
    return &stru_140C44D60;
  v5 = v4 - 1;
  if ( !v5 )
    return &stru_140C44A60;
  v6 = v5 - 1;
  if ( !v6 )
    return &stru_140C44F60;
  v7 = v6 - 1;
  if ( !v7 )
    return &stru_140C44E60;
  if ( v7 == 1 )
    return &stru_140C44C60;
  return (struct _ERESOURCE *)v1;
}
