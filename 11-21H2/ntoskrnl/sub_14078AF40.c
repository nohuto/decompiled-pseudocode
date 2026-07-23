/*
 * XREFs of sub_14078AF40 @ 0x14078AF40
 * Callers:
 *     sub_14078ACE0 @ 0x14078ACE0 (sub_14078ACE0.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406DF01C @ 0x1406DF01C (sub_1406DF01C.c)
 *     sub_140748F48 @ 0x140748F48 (sub_140748F48.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078AF40(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  _DWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  _DWORD *v26; // rsi
  __int64 Pool2; // rax
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  int v30; // [rsp+B8h] [rbp+38h] BYREF
  int v31; // [rsp+C0h] [rbp+40h] BYREF
  int v32; // [rsp+C8h] [rbp+48h] BYREF

  v2 = 0;
  v28 = 0LL;
  v31 = 0;
  DestinationString = 0LL;
  v30 = 0;
  if ( !byte_140C4E920 )
    return (unsigned int)v2;
  v3 = *(_DWORD *)(a1 + 88);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 24) = -1;
    v16 = Pool2;
    *(_DWORD *)(Pool2 + 20) = 2;
    *(_OWORD *)(Pool2 + 28) = *(_OWORD *)(a1 + 72);
LABEL_25:
    sub_1406DF01C(v16);
    return (unsigned int)v2;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v12 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4009LL;
    if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4009LL )
      v12 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
    if ( !v12 )
      goto LABEL_20;
    v22 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A400DLL;
    if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A400DLL )
      v22 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
    if ( !v22 )
    {
LABEL_20:
      v13 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
      v14 = v13;
      if ( !v13 )
        return (unsigned int)-1073741670;
      v15 = (_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 20) = 0;
      v2 = sub_14077DA5C(
             *(__int64 *)&qword_140D00AC0,
             a1 + 120,
             1,
             0,
             0LL,
             (__int64)&stru_140010AF0,
             (__int64)&v30,
             v13 + 24,
             4,
             (__int64)&v31,
             0);
      if ( v2 >= 0 && v31 == 4 )
        goto LABEL_24;
      *v15 = -1;
      goto LABEL_23;
    }
    v23 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4008LL;
    if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4008LL )
      v23 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
    v11 = v23 == 0;
LABEL_15:
    if ( !v11 )
      return (unsigned int)v2;
    goto LABEL_20;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v17 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4004LL;
    if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4004LL )
      v17 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
    if ( v17 )
    {
      v21 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4005LL;
      if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4005LL )
        v21 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
      if ( v21 )
        return (unsigned int)v2;
    }
    v18 = *(_QWORD *)(a1 + 120) - 0x11D0B6BF53F5630DLL;
    if ( *(_QWORD *)(a1 + 120) == 0x11D0B6BF53F5630DLL )
      v18 = *(_QWORD *)(a1 + 128) + 0x7404E1365FFF0D6CLL;
    if ( !v18 )
    {
      v14 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
      if ( !v14 )
        return (unsigned int)-1073741670;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 136));
      *(_DWORD *)(v14 + 20) = 1;
      *(_DWORD *)(v14 + 24) = sub_140748F48();
      goto LABEL_24;
    }
    v19 = *(_QWORD *)(a1 + 120) - 0x11D0F88397F76EF0LL;
    if ( *(_QWORD *)(a1 + 120) == 0x11D0F88397F76EF0LL )
      v19 = *(_QWORD *)(a1 + 128) - 0x5C8400F800001FAFLL;
    if ( v19 )
    {
      v20 = *(_QWORD *)(a1 + 120) - 0x11D0808986E0D1E0LL;
      if ( *(_QWORD *)(a1 + 120) == 0x11D0808986E0D1E0LL )
        v20 = *(_QWORD *)(a1 + 128) - 0x731F303E0008E49CLL;
      if ( v20 )
        return (unsigned int)v2;
    }
    v14 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
    if ( !v14 )
      return (unsigned int)-1073741670;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 136));
    *(_DWORD *)(v14 + 20) = 3;
    *(_OWORD *)(v14 + 28) = *(_OWORD *)(a1 + 72);
    v32 = 400;
    v2 = sub_14077DA5C(
           *(__int64 *)&qword_140D00AC0,
           a1 + 136,
           3,
           0,
           0LL,
           (__int64)&qword_140010AD8,
           (__int64)&v30,
           v14 + 44,
           400,
           (__int64)&v32,
           0);
    if ( v2 < 0 || v30 != 18 )
    {
      ExFreePoolWithTag((PVOID)v14, 0x59706E50u);
      return (unsigned int)v2;
    }
    v32 = 4;
    v2 = sub_14077DA5C(
           *(__int64 *)&qword_140D00AC0,
           v14 + 44,
           1,
           0,
           0LL,
           (__int64)&stru_140010AF0,
           (__int64)&v30,
           v14 + 24,
           4,
           (__int64)&v32,
           0);
    if ( v2 >= 0 && v30 == 7 )
      goto LABEL_24;
    *(_DWORD *)(v14 + 24) = -1;
LABEL_23:
    v2 = 0;
LABEL_24:
    v16 = v14;
    goto LABEL_25;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v11 = v6 == 1;
    goto LABEL_15;
  }
  v7 = a1 + 128;
  v2 = sub_1402E0AC4((_WORD *)(a1 + 128), 0xC8uLL, &v28);
  if ( v2 >= 0 && v28 )
  {
    if ( (unsigned int)(2 * v28 + 82) < 0x50 || 2 * (int)v28 + 89 < (unsigned int)(2 * v28 + 82) )
      return (unsigned int)-1073741675;
    v2 = 0;
    v8 = (2 * (_DWORD)v28 + 89) & 0xFFFFFFF8;
    v9 = *(_QWORD *)(v8 + a1 + 76) - 0x11D24C062DE97F83LL;
    if ( *(_QWORD *)(v8 + a1 + 76) == 0x11D24C062DE97F83LL )
      v9 = *(_QWORD *)(v8 + a1 + 84) - 0x5A051397600032A5LL;
    if ( !v9 )
    {
      v24 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
      v25 = v24;
      if ( v24 )
      {
        v26 = (_DWORD *)(v24 + 24);
        *(_DWORD *)(v24 + 20) = 1;
        v2 = sub_14077DA5C(
               *(__int64 *)&qword_140D00AC0,
               v7,
               1,
               0,
               0LL,
               (__int64)&stru_140010AF0,
               (__int64)&v30,
               v24 + 24,
               4,
               (__int64)&v31,
               0);
        if ( v2 < 0 || v31 != 4 )
        {
          *v26 = -1;
          v2 = 0;
        }
        v16 = v25;
        goto LABEL_25;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v2;
}
