/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C0006930
 * Callers:
 *     NdisGetJobObjectCompartmentId @ 0x1C00068A0 (NdisGetJobObjectCompartmentId.c)
 *     ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00068F0 (-ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisCmGetThreadState @ 0x1C002F5D0 (ndisCmGetThreadState.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C00B6BD0 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B6E90 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
  if ( ThreadSessionId < dword_1C00F7620 )
    v3 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
  KeReleaseSpinLock(&qword_1C00F5D78, v4);
  if ( !v3 )
    return 1;
  return v3;
}
