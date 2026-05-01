/*
 * XREFs of ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x180035EBC
 * Callers:
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x18001B0F8 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18001B2F0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18001C644 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

char *__fastcall std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(_QWORD *a1, char *a2, _OWORD *a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  char *v13; // r14
  char *v14; // r15
  char *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_OWORD *)v14 = *a3;
  v15 = (char *)a1[1];
  v16 = (_BYTE *)*a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)&a2[-*a1]);
    v17 = v14 + 16;
    v18 = a1[1] - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = v13;
  a1[1] = &v13[16 * v9];
  a1[2] = &v13[16 * v8];
  return v14;
}
