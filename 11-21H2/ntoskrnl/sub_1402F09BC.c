/*
 * XREFs of sub_1402F09BC @ 0x1402F09BC
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402F09BC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  char result; // al

  v2 = *(_QWORD *)(a1 + 1624);
  result = 0;
  if ( v2 != -3 )
  {
    if ( a2 )
      *a2 = v2;
    return 1;
  }
  return result;
}
