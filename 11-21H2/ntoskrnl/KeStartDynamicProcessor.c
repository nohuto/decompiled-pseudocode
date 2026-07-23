/*
 * XREFs of KeStartDynamicProcessor @ 0x140961810
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_14055F378 @ 0x14055F378 (sub_14055F378.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_1409AD870 @ 0x1409AD870 (sub_1409AD870.c)
 */

__int64 __fastcall KeStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // r9d
  int v9; // ebx

  if ( *((PEPROCESS *)KeGetCurrentThread() + 23) != PsInitialSystemProcess || !KeDynamicPartitioningSupported )
    return 3221225473LL;
  ExAcquireFastMutexUnsafe(&stru_140C2B9A0);
  if ( (unsigned int)dword_140D06884 >= dword_140D068E8 )
  {
    v9 = -1073741223;
  }
  else
  {
    v8 = dword_140D06884;
    *a4 = dword_140D06884;
    v9 = sub_14096029C(v7, a2, a3, v8);
  }
  ExReleaseFastMutexUnsafe(&stru_140C2B9A0);
  if ( v9 >= 0 )
  {
    sub_14055F378();
    sub_1409AD870();
  }
  return (unsigned int)v9;
}
