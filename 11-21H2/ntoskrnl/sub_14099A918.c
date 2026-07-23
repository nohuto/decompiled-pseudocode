/*
 * XREFs of sub_14099A918 @ 0x14099A918
 * Callers:
 *     sub_140399210 @ 0x140399210 (sub_140399210.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14099A918(__int64 a1, __int64 a2)
{
  REGHANDLE v3; // rbx
  char v4; // [rsp+30h] [rbp-9h] BYREF
  int v5; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  __int64 v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v5 = 26;
  if ( byte_140C5AE30 )
  {
    v3 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_140037C90) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v4 = qword_140C21FA8;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      v13 = &qword_140C21FA8;
      UserData.Size = 1;
      v8 = 4;
      v10 = a2;
      v11 = 208;
      v14 = 8;
      EtwWrite(v3, &stru_140037C90, 0LL, 4u, &UserData);
    }
  }
}
