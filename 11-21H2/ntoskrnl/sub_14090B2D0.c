/*
 * XREFs of sub_14090B2D0 @ 0x14090B2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14090B2D0(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = *a1;
  if ( *a1 )
  {
    result = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFFBFFFuLL;
    *(_QWORD *)(*a1 + 24) = result;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
