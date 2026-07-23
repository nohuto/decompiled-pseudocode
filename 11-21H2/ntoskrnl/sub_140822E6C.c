/*
 * XREFs of sub_140822E6C @ 0x140822E6C
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140822E6C()
{
  int v0; // ecx
  int v1; // ecx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+30h] [rbp-69h] BYREF
  int v8; // [rsp+34h] [rbp-65h] BYREF
  int v9; // [rsp+38h] [rbp-61h] BYREF
  int v10; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v11; // [rsp+40h] [rbp-59h] BYREF
  int v12; // [rsp+44h] [rbp-55h] BYREF
  int v13; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-49h] BYREF
  int *v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  int *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  int *v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  int *v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  int *v23; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]
  int *v25; // [rsp+C0h] [rbp+27h]
  __int64 v26; // [rsp+C8h] [rbp+2Fh]
  int *v27; // [rsp+D0h] [rbp+37h]
  __int64 v28; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_140C04538 > 5 && sub_1402A2000((__int64)&dword_140C04538, 0x400000000000LL) )
  {
    v16 = 4LL;
    v18 = 4LL;
    v0 = *(_DWORD *)(qword_140C4E4B0 + 228);
    v15 = &v7;
    v7 = v0;
    v1 = *(_DWORD *)(qword_140C4E390 + 228);
    v17 = &v8;
    v8 = v1;
    if ( qword_140C4E4C8 )
      v2 = *(_DWORD *)(qword_140C4E4C8 + 228);
    else
      v2 = 0;
    v9 = v2;
    v19 = &v9;
    v20 = 4LL;
    if ( *(_QWORD *)&qword_140C4C7E0 )
      v3 = *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL);
    else
      v3 = 0;
    v10 = v3;
    v21 = &v10;
    v22 = 4LL;
    if ( qword_140C4E500 )
      v4 = *(_DWORD *)(qword_140C4E500 + 228);
    else
      v4 = 0;
    v11 = v4;
    v23 = &v11;
    v24 = 4LL;
    if ( qword_140C4E3E8 )
      v5 = *(_DWORD *)(qword_140C4E3E8 + 228);
    else
      v5 = 0;
    v12 = v5;
    v25 = &v12;
    v26 = 4LL;
    if ( qword_140C4E4F0 )
      v6 = *(_DWORD *)(qword_140C4E4F0 + 228);
    else
      v6 = 0;
    v13 = v6;
    v28 = 4LL;
    v27 = &v13;
    sub_14020A9C4((__int64)&dword_140C04538, (unsigned __int8 *)byte_140028279, 0LL, 0LL, 9u, &v14);
  }
}
