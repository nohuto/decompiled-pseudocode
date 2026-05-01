/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent__ @ 0x18004D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?InternalClose@?$HandleT@UEventTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1800431B0 (-InternalClose@-$HandleT@UEventTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microso.c)
 */

char dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent__()
{
  void **v0; // rax
  signed int LastError; // eax
  unsigned __int64 v2; // rcx

  v0 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::`vftable';
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::`vftable';
  if ( hHandle )
  {
    LOBYTE(v0) = Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::InternalClose((__int64)&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent);
    if ( !(_BYTE)v0 )
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v2);
      JUMPOUT(0x18004D919LL);
    }
    hHandle = 0LL;
  }
  return (char)v0;
}
