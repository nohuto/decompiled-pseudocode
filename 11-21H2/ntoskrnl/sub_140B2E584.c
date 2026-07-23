/*
 * XREFs of sub_140B2E584 @ 0x140B2E584
 * Callers:
 *     sub_1403DCCD8 @ 0x1403DCCD8 (sub_1403DCCD8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 */

char sub_140B2E584()
{
  char result; // al
  int v1; // ecx
  int v2; // edx
  REGHANDLE v3; // rcx
  unsigned int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // edx
  int *v8; // rcx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  int *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh] BYREF
  int v19; // [rsp+8Ch] [rbp+23h]
  int *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int *v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  result = sub_1406D2264((char *)&dword_140C06470, 0LL, 0LL);
  if ( (*(_DWORD *)(qword_140D068D0 + 264) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C06470 <= 5 )
      goto LABEL_5;
    result = sub_1402A2000((__int64)&dword_140C06470, 0x400000000000LL);
    if ( result )
    {
      v6 = *(_QWORD *)(v5 + 240);
      v7 = *(unsigned __int16 *)(v6 + 2784);
      v8 = *(int **)(v6 + 2792);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = (__int64 *)&v18;
      v20 = &v9;
      v17 = v8;
      v18 = v7;
      v9 = (v4 >> 2) & 1;
      v15 = 2;
      v21 = 4;
      result = sub_14020A9C4((__int64)&dword_140C06470, (unsigned __int8 *)byte_14002AB51, 0LL, 0LL, 5u, v13);
    }
  }
  if ( (unsigned int)dword_140C06470 > 5 )
  {
    result = sub_1402A2000((__int64)&dword_140C06470, 0x400000000000LL);
    if ( result )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v12;
      v9 = (unsigned __int8)byte_140D06888;
      v17 = &v9;
      v12 = 0x1000000LL;
      v15 = 8;
      v18 = 4;
      v1 = *(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 2888LL);
      v22 = 0;
      v20 = &v10;
      v10 = v1;
      v21 = 4;
      v2 = *(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 2892LL);
      v25 = 0;
      v23 = &v11;
      v11 = v2;
      v24 = 4;
      result = sub_14020A9C4((__int64)&dword_140C06470, (unsigned __int8 *)byte_14002AB8D, 0LL, 0LL, 6u, v13);
    }
  }
LABEL_5:
  if ( !byte_140D06888 )
  {
    v3 = qword_140C06490;
    qword_140C06490 = 0LL;
    dword_140C06470 = 0;
    return EtwUnregister(v3);
  }
  return result;
}
