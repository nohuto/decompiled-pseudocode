/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18039634C
 * Callers:
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x1802BBFA6 (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x1802BD62C (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x1803B7F9F (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<void *>::~CAutoHandle<void *>(void **a1)
{
  char *v1; // rdx
  int result; // eax

  v1 = (char *)*a1;
  *a1 = 0LL;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
