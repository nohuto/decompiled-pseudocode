/*
 * XREFs of sub_140A2D760 @ 0x140A2D760
 * Callers:
 *     sub_14094B144 @ 0x14094B144 (sub_14094B144.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1406CB590 @ 0x1406CB590 (sub_1406CB590.c)
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2D760(char *a1, WCHAR *a2, char a3, __int64 a4, int a5)
{
  int v9; // ebx
  unsigned __int64 v10; // rbx
  WCHAR *Pool2; // rax
  WCHAR *v12; // rdi
  char i; // al
  int v14; // eax
  wchar_t *v15; // rax
  int v17; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF

  v19 = 0LL;
  Handle = 0LL;
  a5 = 0;
  v17 = 0;
  v9 = sub_1402DF9D0(a2, 0x7FFFLL, &v19);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = v19 + 1;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, 2 * (v19 + 1), 1279739218LL);
  v12 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v9 = sub_1402E0340(Pool2, v10, a2, 0LL, 0LL, 256);
  if ( v9 )
    goto LABEL_26;
  for ( i = 1; ; i = 0 )
  {
    if ( i && a3 )
    {
      v14 = sub_1406CB238((__int64)a1, (__int64)v12, a4, 0);
      goto LABEL_17;
    }
    v9 = sub_14078003C(a1, v12, 0, 1u, &Handle, a4);
    if ( !v9 )
    {
      v9 = sub_1406CB590(Handle, &a5, 0LL, &v17, 0LL, 0LL);
      ZwClose(Handle);
      if ( v9 != -1073741444 && v9 )
        goto LABEL_26;
      if ( a5 || v17 )
      {
        v9 = -1073741535;
        goto LABEL_26;
      }
      goto LABEL_16;
    }
    if ( v9 != -1073741772 )
      break;
LABEL_16:
    v14 = sub_140862B44(a1, v12, 0LL);
LABEL_17:
    v9 = v14;
    if ( v14 && v14 != -1073741772 )
      goto LABEL_26;
    v15 = wcsrchr(v12, 0x5Cu);
    if ( !v15 )
      goto LABEL_26;
    for ( *v15 = 0; v15 != v12; *v15 = 0 )
    {
      if ( *--v15 != 92 )
        break;
    }
  }
  if ( v9 == -1073741444 )
    v9 = 0;
LABEL_26:
  ExFreePoolWithTag(v12, 0);
  return (unsigned int)v9;
}
