/*
 * XREFs of sub_140372C40 @ 0x140372C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140372C40(int *a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = a1[8] & 0xFFFFFFFB;
  *(_DWORD *)(32 * (*a1 + 8LL) + qword_140C4A1C8) = result;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  a1[2] = 0;
  a1[8] = result;
  return result;
}
