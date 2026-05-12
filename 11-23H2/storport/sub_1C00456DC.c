/*
 * XREFs of sub_1C00456DC @ 0x1C00456DC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0035FBC @ 0x1C0035FBC (sub_1C0035FBC.c)
 *     sub_1C00449E0 @ 0x1C00449E0 (sub_1C00449E0.c)
 *     sub_1C0071664 @ 0x1C0071664 (sub_1C0071664.c)
 */

__int64 __fastcall sub_1C00456DC(__int64 a1, __int64 a2, int a3, const wchar_t *a4, unsigned int a5, __int64 a6)
{
  char v6; // r12
  unsigned int v7; // ebx
  char v8; // r13
  char v9; // r14
  _DWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  const int *v17; // r15
  const char *v18; // r9
  int v19; // eax
  const char *v20; // r8
  const char *v21; // rdx
  NTSTATUS v22; // r14d
  unsigned int v23; // r14d
  const int *v24; // rcx
  const int *v25; // rax
  unsigned int v26; // edx
  char v28; // [rsp+90h] [rbp-49h]
  unsigned int v29; // [rsp+94h] [rbp-45h]
  __int128 v32; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-9h] BYREF

  v6 = -1;
  v7 = 0;
  v8 = -1;
  v28 = -1;
  v9 = -1;
  HIBYTE(v29) = -1;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (byte_1C0093A04 & 0x20) != 0 )
  {
    v10 = sub_1C000E2EC(a1);
    v11 = (__int64)v10;
    if ( !v10 )
      return (unsigned int)-1056964602;
    sub_1C0010EE0(*((_QWORD *)v10 + 2), (__int64)&v32);
    v33 = *(_OWORD *)(v11 + 5000);
    if ( v12 )
    {
      if ( *(_WORD *)v12 != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)(v12 + 4) < 4u )
        return (unsigned int)-1056964602;
      v9 = *(_BYTE *)(v12 + 10);
      v6 = *(_BYTE *)(v12 + 8);
      v8 = *(_BYTE *)(v12 + 9);
      LOBYTE(v29) = v6;
      BYTE1(v29) = v8;
      BYTE2(v29) = v9;
      v28 = v9;
      v13 = sub_1C00081BC(v11, v29);
      v16 = v13;
      if ( !v13 )
        return (unsigned int)-1056964602;
      v34 = *(_OWORD *)(v13 + 2024);
    }
    else
    {
      v16 = sub_1C0035FBC(v11);
    }
    v17 = &dword_1C0082784;
    if ( (byte_1C0093A04 & 0x20) != 0 )
    {
      if ( v16 )
      {
        v18 = (const char *)(v16 + 186);
        LOBYTE(v19) = *(_BYTE *)(v16 + 450) & 1;
        v20 = (const char *)(v16 + 169);
        v21 = (const char *)(v16 + 160);
      }
      else
      {
        v18 = (const char *)&dword_1C0082784;
        v19 = *(unsigned __int8 *)(v11 + 104) >> 7;
        v20 = (const char *)&dword_1C0082784;
        v21 = (const char *)&dword_1C0082784;
      }
      v22 = sub_1C00449E0(
              a5,
              (__int64)v21,
              (__int64)v20,
              *(_DWORD *)(v11 + 56),
              v6,
              v8,
              v9,
              (__int64)&v34,
              (__int64)&v33,
              *((const wchar_t **)&v32 + 1),
              v21,
              v20,
              v18,
              v19,
              a5,
              a6,
              a3,
              a4);
    }
    else
    {
      v22 = 0;
    }
    v23 = (v22 >> 31) & 0xC1000001;
    if ( v16 )
    {
      v24 = (const int *)(v16 + 186);
      v25 = (const int *)(v16 + 169);
      v17 = (const int *)(v16 + 160);
    }
    else
    {
      v24 = &dword_1C0082784;
      v25 = &dword_1C0082784;
    }
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v28;
    v26 = a5;
    LOBYTE(v26) = v6;
    sub_1C0071664(
      *(_DWORD *)(v11 + 56),
      v26,
      v14,
      v15,
      (__int64)&v34,
      (__int64)&v33,
      *((__int64 *)&v32 + 1),
      (__int64)v17,
      (__int64)v25,
      (__int64)v24,
      a5,
      a6,
      a3,
      (__int64)a4);
    return v23;
  }
  return v7;
}
