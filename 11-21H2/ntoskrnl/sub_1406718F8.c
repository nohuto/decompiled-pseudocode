/*
 * XREFs of sub_1406718F8 @ 0x1406718F8
 * Callers:
 *     sub_14066F4C0 @ 0x14066F4C0 (sub_14066F4C0.c)
 * Callees:
 *     sub_140203E24 @ 0x140203E24 (sub_140203E24.c)
 *     sub_140671B34 @ 0x140671B34 (sub_140671B34.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     sub_1409C599C @ 0x1409C599C (sub_1409C599C.c)
 */

__int64 __fastcall sub_1406718F8(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        _BYTE *a8)
{
  int v12; // eax
  NTSTATUS v13; // edx
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  char v19; // cl
  unsigned __int8 v20; // dl
  __int64 v21; // rcx
  char v22[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  _PS_PKG_CLAIM v24; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-8h] BYREF

  v22[0] = 0;
  v24 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v25 = 0LL;
  v12 = sub_140203E24(Token, a2, (int *)&TokenInformation + 1, &v24, &v25);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) <= 1
      && (HIDWORD(TokenInformation) != 3014658 || (unsigned int)LOBYTE(v24.Origin) - 4 <= 1) )
    {
      if ( (a3 & 1) == 0 )
      {
        if ( LOBYTE(v24.Origin) <= 1u )
        {
          v14 = a5;
        }
        else
        {
          if ( LOBYTE(v24.Origin) == 2 )
          {
            *a6 = 8;
            *a7 = a5;
            goto LABEL_9;
          }
          if ( LOBYTE(v24.Origin) == 3 )
          {
            v14 = 6;
          }
          else
          {
            if ( LOBYTE(v24.Origin) <= 3u )
              return 0;
            if ( LOBYTE(v24.Origin) <= 5u )
            {
              v20 = a5 != 0 ? 3 : 0;
              *a6 = v20;
              *a7 = v20;
              goto LABEL_9;
            }
            if ( LOBYTE(v24.Origin) != 6 )
              return 0;
            v14 = a5 != 2 ? 0 : 2;
          }
        }
        v15 = a6;
        goto LABEL_7;
      }
      if ( !a4 )
      {
        v19 = 18;
        *a6 = 4;
        *a7 = 4;
        goto LABEL_32;
      }
    }
    if ( a2 && (unsigned __int8)sub_140671B34(a2, (unsigned int)v12) )
    {
      LODWORD(TokenInformation) = 0;
      v13 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
      if ( v13 < 0 )
        return (unsigned int)v13;
      *a6 = 11;
      if ( (a3 & 1) == 0 )
      {
        LOBYTE(v21) = a5;
        if ( (_DWORD)TokenInformation )
        {
          v13 = sub_1409C599C(v21, v22);
          if ( v13 < 0 )
            return (unsigned int)v13;
          if ( v22[0] )
            v14 = 6;
          else
            v14 = a5 != 2 ? 0 : 2;
          goto LABEL_8;
        }
        *a7 = a5;
        v19 = a5 >= 2u ? 0x21 : 0;
LABEL_32:
        *a8 = v19;
        return 0;
      }
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        return 0;
      }
    }
    else if ( (a3 & 1) == 0 )
    {
      v14 = a5;
      v15 = a6;
LABEL_7:
      *v15 = v14;
LABEL_8:
      *a7 = v14;
LABEL_9:
      *a8 = 0;
      return 0;
    }
    v17 = a4;
    if ( !a4 )
      v17 = 18;
    *a8 = v17;
    *a6 = *((_BYTE *)&qword_140A37E10 + 2 * ((unsigned __int64)v17 >> 4));
    v18 = *((_BYTE *)&qword_140A37E10 + 2 * ((unsigned __int64)(unsigned __int8)*a8 >> 4) + 1);
    *a7 = v18;
    if ( a5 > *a6 )
    {
      *a6 = a5;
      v18 = *a7;
    }
    if ( a5 > v18 )
      *a7 = a5;
    return 0;
  }
  return (unsigned int)v13;
}
