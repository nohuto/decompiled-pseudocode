/*
 * XREFs of sub_1409A7A18 @ 0x1409A7A18
 * Callers:
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1409A7A18(int a1, __int64 a2, char a3)
{
  _UNKNOWN **v3; // rax
  int ProcessSessionId; // eax
  char v9; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  int v11; // [rsp+40h] [rbp-31h] BYREF
  __int64 v12; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-19h] BYREF
  int *v14; // [rsp+78h] [rbp+7h]
  int v15; // [rsp+80h] [rbp+Fh]
  int v16; // [rsp+84h] [rbp+13h]
  int *v17; // [rsp+88h] [rbp+17h]
  int v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+94h] [rbp+23h]
  __int64 *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]
  char *v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]
  int v25; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    LOBYTE(v3) = sub_1402A2000((__int64)&dword_140D3B908, 1LL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v10 = ProcessSessionId;
      v14 = &v10;
      v17 = &v11;
      v20 = &v12;
      v23 = &v9;
      v15 = 4;
      v18 = 4;
      v11 = a1;
      v12 = a2;
      v21 = 8;
      v9 = a3;
      v24 = 1;
      LOBYTE(v3) = sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)byte_140033D49, 0LL, 0LL, 6u, &v13);
    }
  }
  return (char)v3;
}
