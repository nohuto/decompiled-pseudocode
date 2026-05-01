/*
 * XREFs of HamRpcSrvGetStateSnapshotForAumid @ 0x18002E290
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18002D468 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 */

__int64 __fastcall HamRpcSrvGetStateSnapshotForAumid(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  result = HamSrvGetStateSnapshotForAumid(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248),
             a2,
             a3,
             a4,
             a5,
             (union _HAM_STATE_SNAPSHOT *)v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
