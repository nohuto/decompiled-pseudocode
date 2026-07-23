/*
 * XREFs of sub_140992720 @ 0x140992720
 * Callers:
 *     sub_140395A18 @ 0x140395A18 (sub_140395A18.c)
 *     sub_1405CD5BC @ 0x1405CD5BC (sub_1405CD5BC.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140992720(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = &stru_1400389B0;
  v4 = (const EVENT_DESCRIPTOR *)qword_140039700;
  if ( !a3 )
    v4 = &stru_1400389B0;
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    LOBYTE(v3) = EtwEventEnabled(RegHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 8;
      v8 = &v12;
      v9 = 8;
      LOBYTE(v3) = EtwWrite(v5, v4, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
