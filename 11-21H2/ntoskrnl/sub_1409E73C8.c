/*
 * XREFs of sub_1409E73C8 @ 0x1409E73C8
 * Callers:
 *     sub_14079EC14 @ 0x14079EC14 (sub_14079EC14.c)
 * Callees:
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 */

__int64 __fastcall sub_1409E73C8(unsigned int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 2512) & 0x800) != 0 )
  {
    v3 = qword_140039BD8;
    if ( a1 != 1 )
      v3 = qword_140037FD0;
    result = sub_1409E8BEC(0LL, a1, v3, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2512), 0xFFFFF7FF);
  }
  return result;
}
