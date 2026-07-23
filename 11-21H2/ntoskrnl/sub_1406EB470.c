/*
 * XREFs of sub_1406EB470 @ 0x1406EB470
 * Callers:
 *     sub_1406EB440 @ 0x1406EB440 (sub_1406EB440.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406EB470(__int32 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = (unsigned int)_InterlockedExchange(&dword_140C4461C, a1);
  if ( (_DWORD)result != a1 )
  {
    v3 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)v3 != 1 )
        __fastfail(5u);
    }
    else
    {
      result = qword_140C44620;
      if ( qword_140C44620 )
        return sub_14042A5E0(v3, a2);
    }
  }
  return result;
}
