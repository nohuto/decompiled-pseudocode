/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ @ 0x10003CC4
 * Callers:
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z @ 0x10003CF0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YGEXZ @ 0x10003D70 (-RtlDllShutdownInProgress@details@wil@@YGEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YGJPAX0@Z @ 0x10003DF0 (-RtlDisownModuleHeapAllocation@details@wil@@YGJPAX0@Z.c)
 *     ?FormatNtStatusMsg@details@wil@@YGXJPA_WK@Z @ 0x10003E70 (-FormatNtStatusMsg@details@wil@@YGXJPA_WK@Z.c)
 * Callees:
 *     <none>
 */

HINSTANCE __stdcall wil_details_GetNtDllModuleHandle()
{
  HINSTANCE result; // eax

  result = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = result;
  }
  return result;
}
