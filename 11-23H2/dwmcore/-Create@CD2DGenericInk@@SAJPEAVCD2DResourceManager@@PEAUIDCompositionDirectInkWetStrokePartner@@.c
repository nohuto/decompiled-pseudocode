/*
 * XREFs of ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18029C8F8
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x180286160 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800E56B0 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     ??0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18029C7F8 (--0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z.c)
 */

__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        CD2DResourceManager ***a3)
{
  CD2DGenericInk *v6; // rax
  __int64 v7; // rcx
  CD2DGenericInk *v8; // rax
  CD2DResourceManager **v9; // rbx
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CD2DGenericInk *)operator new(0x80uLL);
  if ( v6 && (v8 = CD2DGenericInk::CD2DGenericInk(v6, a1, a2), (v9 = (CD2DResourceManager **)v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CD2DGenericInk *)((char *)v8 + 8));
    CD2DResourceManager::AddResource(v9[3], (struct CD2DResource *)v9);
    v10 = 0;
    *a3 = v9;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v10;
}
