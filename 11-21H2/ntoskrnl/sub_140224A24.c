/*
 * XREFs of sub_140224A24 @ 0x140224A24
 * Callers:
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_140224980 @ 0x140224980 (sub_140224980.c)
 * Callees:
 *     sub_140224B50 @ 0x140224B50 (sub_140224B50.c)
 *     sub_140224EDC @ 0x140224EDC (sub_140224EDC.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140224A24(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  REGHANDLE v3; // rsi
  int v5; // edx
  int v6; // [rsp+48h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  int *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]

  v1 = a1;
  dword_140C204A8 = a1;
  qword_140C204B8 = KeQueryInterruptTimePrecise(&v7);
  v2 = 0;
  v7 = qword_140C204C8;
  v6 = v1;
  if ( byte_140C5AE30 )
  {
    v3 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_14000E920) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&qword_140C204B8;
      v10 = 8LL;
      v9 = &v7;
      v12 = 4LL;
      v11 = &v6;
      EtwWriteEx(v3, &stru_14000E920, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  qword_140C20398 = *(_QWORD *)(qword_140C20490 + 8 * v1);
  if ( !qword_140C20398 )
    qword_140C20398 = *(_QWORD *)qword_140C20490;
  dword_140C20394 = 0;
  LOBYTE(v2) = (unsigned __int64)qword_140C239A0 >= MEMORY[0xFFFFF78000000008];
  if ( dword_140C204A4 != (unsigned __int64)qword_140C239A8 >= MEMORY[0xFFFFF78000000008] || dword_140C204AC != v2 )
  {
    sub_140224EDC();
    dword_140C204A4 = v5;
    dword_140C204AC = v2;
  }
  return sub_140224B50(0LL, 0LL, 0LL, 0LL);
}
