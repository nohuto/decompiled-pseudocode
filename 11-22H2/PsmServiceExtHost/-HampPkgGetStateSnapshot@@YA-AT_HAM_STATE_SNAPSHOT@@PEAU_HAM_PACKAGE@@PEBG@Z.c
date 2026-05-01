/*
 * XREFs of ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180037D5C
 * Callers:
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x180036418 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampAppGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z @ 0x180037CCC (-HampAppGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall HampPkgGetStateSnapshot(struct _HAM_RC_TREE_NODE *a1, const wchar_t *a2)
{
  unsigned __int8 v4; // bl
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v6; // rdi
  int v8[4]; // [rsp+20h] [rbp-C8h] BYREF
  wchar_t String1[72]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = 0;
  memset_0(String1, 0, 0x82uLL);
  for ( i = HamRcNodeGetFirst(a1, 1); ; i = HamRcNodeGetSuccessor(a1, v6) )
  {
    v6 = i;
    if ( !i )
      break;
    v8[0] = 130;
    PsmGetApplicationNameFromKey((char *)i + 96, String1, v8);
    if ( !_wcsicmp(String1, a2) )
      v4 = (HampAppGetStateSnapshot(v6) | v4) & 3;
  }
  return v4;
}
