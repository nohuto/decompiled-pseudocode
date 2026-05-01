/*
 * XREFs of ??_EGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800222E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013B20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release((volatile signed __int32 *)(2 * v5));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
