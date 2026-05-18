/*
 * XREFs of sub_18004EBF0 @ 0x18004EBF0
 * Callers:
 *     sub_18004EB48 @ 0x18004EB48 (sub_18004EB48.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_1800E735A @ 0x1800E735A (sub_1800E735A.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18004EBF0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    result = sub_180010530(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_180010530(v4);
  return result;
}
