/*
 * XREFs of ?RegisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1804AAF50
 * Callers:
 *     ?RegisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x180208210 (-RegisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJPEAUIObservableObjectArrayChange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SwitchItemFilteredCollection::RegisterBeginEndListener(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  return ObservableObjectArray::RegisterBeginEndListener(this, a2, a3);
}
