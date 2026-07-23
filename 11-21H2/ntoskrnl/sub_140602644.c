/*
 * XREFs of sub_140602644 @ 0x140602644
 * Callers:
 *     sub_140602EB8 @ 0x140602EB8 (sub_140602EB8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     sub_1403DDD24 @ 0x1403DDD24 (sub_1403DDD24.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140603128 @ 0x140603128 (sub_140603128.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS sub_140602644()
{
  __int64 v0; // rdx
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  unsigned int v3; // r9d
  int v4; // r10d
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  int v7; // [rsp+38h] [rbp-61h] BYREF
  int v8; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v9; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-49h] BYREF
  int *v11; // [rsp+70h] [rbp-29h]
  int v12; // [rsp+78h] [rbp-21h]
  int v13; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v14; // [rsp+80h] [rbp-19h]
  int v15; // [rsp+88h] [rbp-11h]
  int v16; // [rsp+8Ch] [rbp-Dh]
  _BYTE v17[16]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v18[16]; // [rsp+A0h] [rbp+7h] BYREF
  int *v19; // [rsp+B0h] [rbp+17h]
  int v20; // [rsp+B8h] [rbp+1Fh]
  int v21; // [rsp+BCh] [rbp+23h]
  int *v22; // [rsp+C0h] [rbp+27h]
  int v23; // [rsp+C8h] [rbp+2Fh]
  int v24; // [rsp+CCh] [rbp+33h]
  int *v25; // [rsp+D0h] [rbp+37h]
  int v26; // [rsp+D8h] [rbp+3Fh]
  int v27; // [rsp+DCh] [rbp+43h]

  sub_1406D2264(&dword_140C090C0);
  qword_140D049B0 = (PVOID)ExAllocatePool2(64LL, 2048LL, 1316118851LL);
  if ( !qword_140D049B0 )
    return -1073741801;
  result = sub_1403DDD24((const GUID *)qword_140041D18, v0, qword_140C09100, qword_140C09100);
  v2 = result;
  if ( result >= 0 )
  {
    if ( dword_140C090C0 && sub_1402A2000((__int64)&dword_140C090C0, 0x800000000000LL) && v3 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C090C0, 0x400000000000LL) )
      {
        v13 = 0;
        v9 = 0LL;
        v16 = 0;
        v5 = dword_140C18FD4;
        v11 = &v5;
        v14 = &v9;
        v12 = 4;
        v15 = 8;
        sub_1402A2094((__int64)v17, word_140C18FE0);
        sub_1402A2094((__int64)v18, L"NA");
        v6 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v19 = &v6;
        v7 = dword_140C18FD0;
        v22 = &v7;
        v8 = qword_140C1A7E0;
        v25 = &v8;
        v20 = v4;
        v23 = v4;
        v26 = v4;
        sub_14020A9C4((__int64)&dword_140C090C0, (unsigned __int8 *)&dword_1400343FC, 0LL, 0LL, 9u, &v10);
      }
    }
    sub_140603128();
    return v2;
  }
  return result;
}
