/*
 * XREFs of NtReleaseMutant @ 0x1407AF880
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeReleaseMutantEx @ 0x14040FD6C (KeReleaseMutantEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ExpReleaseCrossVmMutant @ 0x140A0600C (ExpReleaseCrossVmMutant.c)
 */

NTSTATUS __cdecl NtReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  int v7; // ebx
  PVOID v8; // rdi
  int v9; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  LONG v12; // [rsp+70h] [rbp+18h] BYREF
  PVOID v13; // [rsp+78h] [rbp+20h]

  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)PreviousCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v7 = v6;
  v8 = Object;
  v13 = Object;
  LODWORD(Object) = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741788 )
    {
      if ( ExCrossVmMutantObjectType )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(MutantHandle, 0, ExCrossVmMutantObjectType, PreviousMode, &Object, 0LL);
        v8 = Object;
        v13 = Object;
        LODWORD(Object) = v7;
        if ( v7 >= 0 )
        {
          v7 = ExpReleaseCrossVmMutant(v8, &v12);
          LODWORD(Object) = v7;
        }
      }
    }
  }
  else
  {
    v9 = KeReleaseMutantEx((ULONG_PTR)v8, 1u, 0, &v12);
    v7 = v9;
    LODWORD(Object) = v9;
    if ( v9 == 128 || v9 == -1073741754 )
    {
LABEL_18:
      ObfDereferenceObject(v8);
      return v7;
    }
  }
  if ( v7 >= 0 && PreviousCount )
    *PreviousCount = v12;
  if ( v8 )
    goto LABEL_18;
  return v7;
}
