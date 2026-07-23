/*
 * XREFs of sub_140781814 @ 0x140781814
 * Callers:
 *     sub_140699B5C @ 0x140699B5C (sub_140699B5C.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 *     sub_140A23A34 @ 0x140A23A34 (sub_140A23A34.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1403CB720 @ 0x1403CB720 (sub_1403CB720.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140781814(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        int a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int16 v9; // si
  unsigned int v11; // ebp
  char v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _WORD *Pool2; // rax
  __int64 v17; // rcx
  _WORD *v18; // r13
  int v19; // ebx
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  WCHAR v28[40]; // [rsp+70h] [rbp-98h] BYREF

  v9 = a3;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    return (unsigned int)-1073741811;
  v11 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 == 49 )
    {
      v12 = 0;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  v12 = 1;
LABEL_5:
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( a2[v14] );
  v15 = 2 * v14 + 6;
  if ( v15 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
  v18 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v19 = sub_14077ED0C(v17, a2, v12, v28, Pool2, (unsigned int)v15 >> 1);
  if ( v19 < 0 )
    goto LABEL_26;
  v20 = v9 & 0x200;
  if ( v20 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        goto LABEL_50;
      v27 = -1LL;
      do
        ++v27;
      while ( v28[v27] );
      v22 = v27 + 96;
    }
    else
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v28[v26] );
      v22 = v26 + 99;
    }
  }
  else
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v28[v21] );
    v22 = v21 + 48;
  }
  do
    ++v13;
  while ( v18[v13] );
  v23 = v22 + v13 + 1;
  if ( v11 < 0x30 )
    goto LABEL_50;
  if ( v11 <= 0x31 )
    goto LABEL_17;
  if ( v11 != 50 )
  {
LABEL_50:
    v19 = -1073741811;
    goto LABEL_26;
  }
  v23 += 18LL;
LABEL_17:
  if ( v23 > 0xFFFFFFFF )
  {
    v19 = -1073741675;
  }
  else
  {
    v19 = 0;
    if ( a8 )
      *a8 = v23;
    if ( (unsigned int)v23 <= a7 )
    {
      if ( v20 )
      {
        if ( a4 )
        {
          if ( a4 == -1 )
            goto LABEL_24;
          v24 = sub_1402DFBC4(
                  a6,
                  a7,
                  0LL,
                  0LL,
                  0x800u,
                  L"%s\\%04u\\%s\\%s\\%s",
                  L"System\\CurrentControlSet\\Hardware Profiles",
                  a4,
                  L"System\\CurrentControlSet\\Control\\DeviceClasses",
                  v28,
                  v18);
        }
        else
        {
          v24 = sub_1402DFBC4(
                  a6,
                  a7,
                  0LL,
                  0LL,
                  0x800u,
                  L"%s\\%s\\%s\\%s",
                  L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                  L"System\\CurrentControlSet\\Control\\DeviceClasses",
                  v28,
                  v18);
        }
      }
      else
      {
        v24 = sub_1402DFBC4(
                a6,
                a7,
                0LL,
                0LL,
                0x800u,
                L"%s\\%s\\%s",
                L"System\\CurrentControlSet\\Control\\DeviceClasses",
                v28,
                v18);
      }
      v19 = v24;
LABEL_24:
      if ( v19 >= 0 && v11 == 50 )
      {
        v19 = sub_1403CB720(a6, a7);
        if ( v19 >= 0 )
          v19 = sub_1403CB720(a6, a7);
      }
      goto LABEL_26;
    }
    v19 = -1073741789;
  }
LABEL_26:
  ExFreePoolWithTag(v18, 0);
  return (unsigned int)v19;
}
