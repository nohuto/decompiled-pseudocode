/*
 * XREFs of sub_140652FB8 @ 0x140652FB8
 * Callers:
 *     sub_140652F10 @ 0x140652F10 (sub_140652F10.c)
 * Callees:
 *     sub_140652C28 @ 0x140652C28 (sub_140652C28.c)
 *     sub_140652C64 @ 0x140652C64 (sub_140652C64.c)
 *     sub_14065355C @ 0x14065355C (sub_14065355C.c)
 *     sub_140653694 @ 0x140653694 (sub_140653694.c)
 */

__int64 __fastcall sub_140652FB8(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = a1;
  v13 = 0;
  LOBYTE(v12) = 0;
  v3 = 0;
  while ( !(unsigned int)sub_14065355C(a1, a2, 2LL) )
  {
    dword_140C10CF4 = 4;
    sub_140652C64(a1, 1u, 0x60u);
    v5 = sub_140653694(v4, a2, &v12, &v13);
    if ( v5 != -1073741822 )
    {
      if ( v5 )
        break;
    }
    dword_140C10CF4 = 5;
    sub_140652C64(a1, 0, 0);
    v7 = sub_140653694(v6, a2, &v12, &v13);
    if ( v7 != -1073741822 )
    {
      if ( v7 )
        break;
    }
    a1 = (unsigned int)(unsigned __int8)v12 - 1;
    if ( (unsigned __int8)v12 == 1 )
      break;
    if ( (unsigned __int8)v12 != 255 )
    {
      if ( (dword_140C10CC0 & 1) == 0 )
        sub_140652C28(a1, 0);
      sub_140652C64(a1, 0, 0x68u);
      dword_140C10CF4 = 6;
      v9 = sub_140653694(v8, a2, &v12, &v13);
      v10 = v9;
      if ( v9 == -1073741822 )
      {
        v10 = 0;
      }
      else if ( v9 )
      {
        break;
      }
      a1 = (unsigned int)(unsigned __int8)v12 - 1;
      if ( (unsigned __int8)v12 == 1 )
        break;
      if ( (unsigned __int8)v12 != 255 )
        return v10;
    }
    if ( (unsigned __int8)++v3 > 0xAu )
      return 0;
  }
  sub_140652C64(a1, 1u, 0x60u);
  return v10;
}
