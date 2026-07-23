/*
 * XREFs of sub_14020A890 @ 0x14020A890
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_1402509C4 @ 0x1402509C4 (sub_1402509C4.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_140689DC8 @ 0x140689DC8 (sub_140689DC8.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14068B3E0 @ 0x14068B3E0 (sub_14068B3E0.c)
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C700 @ 0x14068C700 (sub_14068C700.c)
 *     sub_14068E154 @ 0x14068E154 (sub_14068E154.c)
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 *     sub_14079C640 @ 0x14079C640 (sub_14079C640.c)
 *     sub_1407C4990 @ 0x1407C4990 (sub_1407C4990.c)
 *     sub_1407C5CB0 @ 0x1407C5CB0 (sub_1407C5CB0.c)
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140919908 @ 0x140919908 (sub_140919908.c)
 *     sub_140919A88 @ 0x140919A88 (sub_140919A88.c)
 *     sub_14091A344 @ 0x14091A344 (sub_14091A344.c)
 *     sub_14091AB6C @ 0x14091AB6C (sub_14091AB6C.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14020A890(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+6Ch] [rbp-15h]
  char *v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  __int64 *v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  char *v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]

  if ( (unsigned int)dword_140C03868 > 5 )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v14 = &v11;
    v17 = (char *)&v11 + 4;
    v20 = &v12;
    v23 = (char *)&v12 + 4;
    HIDWORD(v11) = a3;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    LOBYTE(v11) = a2;
    v15 = 1;
    sub_14020A9C4(&dword_140C03868, &word_140036666, 0LL, 0LL, 6, v13, v11, __PAIR64__(a5, a4));
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v10 = *(unsigned __int16 *)(a1 + 10);
      if ( (unsigned int)v10 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 9)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 8);
      if ( (unsigned int)v9 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 1)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
