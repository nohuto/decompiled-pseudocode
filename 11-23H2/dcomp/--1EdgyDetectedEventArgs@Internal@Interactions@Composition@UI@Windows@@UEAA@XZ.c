/*
 * XREFs of ??1EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E60
 * Callers:
 *     ??_GEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180130EE0 (--_GEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::~EdgyDetectedEventArgs(
        HSTRING *this)
{
  volatile int *v2; // rdx

  WindowsDeleteString(this[9]);
  this[9] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>(
    (__int64)this,
    v2);
}
