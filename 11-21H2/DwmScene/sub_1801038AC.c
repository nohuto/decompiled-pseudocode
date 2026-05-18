/*
 * XREFs of sub_1801038AC @ 0x1801038AC
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800616A8 @ 0x1800616A8 (sub_1800616A8.c)
 */

__int64 __fastcall sub_1801038AC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800616A8(*(_QWORD *)(a2 + 104));
  }
  return result;
}
