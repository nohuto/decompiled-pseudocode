/*
 * XREFs of sub_1403DCD6C @ 0x1403DCD6C
 * Callers:
 *     sub_140861CE0 @ 0x140861CE0 (sub_140861CE0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1403DCD6C(__int64 a1, int a2, unsigned __int8 a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    v4 = dword_140C0C650;
    v5 = a2;
    v8 = &v4;
    v9 = 4LL;
    v10 = &v5;
    v6 = a3;
    v12 = &v6;
    v11 = 4LL;
    v13 = 4LL;
    return sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002FAA5, 0LL, 0LL, 5u, &v7);
  }
  return result;
}
