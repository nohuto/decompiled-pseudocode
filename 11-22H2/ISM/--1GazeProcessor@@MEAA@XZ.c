/*
 * XREFs of ??1GazeProcessor@@MEAA@XZ @ 0x1801E6870
 * Callers:
 *     ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801E6A00 (--_GGazeProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GazeProcessor::~GazeProcessor(GazeProcessor *this)
{
  __int64 *v2; // rbp
  __int64 v3; // rcx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  _QWORD **v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 344);
  v3 = *((_QWORD *)this + 43);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v9 = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7)
                                                                                          + 64LL))(*((_QWORD *)this + 7));
  v5 = **v4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  if ( v5(v4, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v9) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 32LL))(v9, (char *)this + 16);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  v6 = (_QWORD **)*((_QWORD *)this + 44);
  *v6[1] = 0LL;
  v7 = *v6;
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      std::_Deallocate<16,0>(v7, 0x18uLL);
      v7 = v8;
    }
    while ( v8 );
  }
  std::_Deallocate<16,0>(*((void **)this + 44), 0x18uLL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 41);
  NonPointerProcessor::~NonPointerProcessor((GazeProcessor *)((char *)this + 24));
}
