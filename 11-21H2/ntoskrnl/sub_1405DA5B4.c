/*
 * XREFs of sub_1405DA5B4 @ 0x1405DA5B4
 * Callers:
 *     sub_1405C94E0 @ 0x1405C94E0 (sub_1405C94E0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405DA5B4(int a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = &stru_140038278;
  v4 = (const EVENT_DESCRIPTOR *)qword_140037908;
  if ( a3 )
    v4 = &stru_140038278;
  if ( byte_140C5AE30 )
  {
    v5 = qword_140C1F580;
    LOBYTE(v3) = EtwEventEnabled(qword_140C1F580, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 4;
      v8 = &v12;
      v9 = 4;
      LOBYTE(v3) = EtwWriteEx(v5, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
