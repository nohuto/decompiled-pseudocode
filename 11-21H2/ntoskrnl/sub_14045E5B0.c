/*
 * XREFs of sub_14045E5B0 @ 0x14045E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ntoskrnl_36 @ 0x1402EEBC0 (ntoskrnl_36.c)
 *     sub_1405D4A94 @ 0x1405D4A94 (sub_1405D4A94.c)
 */

__int64 sub_14045E5B0()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  result = ntoskrnl_36((ULONG_PTR)&qword_140C20AC0, 1u, -1);
  if ( !(_BYTE)result )
  {
    LOBYTE(v2) = 1;
    return sub_1405D4A94(v2, v1, v3, v4);
  }
  return result;
}
