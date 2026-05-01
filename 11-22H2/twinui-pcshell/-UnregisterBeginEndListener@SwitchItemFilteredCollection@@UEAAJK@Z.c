/*
 * XREFs of ?UnregisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJK@Z @ 0x1802E12C0
 * Callers:
 *     ?UnregisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJK@Z @ 0x1802A3EE0 (-UnregisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall SwitchItemFilteredCollection::UnregisterBeginEndListener(
        SwitchItemFilteredCollection *this,
        unsigned int a2)
{
  return ObservableObjectArray::UnregisterBeginEndListener(this, a2);
}
