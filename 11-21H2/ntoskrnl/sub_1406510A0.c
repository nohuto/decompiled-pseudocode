/*
 * XREFs of sub_1406510A0 @ 0x1406510A0
 * Callers:
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406522B0 @ 0x1406522B0 (sub_1406522B0.c)
 *     sub_14065241C @ 0x14065241C (sub_14065241C.c)
 */

__int64 __fastcall sub_1406510A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  unsigned int v5; // eax

  result = sub_1406522B0();
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 8) - 0x4585680F53487C23LL;
    if ( *(_QWORD *)(a1 + 8) == 0x4585680F53487C23LL )
      v3 = *(_QWORD *)(a1 + 16) + 0x7D818829EFE03C54LL;
    if ( !v3 )
      *(_DWORD *)(a1 + 200) |= 1u;
    v4 = (_QWORD *)(a1 + 208);
    if ( (int)sub_14042A5E0(a1, 475228LL) < 0 || !*v4 )
    {
      result = sub_14042A5E0(a1, 458912LL);
      if ( (int)result < 0 )
        return result;
      *v4 = 0LL;
    }
    result = sub_14042A5E0(a1, 458752LL);
    if ( (int)result >= 0 )
    {
      v5 = *(_DWORD *)(a1 + 236);
      if ( v5 )
      {
        _BitScanReverse(&v5, v5);
        *(_DWORD *)(a1 + 240) = v5;
        *(_QWORD *)(a1 + 248) = *v4 >> *(_DWORD *)(a1 + 240);
        result = sub_14065241C(a1);
        if ( (int)result < 0 )
          return 0LL;
      }
      else
      {
        return 3221225635LL;
      }
    }
  }
  return result;
}
