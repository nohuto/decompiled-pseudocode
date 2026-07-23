/*
 * XREFs of sub_1409936AC @ 0x1409936AC
 * Callers:
 *     sub_140990548 @ 0x140990548 (sub_140990548.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409936AC(__int64 a1)
{
  REGHANDLE v2; // rdi
  int v3; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  __int64 v5; // [rsp+40h] [rbp+7h]
  int v6; // [rsp+48h] [rbp+Fh]
  int v7; // [rsp+4Ch] [rbp+13h]
  __int64 v8; // [rsp+50h] [rbp+17h]
  int v9; // [rsp+58h] [rbp+1Fh]
  int v10; // [rsp+5Ch] [rbp+23h]
  __int64 v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140038358) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v5 = a1 + 14;
      v3 = *(unsigned __int16 *)(a1 + 12);
      UserData.Ptr = a1 + 12;
      v6 = 2 * v3;
      v9 = 4;
      v11 = a1 + 4;
      v14 = a1 + 8;
      v12 = 4;
      v15 = 4;
      UserData.Size = 2;
      v8 = a1;
      EtwWrite(v2, &stru_140038358, 0LL, 5u, &UserData);
    }
  }
}
