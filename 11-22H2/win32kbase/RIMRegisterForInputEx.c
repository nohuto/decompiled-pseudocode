/*
 * XREFs of RIMRegisterForInputEx @ 0x1C0077B90
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0077120 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 */

__int64 __fastcall RIMRegisterForInputEx(
        unsigned int a1,
        void *a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        HANDLE *a7)
{
  return RIMRegisterForInputWithCallbacks(
           a1,
           0LL,
           0LL,
           0LL,
           (__int64)gpWin32kDriverObject,
           a2,
           a3,
           a4,
           a5,
           a6,
           0LL,
           0,
           a7);
}
