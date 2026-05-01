/*
 * XREFs of ??0ViewHostItemEventArgsBase@@QEAA@XZ @ 0x1804A9C28
 * Callers:
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1804A9B9C (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x1804A9C70 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewHostItemEventArgsBase *__fastcall ViewHostItemEventArgsBase::ViewHostItemEventArgsBase(
        ViewHostItemEventArgsBase *this)
{
  Microsoft::WRL::FtmBase::FtmBase((ViewHostItemEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewHostItemEventArgsBase::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &WindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
