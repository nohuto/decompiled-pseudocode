/*
 * XREFs of _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_2_::_unnamed_type_apoResults_::__unnamed_type_apoResults_ @ 0x1800D56D0
 * Callers:
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$1 @ 0x1800D6609 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_2_::_unnamed_type_apoResults_::__unnamed_type_apoResults_(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
