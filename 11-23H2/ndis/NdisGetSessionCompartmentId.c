/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C0006AC0
 * Callers:
 *     NdisGetJobObjectCompartmentId @ 0x1C0006A30 (NdisGetJobObjectCompartmentId.c)
 *     ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0006A80 (-ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisCmGetThreadState @ 0x1C002F760 (ndisCmGetThreadState.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C00B6BF0 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B6EB0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F7C8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int ThreadSessionId; // ebx
  unsigned int v3; // edi
  KIRQL v4; // r8

  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= dword_1C00F7620 )
    return 1LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D80);
  if ( ThreadSessionId < dword_1C00F7620 )
    v3 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
  KeReleaseSpinLock(&qword_1C00F5D80, v4);
  if ( !v3 )
    return 1;
  return v3;
}
