/*
 * XREFs of ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z @ 0x18001B7CC
 * Callers:
 *     ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z @ 0x18001B6BC (-Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z.c)
 * Callees:
 *     ??0CSurfaceManager@DirectComposition@@AEAA@XZ @ 0x18001B868 (--0CSurfaceManager@DirectComposition@@AEAA@XZ.c)
 *     ?Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z @ 0x18001B910 (-Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z.c)
 *     ??$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectComposition@@@Z @ 0x18001B998 (--$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectCompos.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::Create(
        struct DirectComposition::CSurfaceFactory *a1,
        struct DirectComposition::CSurfaceManager *a2,
        struct DirectComposition::CSurfaceManager **a3)
{
  DirectComposition::CSurfaceManager *v6; // rax
  __int64 v7; // rax
  DirectComposition::CSurfaceManager *v8; // rbx
  int v9; // edi
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v6 = (DirectComposition::CSurfaceManager *)DefaultHeap::AllocClear(0x178uLL);
  if ( !v6 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
  v7 = DirectComposition::CSurfaceManager::CSurfaceManager(v6);
  v11 = v7;
  v8 = (DirectComposition::CSurfaceManager *)v7;
  if ( !v7 )
  {
LABEL_6:
    v9 = -2147024882;
    goto LABEL_5;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 8));
  v9 = DirectComposition::CSurfaceManager::Initialize(v8, a1, a2);
  if ( v9 >= 0 )
  {
    v11 = 0LL;
    *a3 = v8;
  }
LABEL_5:
  ReleaseInterface<DirectComposition::CSurfaceManager>(&v11);
  return (unsigned int)v9;
}
