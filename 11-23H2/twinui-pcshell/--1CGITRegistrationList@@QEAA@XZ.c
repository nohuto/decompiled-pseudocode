/*
 * XREFs of ??1CGITRegistrationList@@QEAA@XZ @ 0x1803D4930
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$13 @ 0x1802BD0C3 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$13.c)
 *     _ViewPresentationMediator::ViewPresentationMediator_::_1_::dtor$4 @ 0x1802BD3B9 (_ViewPresentationMediator--ViewPresentationMediator_--_1_--dtor$4.c)
 *     _ObservableObjectArray::ObservableObjectArray_::_1_::dtor$1 @ 0x1805646E7 (_ObservableObjectArray--ObservableObjectArray_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CGITRegistrationList::~CGITRegistrationList(CGITRegistrationList *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
