/*
 * XREFs of sub_14077A750 @ 0x14077A750
 * Callers:
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_14077B908 @ 0x14077B908 (sub_14077B908.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1402DEFC0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1402DF320 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140779B80 @ 0x140779B80 (sub_140779B80.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B1E0 @ 0x14077B1E0 (sub_14077B1E0.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077A750(__int64 a1, unsigned int a2, __int64 a3, char **a4)
{
  PVOID v8; // rsi
  int v9; // ebx
  char **v10; // rax
  char *v11; // rdi
  int v13; // eax
  void *Pool2; // rax
  _DWORD *v15; // rdi
  PVOID v16; // rax
  PVOID inserted; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v19; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[112]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v8 = 0LL;
  Buffer = v23;
  *a4 = 0LL;
  v19 = 0LL;
  v9 = sub_14077B1E0(a1, a2, v24);
  if ( v9 >= 0 )
  {
    v23[1] = v24;
    v10 = (char **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
    {
      v11 = *v10;
      if ( *v10 )
      {
LABEL_4:
        *a4 = v11;
        return (unsigned int)v9;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v13 = sub_14077B0A4(a2, a1, &v19);
    v9 = v13;
    if ( v13 == -1073741772 )
    {
      v8 = v19;
      v9 = 0;
      goto LABEL_18;
    }
    if ( v13 < 0 )
    {
      v8 = v19;
LABEL_15:
      if ( v11 )
        sub_140779B80(v11);
      goto LABEL_17;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1097887312LL);
    P = Pool2;
    v15 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x50uLL);
      v16 = v19;
      *v15 = 1;
      v15[18] = 5;
      *((_QWORD *)v15 + 1) = v16;
      inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &P, 8u, 0LL, NodeOrParent, SearchResult);
      v11 = (char *)P;
      if ( inserted )
        goto LABEL_4;
      v9 = -1073741670;
      goto LABEL_15;
    }
    v8 = v19;
    v9 = -1073741670;
  }
LABEL_17:
  *a4 = 0LL;
LABEL_18:
  if ( v8 )
    sub_14077B394(v8);
  return (unsigned int)v9;
}
