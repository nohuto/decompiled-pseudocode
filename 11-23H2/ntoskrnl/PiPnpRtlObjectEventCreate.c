/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x1407896F8
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140789548 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A384 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x14031EB30 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x14031EF80 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x1406D82A0 (PiDmInitializeComparisonObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788B38 (PiPnpRtlObjectEventRelease.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(_WORD *a1, unsigned int a2, __int64 a3, char **a4)
{
  char *v8; // rsi
  int v9; // ebx
  char **v10; // rax
  char *v11; // rdi
  int Object; // eax
  void *Pool2; // rax
  _DWORD *v15; // rdi
  PVOID v16; // rax
  PVOID inserted; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v20; // [rsp+40h] [rbp-C0h] BYREF
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
  P = 0LL;
  v9 = PiDmInitializeComparisonObject(a1, a2, (__int64)v24);
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
    Object = PiDmGetObject(a2, (__int64)a1, &P);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v8 = (char *)P;
      v9 = 0;
      goto LABEL_18;
    }
    if ( Object < 0 )
    {
      v8 = (char *)P;
LABEL_15:
      if ( v11 )
        PiPnpRtlObjectEventRelease(v11);
      goto LABEL_17;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1097887312LL);
    v20 = Pool2;
    v15 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x50uLL);
      v16 = P;
      *v15 = 1;
      v15[18] = 5;
      *((_QWORD *)v15 + 1) = v16;
      inserted = RtlInsertElementGenericTableFullAvl(
                   (PRTL_AVL_TABLE)(a3 + 24),
                   &v20,
                   8u,
                   0LL,
                   NodeOrParent,
                   SearchResult);
      v11 = (char *)v20;
      if ( inserted )
        goto LABEL_4;
      v9 = -1073741670;
      goto LABEL_15;
    }
    v8 = (char *)P;
    v9 = -1073741670;
  }
LABEL_17:
  *a4 = 0LL;
LABEL_18:
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)v9;
}
