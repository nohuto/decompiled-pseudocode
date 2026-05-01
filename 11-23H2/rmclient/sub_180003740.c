/*
 * XREFs of sub_180003740 @ 0x180003740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003740(_DWORD *a1)
{
  bool v1; // cc
  void *v2; // rcx

  v1 = a1[1] <= *a1;
  v2 = &unk_180032C60;
  if ( v1 )
    v2 = &unk_180032C80;
  return sub_180003764(v2);
}
