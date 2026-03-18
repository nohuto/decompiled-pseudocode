/*
 * XREFs of ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x18006AF44
 * Callers:
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800664C0 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180269E48 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x18006AD2C (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x18006AFE4 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ @ 0x1800E62B0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CWICBitmapWrapper::Create(struct IWICBitmapSource *a1, struct ID2DBitmapCacheSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  unsigned int v5; // ecx
  CWICBitmapWrapper *v6; // rbx
  CWICBitmapWrapper *v7; // rax
  CWICBitmapWrapper *v8; // rdi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx

  *a2 = 0LL;
  v4 = (CWICBitmapWrapper *)operator new(0xC8uLL);
  v6 = v4;
  if ( v4 && (memset_0(v4, 0, 0xC8uLL), v7 = CWICBitmapWrapper::CWICBitmapWrapper(v6), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CWICBitmapWrapper *)((char *)v7 + 16));
    v9 = CWICBitmapWrapper::HrInit(v8, a1);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1Bu, 0LL);
      CMILRefCountBaseT<IBitmapSource>::InternalRelease(v8);
    }
    else
    {
      *a2 = (CWICBitmapWrapper *)((char *)v8 + 136);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x19u, 0LL);
  }
  return v11;
}
