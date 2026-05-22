/*
 * XREFs of ?CopySurface@CBitmapInfo@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA820
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E924C (-CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 */

void __fastcall DirectComposition::CBitmapInfo::CopySurface(
        DirectComposition::CBitmapInfo *this,
        struct ID3D11Resource *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagRECT *a5)
{
  DirectComposition::CAtlasSurface *v5; // rcx

  v5 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
  if ( v5 )
    DirectComposition::CAtlasSurface::CopySurface(v5, a2, a3, a4, a5);
}
