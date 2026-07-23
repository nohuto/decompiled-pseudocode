/*
 * XREFs of PsGetProcessSessionId @ 0x14028AF60
 * Callers:
 *     sub_14066A68C @ 0x14066A68C (sub_14066A68C.c)
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140711E3C @ 0x140711E3C (sub_140711E3C.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_1407136E8 @ 0x1407136E8 (sub_1407136E8.c)
 *     sub_14096B308 @ 0x14096B308 (sub_14096B308.c)
 *     sub_14097F2B0 @ 0x14097F2B0 (sub_14097F2B0.c)
 *     sub_1409ACBA0 @ 0x1409ACBA0 (sub_1409ACBA0.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = sub_140287F30(a1);
  result = 0LL;
  if ( v1 != -1 )
    return v1;
  return result;
}
