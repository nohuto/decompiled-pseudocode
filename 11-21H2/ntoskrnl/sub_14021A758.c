/*
 * XREFs of sub_14021A758 @ 0x14021A758
 * Callers:
 *     ExReinitializeResourceLite @ 0x14021A5F0 (ExReinitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_140A6C8B4 @ 0x140A6C8B4 (sub_140A6C8B4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14021A758(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  if ( (a1[1] & 2) != 0 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v1 = *a1;
  result = 0LL;
  if ( (v1 & 3) == 0 )
    return v1;
  return result;
}
