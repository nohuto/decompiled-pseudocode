/*
 * XREFs of sub_14037DD88 @ 0x14037DD88
 * Callers:
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 * Callees:
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 */

__int64 __fastcall sub_14037DD88(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 result; // rax

  *(_DWORD *)(a3 + 40) = a2;
  *(_QWORD *)(a3 + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)a3 = 0LL;
  *(_WORD *)(a3 + 8) = 8 * ((((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12) + 6);
  *(_WORD *)(a3 + 10) = 0;
  *(_DWORD *)(a3 + 44) = a1 & 0xFFF;
  result = sub_140385584(a3);
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result == -1073741801 )
    return 3221225901LL;
  return result;
}
