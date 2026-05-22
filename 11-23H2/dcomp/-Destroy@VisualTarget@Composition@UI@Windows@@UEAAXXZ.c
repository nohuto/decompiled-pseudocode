/*
 * XREFs of ?Destroy@VisualTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800628F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::VisualTarget::Destroy(Windows::UI::Composition::VisualTarget *this)
{
  char *v1; // rsi
  char *v3; // rdi
  __int64 v4; // rdi
  Windows::UI::Composition::VisualTarget **v5; // r8
  Windows::UI::Composition::VisualTarget **v6; // rcx
  Windows::UI::Composition::VisualTarget **v7; // rdx

  v1 = (char *)this + 176;
  v3 = (char *)this + 24;
  if ( *((_QWORD *)this + 22) )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)v3 + 456LL),
      *((_DWORD *)this + 32),
      52,
      0);
    DirectComposition::CDevice::TryFlushKernelCommands(*(DirectComposition::CDevice **)(*(_QWORD *)v3 + 456LL), 0);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v1, 0LL);
  }
  v4 = *(_QWORD *)v3;
  v5 = *(Windows::UI::Composition::VisualTarget ***)(v4 + 904);
  v6 = *(Windows::UI::Composition::VisualTarget ***)(v4 + 896);
  if ( v6 == v5 )
LABEL_6:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  while ( 1 )
  {
    v7 = v6 + 1;
    if ( *v6 == this )
      break;
    ++v6;
    if ( v7 == v5 )
      goto LABEL_6;
  }
  memmove_0(v6, v7, (char *)v5 - (char *)v7);
  *(_QWORD *)(v4 + 904) -= 8LL;
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
