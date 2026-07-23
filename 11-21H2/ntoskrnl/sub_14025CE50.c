/*
 * XREFs of sub_14025CE50 @ 0x14025CE50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028F748 @ 0x14028F748 (sub_14028F748.c)
 */

__int64 __fastcall sub_14025CE50(__int64 a1, unsigned int a2)
{
  signed __int32 v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1448), a2);
  if ( !v2 )
  {
    v3 = 0LL;
    return sub_14028F748(a1, v3);
  }
  result = a2 + v2;
  if ( !(_DWORD)result )
  {
    v3 = 1LL;
    return sub_14028F748(a1, v3);
  }
  return result;
}
