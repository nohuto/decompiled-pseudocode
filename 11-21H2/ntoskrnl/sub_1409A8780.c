/*
 * XREFs of sub_1409A8780 @ 0x1409A8780
 * Callers:
 *     sub_1409A3A54 @ 0x1409A3A54 (sub_1409A3A54.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1409A8780(int a1, int a2, char a3)
{
  _UNKNOWN **v3; // rax
  int ProcessSessionId; // eax
  char v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  int v11; // [rsp+40h] [rbp-21h] BYREF
  int v12; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  int v15; // [rsp+70h] [rbp+Fh]
  int v16; // [rsp+74h] [rbp+13h]
  int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  char *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

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
      v21 = 4;
      v11 = a1;
      v12 = a2;
      v9 = a3;
      v24 = 1;
      LOBYTE(v3) = sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)byte_140033757, 0LL, 0LL, 6u, &v13);
    }
  }
  return (char)v3;
}
