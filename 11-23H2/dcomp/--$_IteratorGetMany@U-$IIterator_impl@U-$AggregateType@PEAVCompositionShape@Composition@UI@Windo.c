/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionShape@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@123@IPEAPEAUICompositionShape@Composition@UI@3@PEAI@Z @ 0x1801A0304
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUICompositionShape@Composition@UI@4@PEAI@Z @ 0x1801A0E80 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICom.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Cleanup@UICompositionShape@Composition@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICompositionShape@Composition@UI@3@I@Z @ 0x1801A02B4 (--$_Cleanup@UICompositionShape@Composition@UI@Windows@@I@Detail@Collections@Foundation@Windows@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionShape *,Windows::UI::Composition::ICompositionShape *>,1>,Windows::UI::Composition::ICompositionShape *>(
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
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::Composition::ICompositionShape,unsigned int>(
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
