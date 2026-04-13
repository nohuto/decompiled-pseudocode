/*
 * XREFs of __tailMerge_rpcrt4_dll @ 0x180022F0E
 * Callers:
 *     __imp_load_UuidCreate @ 0x180022F02 (__imp_load_UuidCreate.c)
 *     __imp_load_NdrCStdStubBuffer2_Release @ 0x180023018 (__imp_load_NdrCStdStubBuffer2_Release.c)
 *     __imp_load_NdrDllGetClassObject @ 0x18002302A (__imp_load_NdrDllGetClassObject.c)
 *     __imp_load_NdrDllCanUnloadNow @ 0x18002303C (__imp_load_NdrDllCanUnloadNow.c)
 *     __imp_load_NdrCStdStubBuffer_Release @ 0x18002304E (__imp_load_NdrCStdStubBuffer_Release.c)
 *     __imp_load_CStdStubBuffer_Invoke @ 0x180023060 (__imp_load_CStdStubBuffer_Invoke.c)
 *     __imp_load_NdrStubForwardingFunction @ 0x18002308C (__imp_load_NdrStubForwardingFunction.c)
 *     __imp_load_IUnknown_AddRef_Proxy @ 0x1800230EC (__imp_load_IUnknown_AddRef_Proxy.c)
 *     __imp_load_CStdStubBuffer_DebugServerQueryInterface @ 0x18002310C (__imp_load_CStdStubBuffer_DebugServerQueryInterface.c)
 *     __imp_load_NdrOleFree @ 0x18002317C (__imp_load_NdrOleFree.c)
 *     __imp_load_CStdStubBuffer_AddRef @ 0x1800231AC (__imp_load_CStdStubBuffer_AddRef.c)
 *     __imp_load_IUnknown_Release_Proxy @ 0x1800231CC (__imp_load_IUnknown_Release_Proxy.c)
 *     __imp_load_CStdStubBuffer_CountRefs @ 0x18002323C (__imp_load_CStdStubBuffer_CountRefs.c)
 *     __imp_load_CStdStubBuffer_QueryInterface @ 0x18002327C (__imp_load_CStdStubBuffer_QueryInterface.c)
 *     __imp_load_NdrOleAllocate @ 0x18002329C (__imp_load_NdrOleAllocate.c)
 *     __imp_load_CStdStubBuffer_DebugServerRelease @ 0x1800232BC (__imp_load_CStdStubBuffer_DebugServerRelease.c)
 *     __imp_load_CStdStubBuffer_Disconnect @ 0x1800232EC (__imp_load_CStdStubBuffer_Disconnect.c)
 *     __imp_load_IUnknown_QueryInterface_Proxy @ 0x18002331C (__imp_load_IUnknown_QueryInterface_Proxy.c)
 *     __imp_load_NdrStubCall3 @ 0x18002333C (__imp_load_NdrStubCall3.c)
 *     __imp_load_CStdStubBuffer_IsIIDSupported @ 0x18002335C (__imp_load_CStdStubBuffer_IsIIDSupported.c)
 *     __imp_load_CStdStubBuffer_Connect @ 0x18002338C (__imp_load_CStdStubBuffer_Connect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800E7D40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rpcrt4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_rpcrt4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
