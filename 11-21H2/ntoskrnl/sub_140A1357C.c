/*
 * XREFs of sub_140A1357C @ 0x140A1357C
 * Callers:
 *     sub_140A13628 @ 0x140A13628 (sub_140A13628.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A179E0 @ 0x140A179E0 (sub_140A179E0.c)
 */

__int64 __fastcall sub_140A1357C(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // dx
  __int16 *i; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v7 = -1;
  if ( !a2 || (v4 = *a2, v7 = v4, v4 == -1) )
  {
    if ( (int)sub_140A179E0(&v7, 0LL) < 0 )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbGuestHostArchsToRuntimePlatformFlag");
      return 0LL;
    }
    v4 = v7;
  }
  for ( i = &word_140044256; a1 != *(i - 1) || v4 != *i; i += 8 )
  {
    if ( (unsigned __int64)++v3 >= 8 )
      return 0LL;
  }
  return LODWORD(qword_140044258[2 * v3]);
}
