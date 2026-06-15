/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800303F0
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EBE0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003054C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x180030378 (--1CPickerHostContext@@QEAA@XZ.c)
 */

__int64 **__fastcall CPickerHostContext::`scalar deleting destructor'(__int64 **this)
{
  CPickerHostContext::~CPickerHostContext(this);
  operator delete(this);
  return this;
}
