/*
 * XREFs of sub_1409272A0 @ 0x1409272A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall sub_1409272A0(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  NTSTATUS v6; // edi
  void *v7; // rbx
  __int64 v8; // rcx

  v6 = -1073740973;
  if ( *(_QWORD *)(a1 + 1400) )
  {
    ExAcquireFastMutex(&stru_140C48CC0);
    v7 = *(void **)(a1 + 1400);
    if ( v7 )
      ObfReferenceObject(*(PVOID *)(a1 + 1400));
    KeReleaseGuardedMutex(&stru_140C48CC0);
    if ( v7 )
    {
      LOBYTE(v8) = a2;
      if ( sub_14066CFE4(v8, *((_QWORD *)KeGetCurrentThread() + 23), a1) )
      {
        v6 = -1073740014;
LABEL_8:
        ObfDereferenceObject(v7);
        return (unsigned int)v6;
      }
      v6 = ObOpenObjectByPointer(v7, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, qword_140D05120, a2, a3);
      if ( v6 < 0 )
        goto LABEL_8;
    }
  }
  return (unsigned int)v6;
}
