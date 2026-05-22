/*
 * XREFs of ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18002567C
 * Callers:
 *     ?StartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJI_N_K1IW4GestureProcessorType@@@Z @ 0x1800736E4 (-StartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJI_N_K1IW4GestureProcessorType@@@.c)
 *     ?RegisterShellHandwritingHostClient@BamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180075F40 (-RegisterShellHandwritingHostClient@BamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@QEAAJI.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(
        Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  return (struct Microsoft::BamoImpl::BamoStubImpl *)i;
}
