/*
 * XREFs of sub_1407D8338 @ 0x1407D8338
 * Callers:
 *     sub_1407D7634 @ 0x1407D7634 (sub_1407D7634.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407D936C @ 0x1407D936C (sub_1407D936C.c)
 *     sub_1407DB510 @ 0x1407DB510 (sub_1407DB510.c)
 *     sub_1407DC598 @ 0x1407DC598 (sub_1407DC598.c)
 *     sub_1407DCF18 @ 0x1407DCF18 (sub_1407DCF18.c)
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407D8338(__int64 a1)
{
  bool v2; // zf
  PVOID v3; // rdi
  unsigned __int8 v4; // cl
  unsigned int v5; // eax
  bool v6; // cf
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  int v11; // ecx
  int v12; // edx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v17[16]; // [rsp+58h] [rbp-9h] BYREF

  memset(v17, 0, sizeof(v17));
  v2 = *(_BYTE *)a1 == 1;
  v3 = 0LL;
  v14 = 0;
  P = 0LL;
  if ( !v2 || (v4 = *(_BYTE *)(a1 + 1), v4 >= 2u) || *(_WORD *)(a1 + 2) )
  {
    v9 = -1073741811;
    goto LABEL_18;
  }
  v5 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = v5 < 2;
  }
  else
  {
    if ( (v5 & 4) != 0 && (v5 & 3) != 0 )
      return (unsigned int)-1073741811;
    v6 = v5 < 8;
  }
  if ( !v6 )
    return (unsigned int)-1073741811;
  if ( (int)sub_1407DCF18(1LL, &v14) < 0 )
    return 0;
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  v8 = sub_1407DB510(v7, &P);
  v3 = P;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = sub_1407DC598(P, v16);
    if ( v10 )
    {
      sub_1402E1280((wchar_t *)v17, 0x3CuLL, L"Op-%.17s-%08X", v10, *(_DWORD *)(v7 + 1524));
      v11 = *(_DWORD *)(a1 + 4);
      v12 = v11 & 1;
      v2 = (*(_BYTE *)(a1 + 1) & 1) == 0;
      v17[15] = *(_DWORD *)(a1 + 8);
      if ( v2 )
      {
        if ( (v11 & 2) != 0 || v14 == 2 )
        {
          v12 |= 2u;
        }
        else if ( (v11 & 4) != 0 )
        {
          v12 |= 4u;
        }
        sub_1407DCF7C(v7, (unsigned int)v17, 1, v12, 0LL);
      }
      else
      {
        sub_1407D936C(v7, (unsigned int)(v12 + 8), v17);
      }
      v9 = 0;
    }
    else
    {
      v9 = -1073741595;
    }
  }
LABEL_18:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v9;
}
