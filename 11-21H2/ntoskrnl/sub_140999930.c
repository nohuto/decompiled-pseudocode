/*
 * XREFs of sub_140999930 @ 0x140999930
 * Callers:
 *     sub_140398CF0 @ 0x140398CF0 (sub_140398CF0.c)
 *     sub_1407FC558 @ 0x1407FC558 (sub_1407FC558.c)
 *     sub_140999610 @ 0x140999610 (sub_140999610.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140999154 @ 0x140999154 (sub_140999154.c)
 */

void __fastcall sub_140999930(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r9d
  int v4; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-45h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h] BYREF
  __int64 v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-9h]
  int v11; // [rsp+78h] [rbp-1h]
  int v12; // [rsp+7Ch] [rbp+3h]
  __int64 *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  __int64 *v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  int *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  int *v22; // [rsp+B0h] [rbp+37h]
  int v23; // [rsp+B8h] [rbp+3Fh]
  int v24; // [rsp+BCh] [rbp+43h]

  v2 = MEMORY[0xFFFFF78000000008];
  if ( !*(_BYTE *)(a1 + 200) )
  {
    if ( *(_QWORD *)(a1 + 208) )
    {
      v3 = sub_140999154(a1, *(_DWORD *)(a1 + 84), 0LL, 0LL);
      *(_QWORD *)(a1 + 8LL * v3 + 216) += v2 - *(_QWORD *)(a1 + 208);
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v10 = &v6;
        v7 = *(_QWORD *)(a1 + 208);
        v13 = &v7;
        v16 = &v8;
        v4 = *(_DWORD *)(a1 + 84);
        v19 = &v4;
        v11 = 8;
        v14 = 8;
        v17 = 8;
        v22 = (int *)&v5;
        v20 = 4;
        v5 = v3;
        v23 = 4;
        v6 = a1;
        v8 = v2;
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_14003152C, 0LL, 0LL, 7u, &v9);
      }
    }
    *(_QWORD *)(a1 + 208) = v2;
  }
}
