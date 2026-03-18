/*
 * XREFs of NtQuerySection @ 0x1407B9F60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729380 (ProbeForWrite.c)
 *     MmGetSectionInformation @ 0x1407BA090 (MmGetSectionInformation.c)
 */

__int64 __fastcall NtQuerySection(HANDLE Handle, unsigned int a2, volatile void *a3, SIZE_T a4, unsigned __int64 *a5)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  NTSTATUS SectionInformation; // edi
  __int64 v13; // rdx
  PVOID v14; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    if ( a5 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a5;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = 64LL;
    }
    else
    {
      if ( a2 != 2 && a2 != 3 )
        return 3221225475LL;
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 24LL;
  }
  if ( a4 < v11 )
    return 3221225476LL;
  Object = 0LL;
  SectionInformation = ObReferenceObjectByHandle(Handle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( SectionInformation >= 0 )
  {
    v13 = a2;
    v14 = Object;
    SectionInformation = MmGetSectionInformation(Object, v13, a3);
    if ( SectionInformation >= 0 )
    {
      if ( a5 )
        *a5 = v11;
    }
    ObfDereferenceObject(v14);
  }
  return (unsigned int)SectionInformation;
}
