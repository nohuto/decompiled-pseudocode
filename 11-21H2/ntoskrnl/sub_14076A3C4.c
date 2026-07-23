/*
 * XREFs of sub_14076A3C4 @ 0x14076A3C4
 * Callers:
 *     sub_140768D10 @ 0x140768D10 (sub_140768D10.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14083F090 @ 0x14083F090 (sub_14083F090.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1402DEFC0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1402DF320 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077B1E0 @ 0x14077B1E0 (sub_14077B1E0.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 */

__int64 __fastcall sub_14076A3C4(unsigned int a1, __int64 a2, volatile signed __int32 **a3)
{
  struct _ERESOURCE *v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v8; // r14
  int v9; // ebx
  PVOID *v10; // rax
  volatile signed __int32 *v11; // rcx
  PVOID inserted; // rax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[112]; // [rsp+50h] [rbp-59h] BYREF

  memset(v18, 0, sizeof(v18));
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  P = 0LL;
  Buffer = v18;
  v6 = (struct _ERESOURCE *)sub_14077B33C(a1);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v9 = sub_14077B1E0(a2, a1, v18);
  if ( v9 < 0 )
    goto LABEL_12;
  v10 = (PVOID *)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)&v8[1], &Buffer, &NodeOrParent, &SearchResult);
  if ( v10 )
  {
    v11 = (volatile signed __int32 *)*v10;
    P = (PVOID)v11;
    if ( v11 )
    {
      ++*((_DWORD *)v11 + 3);
      goto LABEL_5;
    }
  }
  v9 = sub_14078BF98(a1, a2, &P);
  if ( v9 < 0 )
  {
LABEL_12:
    v11 = (volatile signed __int32 *)P;
    goto LABEL_5;
  }
  inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)&v8[1], &P, 8u, 0LL, NodeOrParent, SearchResult);
  v11 = (volatile signed __int32 *)P;
  if ( inserted )
  {
    *((_DWORD *)P + 3) = 1;
  }
  else
  {
    sub_14077B394(P);
    v11 = 0LL;
    v9 = -1073741670;
    P = 0LL;
  }
LABEL_5:
  if ( a3 )
  {
    *a3 = v11;
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
  }
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
