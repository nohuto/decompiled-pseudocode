/*
 * XREFs of sub_1403C1E10 @ 0x1403C1E10
 * Callers:
 *     sub_14082975C @ 0x14082975C (sub_14082975C.c)
 *     sub_140829930 @ 0x140829930 (sub_140829930.c)
 *     sub_140A59654 @ 0x140A59654 (sub_140A59654.c)
 * Callees:
 *     <none>
 */

bool sub_1403C1E10()
{
  char v0; // dl

  v0 = 0;
  if ( !byte_140D0688B )
    return 1;
  if ( (dword_140D0688C & 2) != 0 )
    return (dword_140D0689C & 0x400) == 0;
  return v0;
}
