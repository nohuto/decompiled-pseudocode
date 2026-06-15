/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180030200
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EB90 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003035C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x180030188 (--1CPickerHostContext@@QEAA@XZ.c)
 */

__int64 **__fastcall CPickerHostContext::`scalar deleting destructor'(__int64 **this)
{
  CPickerHostContext::~CPickerHostContext(this);
  operator delete(this);
  return this;
}
