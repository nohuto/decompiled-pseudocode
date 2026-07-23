/*
 * XREFs of sub_14045B8A0 @ 0x14045B8A0
 * Callers:
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 */

__int64 sub_14045B8A0()
{
  __int64 result; // rax

  if ( qword_140C2A828 )
  {
    result = *(_QWORD *)(qword_140C2A828 + 8);
    if ( *(_QWORD *)qword_140C2A828 != result )
    {
      _InterlockedIncrement(&dword_140C2A8A8);
      return sub_140345190((ULONG_PTR)&dword_140C2A840, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
