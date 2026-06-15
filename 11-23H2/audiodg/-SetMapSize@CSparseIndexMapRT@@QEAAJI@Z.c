/*
 * XREFs of ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14009F584
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14009F2A0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140002BF4 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001A794 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140025B70 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14007AC44 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 */

__int64 __fastcall CSparseIndexMapRT::SetMapSize(CSparseIndexMapRT *this, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  void *v6; // rcx
  void *v7; // rax
  void *v8; // rax
  int v9; // edx
  int v10; // r8d

  v3 = 0;
  v4 = a2;
  if ( a2 <= *((_DWORD *)this + 4) )
    goto LABEL_11;
  if ( *((_QWORD *)this + 3) )
    *((_QWORD *)this + 3) = 0LL;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    AERTDestroyZoneHeap(v6, a2, a3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = (void *)AERTCreateZoneHeap(4 * v4);
  *((_QWORD *)this + 1) = v7;
  if ( v7 )
  {
    v8 = (void *)AERTZoneAllocate(4 * v4, v7);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v3 = -2147024882;
      AERTDestroyZoneHeap(*((void **)this + 1), v9, v10);
      *((_QWORD *)this + 1) = 0LL;
      return v3;
    }
    AERTLockZoneHeap(v8, v9, v10);
    *((_DWORD *)this + 4) = v4;
LABEL_11:
    *(_DWORD *)this = v4;
    return v3;
  }
  return (unsigned int)-2147024882;
}
