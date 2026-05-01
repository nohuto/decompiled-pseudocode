/*
 * XREFs of ??1?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180022A1C
 * Callers:
 *     ??1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x1800221BC (--1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     __lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()_::_1_::dtor$9 @ 0x18004DA66 (__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator()_--_1_--dtor$9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013C20.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::~vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        __int64 a1)
{
  volatile signed __int64 **v1; // rbx
  volatile signed __int64 **v3; // rsi
  volatile signed __int64 *v4; // rcx
  volatile signed __int64 **v5; // rcx
  unsigned __int64 v6; // rdx
  volatile signed __int64 **v7; // r8
  char *v8; // rcx

  v1 = *(volatile signed __int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(volatile signed __int64 ***)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        *v1 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v4);
      }
      ++v1;
    }
    v5 = *(volatile signed __int64 ***)a1;
    v6 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = (volatile signed __int64 **)*(v5 - 1);
      v6 += 39LL;
      v8 = (char *)((char *)v5 - (char *)v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v6);
        __debugbreak();
        JUMPOUT(0x180022AB6LL);
      }
      v5 = v7;
    }
    operator delete(v5, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
