/*
 * XREFs of ParseList @ 0x1C007F6F8
 * Callers:
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 * Callees:
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 *     PeekTokenInfo @ 0x1C0080228 (PeekTokenInfo.c)
 */

__int64 __fastcall ParseList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = 0;
  v6 = 0;
  while ( 1 )
  {
    result = PeekTokenInfo(a1, &v6, &v7);
    if ( (_DWORD)result )
      break;
    if ( v6 == -15 )
      goto LABEL_7;
    result = ParseToken(a1, v2);
    if ( (int)result < 0 )
      return result;
    ++*(_DWORD *)(a2 + 12);
    v2 = (_QWORD *)*v2;
  }
  if ( (int)result < 0 )
    return result;
LABEL_7:
  ++*(_DWORD *)(a1 + 12);
  return result;
}
