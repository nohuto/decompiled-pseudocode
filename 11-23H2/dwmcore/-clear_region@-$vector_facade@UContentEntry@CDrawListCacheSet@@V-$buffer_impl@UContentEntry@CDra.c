/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002C560
 * Callers:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002AA64 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?erase@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@2@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@2@@Z @ 0x18002B250 (-erase@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x18002D200 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004A410 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180080010 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180084778 (--1CTreeData@@UEAA@XZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x18002A114 (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rdi
  _QWORD *i; // rbx
  __int64 v13; // rcx
  __int64 v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2;
  v7 = a3 + a2;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v5) >> 3);
  if ( v7 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_16;
  }
  result = (a1[1] - v5) >> 3;
  v3 = (_QWORD *)(v5 + 8 * result);
  if ( v7 != v9 )
  {
    if ( !v6 )
    {
LABEL_13:
      v14[0] = v5;
      v14[1] = v9;
      v14[2] = v6;
      result = std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
                 (__int64)v15,
                 v5 + 24 * v7,
                 v3,
                 v14);
      goto LABEL_3;
    }
    if ( !v5 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
    if ( v6 >= 0 )
    {
      if ( v9 >= v6 )
        goto LABEL_13;
      goto LABEL_14;
    }
LABEL_16:
    if ( !v6 )
      goto LABEL_13;
    goto LABEL_14;
  }
LABEL_3:
  v11 = 24 * a3;
  for ( i = &v3[-3 * a3]; i != v3; i += 3 )
  {
    v13 = i[2];
    if ( v13 )
      result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v13);
  }
  a1[1] -= v11;
  return result;
}
