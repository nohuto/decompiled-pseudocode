/*
 * XREFs of ?get_GameModeConfiguration@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x180030AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003DF20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18003DF20.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_GameModeConfiguration(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v5; // rax
  __int64 v6; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v5 = 0LL;
  v8 = 0LL;
  v6 = *((_QWORD *)this + 32);
  if ( v6 && *((_QWORD *)this + 33) )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
      v6,
      &GUID_78e591af_b142_4ef0_8830_55bc2be4f5ea,
      &v8);
    v5 = v8;
  }
  v8 = 0LL;
  *a2 = v5;
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
