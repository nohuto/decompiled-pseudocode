/*
 * XREFs of sub_1407F40A8 @ 0x1407F40A8
 * Callers:
 *     sub_1407D53D0 @ 0x1407D53D0 (sub_1407D53D0.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     sub_1403725F4 @ 0x1403725F4 (sub_1403725F4.c)
 *     sub_1407F4160 @ 0x1407F4160 (sub_1407F4160.c)
 */

__int64 __fastcall sub_1407F40A8(int a1, char a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  void *v5; // rax
  unsigned int v6; // edi
  BOOLEAN v7; // al
  unsigned __int16 v9; // [rsp+32h] [rbp+Ah]
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF

  v9 = HIWORD(a1);
  if ( (unsigned int)(unsigned __int16)a1 - 1 > 0xE )
    return 3221225485LL;
  v3 = 3LL * (unsigned __int16)a1;
  v4 = LOBYTE((&off_140003340)[3 * (unsigned __int16)a1 + 1]);
  if ( HIWORD(a1) > (unsigned __int16)v4 )
    return 3221225485LL;
  v5 = *(&off_140003340 + v3 + 1);
  v6 = 0;
  if ( a2 )
  {
    IsMember = 0;
    if ( v5 )
    {
      if ( RtlCheckTokenMembership(0LL, v5, &IsMember) < 0 )
        v7 = 0;
      else
        v7 = IsMember;
    }
    else
    {
      LOBYTE(v4) = a2;
      if ( (int)sub_1407F4160(v4) < 0 || !sub_1403725F4(a1, v9) )
        return (unsigned int)-1073741790;
      v7 = 1;
    }
    if ( v7 )
      return v6;
    return (unsigned int)-1073741790;
  }
  if ( v5 || !sub_1403725F4(a1, v9) )
    __fastfail(5u);
  return 0LL;
}
