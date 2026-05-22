/*
 * XREFs of DCompositionCreateCrossDeviceVisual @ 0x1800FF5D0
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionCreateCrossDeviceVisualHandle @ 0x180016170 (DCompositionCreateCrossDeviceVisualHandle.c)
 *     DCompositionCreateTargetForHandle @ 0x180102E40 (DCompositionCreateTargetForHandle.c)
 */

__int64 __fastcall DCompositionCreateCrossDeviceVisual(struct IUnknown *a1, _QWORD *a2, _QWORD *a3)
{
  int TargetForHandle; // ebx
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  hObject = (HANDLE)-1LL;
  if ( a2 && a3 )
  {
    *a3 = 0LL;
    TargetForHandle = DCompositionCreateCrossDeviceVisualHandle(a1, a2, &hObject);
    if ( TargetForHandle >= 0 )
      TargetForHandle = DCompositionCreateTargetForHandle(hObject, a3);
    if ( hObject != (HANDLE)-1LL )
      CloseHandle(hObject);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)TargetForHandle;
}
