/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@U?$AggregateType@PEAVSceneComponent@Scenes@Composition@UI@Windows@@PEAUISceneComponent@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUISceneComponent@Scenes@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVSceneComponent@Scenes@Composition@UI@Windows@@PEAUISceneComponent@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUISceneComponent@Scenes@Composition@UI@3@@Z @ 0x180140CB8
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@U?$AggregateType@PEAVSceneComponent@Scenes@Composition@UI@Windows@@PEAUISceneComponent@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUISceneComponent@Scenes@Composition@UI@4@@Z @ 0x1801440D0 (-ReplaceAll@-$IVector_impl@U-$AggregateType@PEAVSceneComponent@Scenes@Composition@UI@Windows@@PE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Scenes::SceneComponent *,Windows::UI::Composition::Scenes::ISceneComponent *>,1>,Windows::UI::Composition::Scenes::ISceneComponent *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // ebp
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
