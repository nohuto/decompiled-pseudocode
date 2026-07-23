/*
 * XREFs of sub_1406BAFD4 @ 0x1406BAFD4
 * Callers:
 *     sub_1406BAEA0 @ 0x1406BAEA0 (sub_1406BAEA0.c)
 *     sub_1406BAEF0 @ 0x1406BAEF0 (sub_1406BAEF0.c)
 *     sub_14080AA70 @ 0x14080AA70 (sub_14080AA70.c)
 * Callees:
 *     sub_140240534 @ 0x140240534 (sub_140240534.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     _snwscanf_s @ 0x1403E6720 (_snwscanf_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BB218 @ 0x1406BB218 (sub_1406BB218.c)
 *     sub_1406BB4A0 @ 0x1406BB4A0 (sub_1406BB4A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406BAFD4(int a1, __int64 a2, char a3, _DWORD *a4, char a5, _QWORD *a6)
{
  WCHAR *v6; // r14
  WCHAR *v7; // rsi
  PVOID v8; // rdi
  int v10; // eax
  wchar_t *v11; // r12
  int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // rbx
  size_t v15; // rbx
  wchar_t *Pool2; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  wchar_t *v20; // rax
  size_t v21; // r15
  WCHAR *v22; // rax
  int v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+44h] [rbp-1Ch] BYREF
  int v25; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+4Ch] [rbp-14h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h]
  wchar_t *Src; // [rsp+58h] [rbp-8h] BYREF

  v24 = 0;
  v23 = 0;
  v6 = 0LL;
  v25 = 0;
  v7 = 0LL;
  v26 = 0;
  v8 = 0LL;
  P = 0LL;
  Src = 0LL;
  v10 = sub_1406BB218(a2, &Src);
  v11 = Src;
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_16;
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  if ( snwscanf_s(Src, v14 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v23, &v24, &v26, &v25) != 4 )
  {
    v12 = -1073741823;
    goto LABEL_16;
  }
  if ( v23 || v24 )
  {
    v12 = -1073741823;
    goto LABEL_33;
  }
  v15 = v14 + 11;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * v15, 1263556947LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_16;
  }
  swprintf_s(Pool2, v15, L"%s%s", L"\\ArcName\\", v11);
  v12 = sub_1406BB4A0(v7);
  if ( v12 < 0 )
  {
LABEL_27:
    v8 = P;
    goto LABEL_33;
  }
  v8 = P;
  if ( a3 )
  {
    v12 = sub_140240534((__int64)P, a4, v17, v18, a5);
    if ( v12 < 0 )
    {
LABEL_33:
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( !v7 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  if ( !a1 )
  {
    v20 = wcsstr(v7, L"partition");
    if ( v20 )
      *v20 = 0;
    do
      ++v13;
    while ( v7[v13] );
    v21 = 2 * v13 + 2;
    v22 = (WCHAR *)ExAllocatePool2(256LL, v21, 1263556947LL);
    v6 = v22;
    if ( v22 )
    {
      memmove(v22, v7, v21);
      ExFreePoolWithTag(v8, 0);
      P = 0LL;
      v12 = sub_1406BB4A0(v6);
      if ( v12 >= 0 )
      {
        v8 = P;
        goto LABEL_12;
      }
      goto LABEL_27;
    }
    v12 = -1073741670;
    goto LABEL_33;
  }
LABEL_12:
  *a6 = v8;
LABEL_13:
  ExFreePoolWithTag(v7, 0);
LABEL_14:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_16:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v12;
}
