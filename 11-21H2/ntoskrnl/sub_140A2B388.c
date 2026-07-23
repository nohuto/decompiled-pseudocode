/*
 * XREFs of sub_140A2B388 @ 0x140A2B388
 * Callers:
 *     sub_1406BD83C @ 0x1406BD83C (sub_1406BD83C.c)
 * Callees:
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406BD994 @ 0x1406BD994 (sub_1406BD994.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140A2A8B4 @ 0x140A2A8B4 (sub_140A2A8B4.c)
 *     sub_140A2C08C @ 0x140A2C08C (sub_140A2C08C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2B388(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  wchar_t *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // r12
  __int64 v17; // rax
  int v18; // ebx
  int v19; // r12d
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rbx
  PVOID v23; // rcx
  void *Pool2; // rax
  int v25; // eax
  __int64 v27; // [rsp+30h] [rbp-71h]
  unsigned int v28; // [rsp+68h] [rbp-39h] BYREF
  int v29; // [rsp+6Ch] [rbp-35h] BYREF
  PVOID P; // [rsp+70h] [rbp-31h]
  const WCHAR *v31; // [rsp+78h] [rbp-29h] BYREF
  PVOID v32; // [rsp+80h] [rbp-21h]
  __int64 *v33; // [rsp+88h] [rbp-19h]
  PVOID v34; // [rsp+90h] [rbp-11h]
  __int64 *v35; // [rsp+98h] [rbp-9h]

  v29 = 0;
  LODWORD(v31) = 0;
  P = 0LL;
  v28 = 0;
  v13 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  if ( (int)sub_1406994BC(a1, a4, (int)&v31, 0, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v31 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a5 + 16) != 20 )
    goto LABEL_8;
  v14 = *(_QWORD *)a5 - 0x40E856266A3433F4LL;
  if ( *(_QWORD *)a5 == 0x40E856266A3433F4LL )
    v14 = *(_QWORD *)(a5 + 8) - 0x4B88D2ECD9DBB9A9LL;
  if ( v14 )
  {
LABEL_8:
    v35 = qword_140038B78;
    v15 = qword_1400388C8;
    v31 = L"*Lower";
    v16 = qword_140038780;
  }
  else
  {
    v35 = qword_140039568;
    v15 = qword_140038560;
    v31 = L"*Upper";
    v16 = qword_1400392C8;
  }
  v33 = v15;
  if ( (unsigned int)sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)v15, (__int64)&v29, 0LL, 0, (__int64)&v28, 0) != -1073741789
    || v29 != 8210 )
  {
    v21 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)v16, (__int64)&v29, 0LL, 0, (__int64)&v28, 0);
    v18 = v21;
    if ( v21 == -1073741789 && v29 == 18 )
    {
      P = (PVOID)ExAllocatePool2(256LL, v28, 1380994640LL);
      if ( !P )
        return (unsigned int)-1073741801;
      v27 = (__int64)v16;
      v19 = a2;
      v18 = sub_14077DA5C(a1, a2, 2, a3, 0LL, v27, (__int64)&v29, (__int64)P, v28, (__int64)&v28, 0);
      if ( v18 < 0 )
        goto LABEL_23;
      v22 = v35;
      if ( (unsigned int)sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)v35, (__int64)&v29, 0LL, 0, (__int64)&v28, 0) == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v28, 1380994640LL);
        v32 = Pool2;
        if ( !Pool2 )
          goto LABEL_32;
        v18 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)v22, (__int64)&v29, (__int64)Pool2, v28, (__int64)&v28, 0);
        if ( v18 < 0 )
          goto LABEL_23;
        v25 = sub_140A2A8B4(a1, a4, (const wchar_t *)v32, (const wchar_t *)P, v31, 0LL, 0, &v28);
        v18 = v25;
        if ( !v25 )
        {
          v18 = -1073741762;
          goto LABEL_23;
        }
        if ( v25 != -1073741789 )
          goto LABEL_23;
        v13 = (wchar_t *)ExAllocatePool2(256LL, v28, 1380994640LL);
        if ( v13 )
        {
          v18 = sub_140A2A8B4(a1, a4, (const wchar_t *)v32, (const wchar_t *)P, v31, v13, v28, &v28);
          if ( v18 >= 0 )
          {
            sub_14077198C(a1, a2, 2, a3, 0LL, (__int64)v33, 8210, (__int64)v13, v28, 0);
            goto LABEL_15;
          }
        }
        else
        {
LABEL_32:
          v18 = -1073741801;
        }
      }
      else
      {
        v18 = -1073741275;
      }
LABEL_23:
      v23 = P;
LABEL_24:
      ExFreePoolWithTag(v23, 0);
      goto LABEL_25;
    }
    if ( v29 == 8210 && v21 != -1073739509 && v21 )
      return (unsigned int)v18;
    return (unsigned int)-1073741275;
  }
  v17 = ExAllocatePool2(256LL, v28, 1380994640LL);
  v13 = (wchar_t *)v17;
  if ( !v17 )
    return (unsigned int)-1073741801;
  v18 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)v33, (__int64)&v29, v17, v28, (__int64)&v28, 0);
  if ( v18 < 0 )
    goto LABEL_26;
  v19 = a2;
LABEL_15:
  v20 = sub_1406BD994(a1, v19, a3, a6, &v29, 0LL, 0, &v28);
  if ( v20 == -1073741275 )
  {
    v28 = 0;
LABEL_47:
    v18 = sub_140A2C08C(v13, (wchar_t *)v34, a9, a10);
    if ( (int)(v18 + 0x80000000) < 0 || v18 == -1073741789 )
      *a7 = 8210;
    goto LABEL_50;
  }
  if ( v20 != -1073741789 )
  {
    v18 = v20;
    goto LABEL_50;
  }
  if ( !v28 || !a9 )
    goto LABEL_47;
  v34 = (PVOID)ExAllocatePool2(256LL, v28, 1380994640LL);
  if ( !v34 )
  {
    v18 = -1073741801;
    goto LABEL_50;
  }
  v18 = sub_1406BD994(a1, v19, a3, a6, &v29, (__int64)v34, v28, &v28);
  if ( v18 >= 0 )
    goto LABEL_47;
LABEL_50:
  v23 = P;
  if ( P )
    goto LABEL_24;
LABEL_25:
  if ( v13 )
LABEL_26:
    ExFreePoolWithTag(v13, 0);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  return (unsigned int)v18;
}
