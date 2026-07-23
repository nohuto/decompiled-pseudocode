/*
 * XREFs of sub_1406F4878 @ 0x1406F4878
 * Callers:
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 * Callees:
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_14028799C @ 0x14028799C (sub_14028799C.c)
 *     sub_1405AA5E8 @ 0x1405AA5E8 (sub_1405AA5E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406F4878(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1 + 128;
  do
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      sub_14026EA80(v2 + 56, 0);
      ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0);
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  result = sub_14028799C(a1);
  if ( (_DWORD)result )
    return sub_1405AA5E8(v4);
  return result;
}
