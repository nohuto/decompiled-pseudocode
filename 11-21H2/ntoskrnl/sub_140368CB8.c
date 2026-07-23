/*
 * XREFs of sub_140368CB8 @ 0x140368CB8
 * Callers:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_140368DAC @ 0x140368DAC (sub_140368DAC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140368CB8(int a1, int a2)
{
  __int64 v3; // rax
  const EVENT_DESCRIPTOR *v4; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v6; // [rsp+50h] [rbp-B0h]
  int v7; // [rsp+58h] [rbp-A8h]
  int v8; // [rsp+5Ch] [rbp-A4h]
  _BYTE v9[256]; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+180h] [rbp+80h] BYREF

  v10 = a1;
  if ( qword_140D00B58 && (int)sub_140368DAC(v9, 256LL) >= 0 )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v10;
    UserData.Size = 4;
    v6 = v9;
    v3 = -1LL;
    do
      ++v3;
    while ( v9[v3] );
    v8 = 0;
    v4 = (const EVENT_DESCRIPTOR *)qword_140010F80;
    v7 = v3 + 1;
    if ( a2 )
      v4 = &stru_140010F90;
    EtwWriteEx(qword_140D00B58, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
}
