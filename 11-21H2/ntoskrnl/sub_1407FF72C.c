/*
 * XREFs of sub_1407FF72C @ 0x1407FF72C
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1407FF72C(unsigned __int8 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  int v4; // edi
  REGHANDLE v5; // rbx
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int *v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+18h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v3 = &retaddr;
  v17 = a3;
  v16 = a2;
  v4 = a1;
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    LOBYTE(v3) = EtwEventEnabled(RegHandle, &stru_14000F118);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v9 = &v16;
      v12 = &v17;
      v10 = 4;
      v13 = 4;
      v7 = v4;
      LOBYTE(v3) = EtwWrite(v5, &stru_14000F118, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
