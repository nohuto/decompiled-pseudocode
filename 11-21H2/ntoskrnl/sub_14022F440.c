/*
 * XREFs of sub_14022F440 @ 0x14022F440
 * Callers:
 *     sub_14022F104 @ 0x14022F104 (sub_14022F104.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_14022F3E8 @ 0x14022F3E8 (sub_14022F3E8.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     ExSetTimerResolution @ 0x1403DE0E0 (ExSetTimerResolution.c)
 *     sub_14045B5B2 @ 0x14045B5B2 (sub_14045B5B2.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14022F440(int a1, int a2, char a3)
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
  v3 = &stru_14000E9B0;
  v4 = (const EVENT_DESCRIPTOR *)qword_14000E9A0;
  if ( !a3 )
    v4 = &stru_14000E9B0;
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    LOBYTE(v3) = EtwEventEnabled(RegHandle, v4);
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
