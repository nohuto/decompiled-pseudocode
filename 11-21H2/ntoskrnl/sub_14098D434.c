/*
 * XREFs of sub_14098D434 @ 0x14098D434
 * Callers:
 *     sub_1409A08A8 @ 0x1409A08A8 (sub_1409A08A8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14098D434(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  result = a1;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 168) )
    {
      if ( result == a2
        || (result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 824), 0, 0),
            (result & 8) != 0) )
      {
        result = *(_QWORD *)(v3 + 864);
        v4 = *(_QWORD *)(a2 + 32);
        if ( !result || result == *(_QWORD *)(v4 + 8) )
          return sub_14042A5E0(*(_QWORD *)(v3 + 192), v4);
      }
    }
  }
  return result;
}
