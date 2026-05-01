/*
 * XREFs of ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180015978
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180015A28 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z @ 0x180015A70 (-HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall HampHostIdStoreLeafInitialize(
        struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        struct _HAM_HOSTID_ENTRY *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _OWORD *v9; // rax
  _OWORD *v10; // rdi
  __int128 v11; // xmm1

  memset_0(a3, 0, 0x270uLL);
  HamRcLeafInitialize(a1, a3);
  v8 = 4LL;
  v9 = (_OWORD *)((char *)a3 + 96);
  v10 = (_OWORD *)((char *)a2 + 536);
  do
  {
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v9[5] = v10[5];
    v9[6] = v10[6];
    v9 += 8;
    v11 = v10[7];
    v10 += 8;
    *(v9 - 1) = v11;
    --v8;
  }
  while ( v8 );
  *((_QWORD *)a3 + 11) = HamObjectIdGenerate(0LL, 128LL, v6, v7);
}
