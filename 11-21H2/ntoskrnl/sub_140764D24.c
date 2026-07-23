/*
 * XREFs of sub_140764D24 @ 0x140764D24
 * Callers:
 *     sub_140764D6C @ 0x140764D6C (sub_140764D6C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140764D6C @ 0x140764D6C (sub_140764D6C.c)
 */

__int64 __fastcall sub_140764D24(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = sub_14042A5E0(a1, *(_QWORD *)(a2 + 8));
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return sub_140764D6C(a1, v5, a2);
  }
  return result;
}
