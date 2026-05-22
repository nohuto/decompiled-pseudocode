/*
 * XREFs of ??1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800FEB28
 * Callers:
 *     ??_GCYCbCrBitmapInfo@DirectComposition@@MEAAPEAXI@Z @ 0x1800FEC30 (--_GCYCbCrBitmapInfo@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30 (-UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ.c)
 */

void __fastcall DirectComposition::CYCbCrBitmapInfo::~CYCbCrBitmapInfo(DirectComposition::CYCbCrBitmapInfo *this)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *(_QWORD *)this = &DirectComposition::CYCbCrBitmapInfo::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 2) <= 1 )
      DirectComposition::CCompositorSynchronizedObject::UnUse((DirectComposition::CCompositorSynchronizedObject *)(v2 + 16));
    v3 = *((_QWORD *)this + 2);
    if ( *(DirectComposition::CYCbCrBitmapInfo **)(v3 + 96) == this )
      *(_QWORD *)(v3 + 96) = 0LL;
  }
  DirectComposition::CBitmapInfo::~CBitmapInfo(this);
}
