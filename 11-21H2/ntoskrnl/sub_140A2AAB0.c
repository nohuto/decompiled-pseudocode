/*
 * XREFs of sub_140A2AAB0 @ 0x140A2AAB0
 * Callers:
 *     sub_140745F48 @ 0x140745F48 (sub_140745F48.c)
 * Callees:
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 *     sub_140A2A8B4 @ 0x140A2A8B4 (sub_140A2A8B4.c)
 *     sub_140A2C08C @ 0x140A2C08C (sub_140A2C08C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2AAB0(
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
  int v10; // ebx
  wchar_t *v13; // rsi
  wchar_t *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // r15
  const WCHAR *v19; // r12
  __int64 Pool2; // rax
  int v21; // ebx
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  void *v25; // rax
  int v26; // eax
  unsigned int v28; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-25h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-21h] BYREF
  PVOID v31; // [rsp+78h] [rbp-19h]
  __int64 *v32; // [rsp+80h] [rbp-11h]
  PVOID P; // [rsp+88h] [rbp-9h]

  v10 = a3;
  v29 = 0;
  LODWORD(v30) = 0;
  P = 0LL;
  v13 = 0LL;
  v31 = 0LL;
  v14 = 0LL;
  v28 = 0;
  if ( (int)sub_1406994BC(a1, a4, (int)&v30, 0, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v30 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a5 + 16) != 22 )
    goto LABEL_8;
  v15 = *(_QWORD *)a5 - 0x408897A683DA6326LL;
  if ( *(_QWORD *)a5 == 0x408897A683DA6326LL )
    v15 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
  if ( v15 )
  {
LABEL_8:
    v16 = qword_140017608;
    v17 = qword_140038B50;
    v18 = qword_140038578;
    v19 = L"*Lower";
  }
  else
  {
    v16 = qword_1400175F0;
    v17 = qword_1400393F8;
    v18 = qword_1400397C8;
    v19 = L"*Upper";
  }
  v30 = v17;
  v32 = v16;
  if ( (unsigned int)sub_14077DA5C(a1, a2, 1, v10, 0LL, (__int64)v16, (__int64)&v29, 0LL, 0, (__int64)&v28, 0) == -1073741789
    && v29 == 8210 )
  {
    Pool2 = ExAllocatePool2(256LL, v28, 1380994640LL);
    v14 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v21 = sub_14077DA5C(a1, a2, 1, v10, 0LL, (__int64)v32, (__int64)&v29, Pool2, v28, (__int64)&v28, 0);
    if ( v21 < 0 )
      goto LABEL_48;
    v22 = a3;
    goto LABEL_15;
  }
  v24 = sub_14077DA5C(a1, a2, 1, v10, 0LL, (__int64)v18, (__int64)&v29, 0LL, 0, (__int64)&v28, 0);
  v21 = v24;
  if ( v24 != -1073741789 )
  {
    if ( v24 == -1073741275 )
    {
      v13 = (wchar_t *)v19;
      goto LABEL_29;
    }
    goto LABEL_53;
  }
  if ( v29 != 18 )
  {
LABEL_53:
    if ( v29 == 8210 && v24 != -1073739509 && v24 )
      return (unsigned int)v21;
    return (unsigned int)-1073741275;
  }
  v13 = (wchar_t *)ExAllocatePool2(256LL, v28, 1380994640LL);
  if ( !v13 )
    return (unsigned int)-1073741801;
  v21 = sub_14077DA5C(a1, a2, 1, a3, 0LL, (__int64)v18, (__int64)&v29, (__int64)v13, v28, (__int64)&v28, 0);
  if ( v21 < 0 )
    goto LABEL_45;
  if ( (unsigned int)sub_14077DA5C(a1, a2, 1, a3, 0LL, (__int64)v30, (__int64)&v29, 0LL, 0, (__int64)&v28, 0) != -1073741789 )
  {
    v21 = -1073741275;
    goto LABEL_45;
  }
  v25 = (void *)ExAllocatePool2(256LL, v28, 1380994640LL);
  v31 = v25;
  if ( !v25 )
  {
    v21 = -1073741801;
    goto LABEL_45;
  }
  v21 = sub_14077DA5C(a1, a2, 1, a3, 0LL, (__int64)v30, (__int64)&v29, (__int64)v25, v28, (__int64)&v28, 0);
  if ( v21 >= 0 )
  {
LABEL_29:
    v26 = sub_140A2A8B4(a1, a4, (const wchar_t *)v31, v13, v19, 0LL, 0, &v28);
    v21 = v26;
    if ( !v26 )
    {
      v21 = -1073741762;
      goto LABEL_44;
    }
    if ( v26 != -1073741789 )
    {
LABEL_44:
      if ( !v13 )
        goto LABEL_47;
      goto LABEL_45;
    }
    v14 = (wchar_t *)ExAllocatePool2(256LL, v28, 1380994640LL);
    if ( !v14 )
      goto LABEL_33;
    v21 = sub_140A2A8B4(a1, a4, (const wchar_t *)v31, v13, v19, v14, v28, &v28);
    if ( v21 < 0 )
      goto LABEL_44;
    v22 = a3;
    sub_14077198C(a1, a2, 1, a3, 0LL, (__int64)v32, 8210, (__int64)v14, v28, 0);
LABEL_15:
    v23 = sub_140785B98(a1, a2, v22, a6, &v29, 0LL, 0, &v28, 0);
    v21 = v23;
    if ( v23 == -1073741275 )
    {
      v28 = 0;
LABEL_41:
      v21 = sub_140A2C08C(v14, (wchar_t *)P, a9, a10);
      if ( (int)(v21 + 0x80000000) < 0 || v21 == -1073741789 )
        *a7 = 8210;
      goto LABEL_44;
    }
    if ( v23 != -1073741789 )
      goto LABEL_44;
    if ( !v28 || !a9 )
      goto LABEL_41;
    P = (PVOID)ExAllocatePool2(256LL, v28, 1380994640LL);
    if ( P )
    {
      v21 = sub_140785B98(a1, a2, a3, a6, &v29, (__int64)P, v28, &v28, 0);
      if ( v21 < 0 )
        goto LABEL_44;
      goto LABEL_41;
    }
LABEL_33:
    v21 = -1073741801;
    goto LABEL_44;
  }
LABEL_45:
  if ( v13 != v19 )
    ExFreePoolWithTag(v13, 0);
LABEL_47:
  if ( v14 )
LABEL_48:
    ExFreePoolWithTag(v14, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  return (unsigned int)v21;
}
