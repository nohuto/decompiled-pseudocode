/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18001493C
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CA50 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        struct CVisual *a1,
        struct CContent *a2,
        unsigned int a3,
        __int64 a4,
        struct CDrawingContext *a5,
        const struct D2D_SIZE_F *a6)
{
  struct CDrawListCache *v6; // rbx
  int v9; // edi
  const struct IDeviceTarget *v10; // r14
  struct CTreeData *TreeData; // rax
  unsigned int v12; // ecx
  int Cache; // eax
  unsigned int v14; // esi
  char *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  struct CDrawListCache *v19; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  if ( *((_BYTE *)a5 + 8043) )
  {
    v9 = -2003292412;
    v10 = (const struct IDeviceTarget *)*((_QWORD *)a5 + 4);
    TreeData = CVisual::FindTreeData(a1, *((const struct CVisualTree **)a5 + 991));
    if ( TreeData )
    {
      Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)TreeData + 16), a3, 0, v10, &v19);
      v9 = Cache;
      if ( Cache < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Cache, 0x6FDu, 0LL);
        v6 = v19;
        v14 = v9;
        goto LABEL_11;
      }
      v6 = v19;
    }
    v14 = v9;
    if ( v9 >= 0 )
      goto LABEL_6;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180346338, 3u, v9, 0x1026u, 0LL);
    goto LABEL_7;
  }
LABEL_6:
  v15 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64;
  v16 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v15 + 16LL))(
          v15,
          a5,
          a6,
          v6);
  v14 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180346338, 3u, v16, 0x102Bu, 0LL);
LABEL_7:
  if ( v6 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6);
  return v14;
}
