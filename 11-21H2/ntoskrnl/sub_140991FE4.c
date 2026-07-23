/*
 * XREFs of sub_140991FE4 @ 0x140991FE4
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140991FE4(__int64 a1, __int64 a2, char a3)
{
  char result; // al
  char v4; // [rsp+30h] [rbp-19h] BYREF
  char v5; // [rsp+31h] [rbp-18h] BYREF
  char v6; // [rsp+32h] [rbp-17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  char *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  char *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  char *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  result = byte_140C4EF1C;
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    v5 = byte_140C4EF1C;
    v4 = byte_140C0C644;
    v10 = &v5;
    v8 = &v4;
    v12 = &v6;
    v6 = a3;
    v9 = 1LL;
    v11 = 1LL;
    v13 = 1LL;
    return sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)word_14002F13A, 0LL, 0LL, 5u, &v7);
  }
  return result;
}
