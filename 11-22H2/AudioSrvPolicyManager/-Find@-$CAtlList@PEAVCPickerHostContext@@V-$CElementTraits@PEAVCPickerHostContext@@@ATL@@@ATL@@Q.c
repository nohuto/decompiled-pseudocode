/*
 * XREFs of ?Find@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPickerHostContext@@PEAU3@@Z @ 0x180016180
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003054C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::Find(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *i; // rcx

  for ( i = (_QWORD *)PickerHostContextManager::s_PickerHostContextList; i; i = (_QWORD *)*i )
  {
    if ( i[2] == *a2 )
      return i;
  }
  return 0LL;
}
