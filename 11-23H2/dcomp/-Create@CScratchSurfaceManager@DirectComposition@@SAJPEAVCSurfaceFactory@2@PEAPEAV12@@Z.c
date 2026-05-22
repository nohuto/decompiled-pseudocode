/*
 * XREFs of ?Create@CScratchSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAPEAV12@@Z @ 0x18001B740
 * Callers:
 *     ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z @ 0x18001B6BC (-Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCScratchSurfaceManager@DirectComposition@@@@YAXAEAPEAVCScratchSurfaceManager@DirectComposition@@@Z @ 0x18001B9C4 (--$ReleaseInterface@VCScratchSurfaceManager@DirectComposition@@@@YAXAEAPEAVCScratchSurfaceManage.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CScratchSurfaceManager::Create(
        struct DirectComposition::CSurfaceFactory *a1,
        struct DirectComposition::CScratchSurfaceManager **a2)
{
  char *v4; // rax
  unsigned int v5; // ebx
  struct DirectComposition::CScratchSurfaceManager *v6; // rdi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (char *)DefaultHeap::AllocClear(0x38uLL);
  v5 = 0;
  v6 = (struct DirectComposition::CScratchSurfaceManager *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &DirectComposition::CScratchSurfaceManager::`vftable';
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_DWORD *)v4 + 12) = 0;
    *((_QWORD *)v4 + 2) = a1;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
    *a2 = v6;
    v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v5 = -2147024882;
  }
  ReleaseInterface<DirectComposition::CScratchSurfaceManager>(&v8);
  return v5;
}
