/*
 * XREFs of sub_1406DE9B8 @ 0x1406DE9B8
 * Callers:
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 * Callees:
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 */

NTSTATUS __fastcall sub_1406DE9B8(HANDLE KeyHandle, _QWORD *a2)
{
  _QWORD *v2; // rdi
  NTSTATUS result; // eax

  v2 = a2 + 1;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  result = sub_14067B838(KeyHandle, L"Identifier", 40, a2);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741772 )
  {
    result = sub_14067B838(KeyHandle, L"Configuration Data", 36, v2);
    if ( ((result + 0x80000000) & 0x80000000) != 0 || result == -1073741772 )
    {
      result = sub_14067B838(KeyHandle, L"Component Information", 24, v2 + 1);
      if ( ((result + 0x80000000) & 0x80000000) != 0 || result == -1073741772 )
        return 0;
    }
  }
  return result;
}
