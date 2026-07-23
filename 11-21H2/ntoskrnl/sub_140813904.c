/*
 * XREFs of sub_140813904 @ 0x140813904
 * Callers:
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140813904(_QWORD *a1, _DWORD *a2)
{
  char result; // al
  bool v3; // zf
  __int64 v4; // r8
  __int64 v6; // rcx

  result = 0;
  v4 = *a1 - 0x41936F1CFA926493LL;
  v3 = *a1 == 0x41936F1CFA926493LL;
  *a2 = 0;
  if ( v3 )
    v4 = a1[1] - 0x1E6D45B2F05814A4LL;
  if ( !v4 )
  {
    *a2 = 1;
    return 1;
  }
  v6 = *a1 - 0x4D4DA0DF1CAE1EB7LL;
  if ( !v6 )
    v6 = a1[1] - 0x35F54EE360485198LL;
  if ( !v6 )
  {
    *a2 = 2;
    return 1;
  }
  return result;
}
