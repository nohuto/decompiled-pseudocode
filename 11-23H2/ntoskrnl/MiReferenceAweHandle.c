/*
 * XREFs of MiReferenceAweHandle @ 0x14064C268
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140A41A28 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x140A425D0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x1402A1134 (MiAweControlArea.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140733390 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MiReferenceAweHandle(HANDLE Handle, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4, _QWORD *a5)
{
  _QWORD *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v10; // rax
  void *v11; // r8
  int v12; // r9d
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = a5;
  v14 = 0LL;
  Object = 0LL;
  *a5 = 0LL;
  if ( Handle == (HANDLE)-1LL )
    return 0;
  if ( ObReferenceObjectByHandleWithTag(Handle, a2, MmSectionObjectType, a3, 0x68506D4Du, &Object, 0LL) < 0 )
  {
    result = ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, a3, 0x68506D4Du, &v14, 0LL);
    if ( result >= 0 )
      *a4 = v14;
  }
  else
  {
    v10 = MiSectionControlArea((__int64)Object);
    if ( (unsigned int)MiAweControlArea(v10) )
    {
      *v6 = v11;
      return v12;
    }
    else
    {
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
      return -1073741816;
    }
  }
  return result;
}
