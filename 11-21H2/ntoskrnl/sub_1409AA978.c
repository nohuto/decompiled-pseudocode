/*
 * XREFs of sub_1409AA978 @ 0x1409AA978
 * Callers:
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1409AA978(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  int ProcessSessionId; // eax
  int v8; // [rsp+38h] [rbp-39h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  int v10; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-29h] BYREF
  int *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  int *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  int *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  _DWORD *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  int *v24; // [rsp+A8h] [rbp+37h]
  _DWORD v25[2]; // [rsp+B0h] [rbp+3Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v27; // [rsp+E8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v27 = a3;
  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    LOBYTE(v3) = sub_1402A2000((__int64)&dword_140D3B908, 1LL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v25[1] = 0;
      v8 = ProcessSessionId;
      v12 = &v8;
      v15 = &v9;
      v18 = &v10;
      v21 = v25;
      v24 = &v27;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v25[0] = 4;
      v9 = a1;
      v10 = a2;
      v22 = 2;
      LOBYTE(v3) = sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)word_140033242, 0LL, 0LL, 7u, &v11);
    }
  }
  return (char)v3;
}
