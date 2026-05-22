/*
 * XREFs of ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x1801581B0
 * Callers:
 *     ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180158220 (--_GCursorSuppressionProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18003234C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CursorSuppressionProcessor::~CursorSuppressionProcessor(CursorSuppressionProcessor *this)
{
  volatile int *v2; // rdx

  CursorSuppressionProcessor::s_processor = 0LL;
  *(_QWORD *)this = &CursorSuppressionProcessor::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CursorSuppressionProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IContextualProcessor,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CursorProcessor::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CursorProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease((Microsoft::Bamo::BaseBamoConnection **)this + 10);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IContextualProcessor,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IContextualProcessor,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
