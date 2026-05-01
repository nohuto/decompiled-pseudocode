/*
 * XREFs of ??1StartupTaskActivatedEventArgsImpl@@EEAA@XZ @ 0x18062F4B8
 * Callers:
 *     ??_GStartupTaskActivatedEventArgsImpl@@EEAAPEAXI@Z @ 0x18062F730 (--_GStartupTaskActivatedEventArgsImpl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x1800EB344 (--1CThreadRefTaker@@UEAA@XZ.c)
 */

void __fastcall StartupTaskActivatedEventArgsImpl::~StartupTaskActivatedEventArgsImpl(HSTRING *this)
{
  WindowsDeleteString(this[25]);
  this[25] = 0LL;
  CThreadRefTaker::~CThreadRefTaker((CThreadRefTaker *)(this + 23));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>((CActivatedEventArgsBase *)this);
}
