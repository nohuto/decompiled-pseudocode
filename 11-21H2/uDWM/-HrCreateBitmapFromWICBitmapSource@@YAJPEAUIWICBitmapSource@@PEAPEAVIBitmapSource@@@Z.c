/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180059104
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180058F50 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180059198 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800593DC (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005B9DC (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18005BA3C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rax
  CMILCOMBase *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CWICBitmapWrapper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              248LL);
  if ( v4 && (v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4), (v6 = v5) != 0LL) )
  {
    CMILCOMBase::InternalAddRef(v5);
    v7 = CWICBitmapWrapper::HrInit(v6, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1Au);
      CMILCOMBase::InternalRelease(v6);
    }
    else
    {
      *a2 = (CMILCOMBase *)((char *)v6 + 16);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x17u);
  }
  return v8;
}
