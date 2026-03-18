/*
 * XREFs of HMUnlockDestroyObject @ 0x1C00D0300
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 */

__int64 __fastcall HMUnlockDestroyObject(_DWORD *a1)
{
  __int64 v1; // rcx

  if ( a1[2] == 1 )
  {
    HMMarkObjectDestroyWorker(a1);
    return HMUnlockObject(v1);
  }
  return (__int64)a1;
}
