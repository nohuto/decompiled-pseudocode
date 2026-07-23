/*
 * XREFs of sub_1405D9370 @ 0x1405D9370
 * Callers:
 *     sub_1403B488C @ 0x1403B488C (sub_1403B488C.c)
 * Callees:
 *     sub_14023BC00 @ 0x14023BC00 (sub_14023BC00.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405D9370(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  REGHANDLE v4; // rbx
  int v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]
  int v11; // [rsp+88h] [rbp+10h] BYREF

  v11 = a2;
  v6 = 0;
  v2 = (const EVENT_DESCRIPTOR *)sub_14023BC00(
                                   a1,
                                   (__int64)qword_140038508,
                                   (__int64)qword_140037A48,
                                   (__int64)&v6,
                                   (__int64)&UserData);
  v3 = v2;
  if ( byte_140C5AE30 )
  {
    v4 = qword_140C1F580;
    LOBYTE(v2) = EtwEventEnabled(qword_140C1F580, v2);
    if ( (_BYTE)v2 )
    {
      v10 = 0;
      v8 = &v11;
      v9 = 4;
      LOBYTE(v2) = EtwWriteEx(v4, v3, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v2;
}
