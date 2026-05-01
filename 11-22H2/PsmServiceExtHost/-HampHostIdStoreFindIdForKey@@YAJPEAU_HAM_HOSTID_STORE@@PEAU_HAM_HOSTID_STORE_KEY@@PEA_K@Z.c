/*
 * XREFs of ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800800F0
 * Callers:
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18007213C (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CemRcTableFind @ 0x180035D10 (CemRcTableFind.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800800B8 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180080388 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreFindIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  HampHostIdStoreAcquireLockShared(a1, (__int64)a2);
  v10 = CemRcTableFind(
          (__int64)a1 + 56,
          *((unsigned int *)a2 + 133),
          (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareSessionByKey);
  if ( v10
    && (v6 = (_QWORD *)v10,
        (v11 = CemRcTableFind(
                 v10 + 40,
                 (__int64)a2 + 464,
                 (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareUserByKey)) != 0)
    && (v7 = (_QWORD *)v11,
        (v12 = CemRcTableFind(
                 v11 + 40,
                 (__int64)a2,
                 (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareApplicationByKey)) != 0)
    && (v8 = (_QWORD *)v12,
        (v13 = CemRcTableFind(
                 v12 + 40,
                 (__int64)a2,
                 (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareLeafByKey)) != 0) )
  {
    v9 = (_QWORD *)v13;
    v14 = 0;
    *a3 = *(_QWORD *)(v13 + 88);
  }
  else
  {
    v14 = -1073741275;
  }
  HampHostIdStoreReleaseLockShared(a1);
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v6 )
    CemRcObjectDereference(v6);
  return v14;
}
