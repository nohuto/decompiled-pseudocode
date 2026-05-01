/*
 * XREFs of ??$emplace_front@Uguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?A_T$$QEAUguid@winrt@@@Z @ 0x180034288
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18003369C (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180035A8C (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<winrt::guid>::emplace_front<winrt::guid>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::guid>::_Growmap();
  v4 = a1[2];
  v5 = a1[3] & (v4 - 1);
  a1[3] = v5;
  if ( !v5 )
    v5 = v4;
  v6 = v5 - 1;
  v7 = v6 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v7) )
    *(_QWORD *)(a1[1] + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
  *(_OWORD *)*(_QWORD *)(a1[1] + 8 * v7) = *a2;
  a1[3] = v6;
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * (v6 & (a1[2] - 1LL)));
}
