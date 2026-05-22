/*
 * XREFs of ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180153290
 * Callers:
 *     ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180060474 (-CreateGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4.c)
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180061060 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801531B0 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall GestureServices::GetProcessorTypeString(_QWORD *a1, int a2)
{
  int v2; // edx
  __int64 v3; // rcx

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return L"Unknown";
      v3 = a1[10];
    }
    else
    {
      v3 = a1[9];
    }
  }
  else
  {
    v3 = a1[8];
  }
  if ( v3 )
    return (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  return L"Unknown";
}
