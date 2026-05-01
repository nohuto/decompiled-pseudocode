/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002931C
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180026B14 (-Get@-$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Inter.c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180026C68 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  unsigned int InterfaceAndReleaseStream; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  IStream *v8; // rcx

  *a3 = 0LL;
  InterfaceAndReleaseStream = -2147467259;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *(_DWORD *)(v6 + 24) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)this);
    else
      *(_QWORD *)this = 0LL;
    *a3 = 0LL;
    if ( *(_DWORD *)(v6 + 24) == 2 )
    {
      if ( *(_QWORD *)(v6 + 32) )
      {
        v7 = *(_QWORD *)(v6 + 32);
        if ( v7 )
          InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v7 + 24LL))(
                                        v7,
                                        a2,
                                        a3);
        else
          InterfaceAndReleaseStream = 0;
      }
      else
      {
        InterfaceAndReleaseStream = -2147024809;
      }
    }
    else
    {
      v8 = *(IStream **)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v8, a2, a3);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return InterfaceAndReleaseStream;
}
