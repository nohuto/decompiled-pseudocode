/*
 * XREFs of ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180076F18
 * Callers:
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006FB74 (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     CemRcTableFind @ 0x180027F50 (CemRcTableFind.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180076EA4 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800772D8 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreFindIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

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
        (v12 = CemRcTableFind(
                 v10 + 40,
                 (__int64)a2 + 464,
                 (__int64 (__fastcall *)(__int64, __int64))HampUserCompareByIdentity)) != 0)
    && (v7 = (_QWORD *)v12,
        (v13 = CemRcTableFind(
                 v12 + 40,
                 (__int64)a2,
                 (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareApplicationByKey)) != 0)
    && (v8 = (_QWORD *)v13,
        (v14 = CemRcTableFind(
                 v13 + 40,
                 (__int64)a2,
                 (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareLeafByKey)) != 0) )
  {
    v9 = (_QWORD *)v14;
    v11 = 0;
    *a3 = *(_QWORD *)(v14 + 88);
  }
  else
  {
    v11 = -1073741275;
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
  return v11;
}
