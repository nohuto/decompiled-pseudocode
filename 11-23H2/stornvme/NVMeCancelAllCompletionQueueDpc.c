/*
 * XREFs of NVMeCancelAllCompletionQueueDpc @ 0x1C000C3D4
 * Callers:
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C9C0 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCancelAllCompletionQueueDpc(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned int v7; // eax

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 880);
  for ( i = 0; v3 && i < *(unsigned __int16 *)(a1 + 338); ++i )
  {
    v5 = v3 + 392LL * i;
    if ( *(_BYTE *)(v5 + 248) )
      v6 = v5 + 264;
    else
      v6 = v5 + 24;
    v7 = StorPortExtendedFunction(95LL, a1, v6);
    v3 = *(_QWORD *)(a1 + 880);
    v1 = v7;
  }
  return v1;
}
