/*
 * XREFs of ??1?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18074BD88
 * Callers:
 *     _s_DrawThemeTextPPIAware_::_1_::dtor$1 @ 0x18074CB3D (_s_DrawThemeTextPPIAware_--_1_--dtor$1.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18039E804 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18074C120 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 */

void **__fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>(
        _QWORD *a1)
{
  bool v1; // zf
  void **result; // rax
  signed int LastError; // eax

  v1 = a1[1] == 0LL;
  result = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( !v1 )
  {
    result = (void **)Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose();
    if ( !(_BYTE)result )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
      __debugbreak();
    }
    a1[1] = 0LL;
  }
  return result;
}
