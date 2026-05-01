/*
 * XREFs of ??1CGITRegistrationList@@QEAA@XZ @ 0x18031E39C
 * Callers:
 *     _ViewPresentationMediator::ViewPresentationMediator_::_1_::dtor$4 @ 0x18021CE12 (_ViewPresentationMediator--ViewPresentationMediator_--_1_--dtor$4.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$13 @ 0x180222113 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$13.c)
 *     _ObservableObjectArray::ObservableObjectArray_::_1_::dtor$1 @ 0x1804A6FB3 (_ObservableObjectArray--ObservableObjectArray_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CGITRegistrationList::~CGITRegistrationList(CGITRegistrationList *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 3) )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 3) );
      v2 = (void *)*((_QWORD *)this + 2);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
