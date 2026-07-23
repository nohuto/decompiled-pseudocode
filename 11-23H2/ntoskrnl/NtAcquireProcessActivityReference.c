/*
 * XREFs of NtAcquireProcessActivityReference @ 0x140800EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B071C (ExCpuSetResourceManagerAccessCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateActivityReference @ 0x140800FD4 (PspCreateActivityReference.c)
 */

__int64 __fastcall NtAcquireProcessActivityReference(__int64 *a1, ULONG_PTR a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  __int64 result; // rax
  PVOID v8; // rbx
  int ActivityReference; // edi
  __int64 v10[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( a3 )
    return 3221225713LL;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( (int)result >= 0 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x63417350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v8 = Object;
      ActivityReference = PspCreateActivityReference(Object, (__int64)v10);
      if ( ActivityReference >= 0 )
        *a1 = v10[0];
      ObfDereferenceObjectWithTag(v8, 0x63417350u);
      return (unsigned int)ActivityReference;
    }
  }
  return result;
}
