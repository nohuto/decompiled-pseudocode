/*
 * XREFs of ??1Item@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800C7358
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@EEAAXXZ @ 0x1800CC7F0 (-_Destroy@-$_Ref_count_obj@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::Item::~Item(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
  WindowsDeleteString(*this);
  *this = 0LL;
}
