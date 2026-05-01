/*
 * XREFs of ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@PEAUIGameListEntry@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@4@PEAI@Z @ 0x1800123E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Cleanup@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@I@Z @ 0x180012384 (--$_Cleanup@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@I@Detail@Collections@Founda.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
  {
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,unsigned int>(
      a3,
      *a4);
  }
  else
  {
    while ( v11 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
        if ( v9 < 0 )
          goto LABEL_8;
        v8 = (unsigned int)(v8 + 1);
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
        if ( v9 >= 0 )
          continue;
      }
      if ( v9 < 0 )
        goto LABEL_8;
      break;
    }
    *a4 = v8;
  }
  return (unsigned int)v9;
}
