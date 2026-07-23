/*
 * XREFs of sub_14033A4C0 @ 0x14033A4C0
 * Callers:
 *     sub_1402E9768 @ 0x1402E9768 (sub_1402E9768.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14033A4C0(unsigned __int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = (a2 >> 4) & 7;
  if ( ((a2 >> 4) & 7) != 0 )
  {
    v3 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v3 & 0x18) == 8 )
    {
      return (unsigned int)result | 0x18;
    }
    else if ( (v3 & 0x10) != 0 )
    {
      return (unsigned int)result | 8;
    }
  }
  return result;
}
