/*
 * XREFs of sub_140603128 @ 0x140603128
 * Callers:
 *     sub_140602644 @ 0x140602644 (sub_140602644.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140603128()
{
  __int64 i; // rbx
  int v1; // [rsp+30h] [rbp-49h] BYREF
  __int64 v2; // [rsp+38h] [rbp-41h] BYREF
  __int64 v3; // [rsp+40h] [rbp-39h] BYREF
  __int64 v4; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-29h] BYREF
  int *v6; // [rsp+70h] [rbp-9h]
  int v7; // [rsp+78h] [rbp-1h]
  int v8; // [rsp+7Ch] [rbp+3h]
  _BYTE v9[16]; // [rsp+80h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+90h] [rbp+17h]
  int v11; // [rsp+98h] [rbp+1Fh]
  int v12; // [rsp+9Ch] [rbp+23h]
  __int64 *v13; // [rsp+A0h] [rbp+27h]
  int v14; // [rsp+A8h] [rbp+2Fh]
  int v15; // [rsp+ACh] [rbp+33h]
  __int64 *v16; // [rsp+B0h] [rbp+37h]
  int v17; // [rsp+B8h] [rbp+3Fh]
  int v18; // [rsp+BCh] [rbp+43h]

  if ( (qword_140D01450 & 0x400000) != 0 )
  {
    for ( i = qword_140D049A8; i; i = *(_QWORD *)i )
    {
      if ( (unsigned int)dword_140C090C0 > 5 )
      {
        if ( sub_1402A2000((__int64)&dword_140C090C0, 0x800000000000LL) )
        {
          v8 = 0;
          v1 = dword_140C18FD4;
          v6 = &v1;
          v7 = 4;
          sub_1402A2094((__int64)v9, (const WCHAR *)(i + 8));
          v12 = 0;
          v15 = 0;
          v18 = 0;
          v10 = &v2;
          v3 = *(unsigned int *)(i + 84);
          v13 = &v3;
          v4 = *(unsigned int *)(i + 88);
          v16 = &v4;
          v2 = qword_140D049B8;
          v11 = 8;
          v14 = 8;
          v17 = 8;
          sub_14020A9C4((__int64)&dword_140C090C0, (unsigned __int8 *)byte_140034493, 0LL, 0LL, 7u, &v5);
        }
      }
    }
  }
}
