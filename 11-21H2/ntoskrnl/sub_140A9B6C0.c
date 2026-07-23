/*
 * XREFs of sub_140A9B6C0 @ 0x140A9B6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140601CA0 @ 0x140601CA0 (sub_140601CA0.c)
 */

__int64 __fastcall sub_140A9B6C0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return sub_140601CA0(v1);
  return result;
}
