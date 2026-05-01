/*
 * XREFs of ??_EImmersiveShellStressTool@@UEAAPEAXI@Z @ 0x180142678
 * Callers:
 *     ??_EImmersiveShellStressTool@@WBI@EAAPEAXI@Z @ 0x18029A450 (--_EImmersiveShellStressTool@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ImmersiveShellStressTool *__fastcall ImmersiveShellStressTool::`vector deleting destructor'(
        ImmersiveShellStressTool *this,
        volatile int *a2)
{
  char v3; // di
  __int64 v4; // rcx

  v3 = (char)a2;
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
      v4,
      a2);
  *((_DWORD *)this + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((ImmersiveShellStressTool *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( (v3 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
