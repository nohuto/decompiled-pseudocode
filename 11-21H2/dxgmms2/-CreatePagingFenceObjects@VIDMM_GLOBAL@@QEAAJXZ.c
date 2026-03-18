/*
 * XREFs of ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7E9C
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7814 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C0099A90 (VidSchCreateSyncObject.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D61B0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreatePagingFenceObjects(VIDMM_GLOBAL *this)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  int SyncObject; // esi
  int v6[20]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0LL;
  if ( !*((_DWORD *)this + 1754) )
    return 0LL;
  while ( 1 )
  {
    memset(v6, 0, sizeof(v6));
    v6[0] = 5;
    v3 = (unsigned int)(-101 - 100 * v1);
    *((_QWORD *)this + v1 + 621) = v3;
    *((_QWORD *)this + v1 + 685) = v3;
    *(_QWORD *)&v6[2] = v3;
    SyncObject = VidSchCreateSyncObject(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 632LL),
                   0LL,
                   v6,
                   9,
                   0LL,
                   0LL,
                   (__int64 *)this + (unsigned int)v1 + 749,
                   0LL);
    if ( SyncObject < 0 )
      break;
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= *((_DWORD *)this + 1754) )
      return 0LL;
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  return (unsigned int)SyncObject;
}
