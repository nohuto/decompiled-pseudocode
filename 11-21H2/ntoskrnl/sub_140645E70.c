/*
 * XREFs of sub_140645E70 @ 0x140645E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140645E70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 96);
    if ( (int)result <= 0 )
      break;
    sub_14042A5E0(a1, a2);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 96));
  }
  return result;
}
