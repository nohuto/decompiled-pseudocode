/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14071C5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteBlob @ 0x14071C18C (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x14071CA38 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E9AC (AlpcpDereferenceBlobEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v7; // rcx
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  int SecurityContext; // edi
  PVOID v13; // r14
  ULONG_PTR v14; // rbx
  unsigned __int64 v16; // xmm1_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+40h] [rbp-38h]
  __int128 v20; // [rsp+48h] [rbp-30h]
  ALPC_HANDLE ContextHandle; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0LL;
  LODWORD(ContextHandle) = 0;
  v18 = 0LL;
  v19 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SecurityAttribute & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)SecurityAttribute < 0x7FFFFFFF0000LL )
        v7 = (__int64)SecurityAttribute;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *(__m128i *)&SecurityAttribute->Flags;
      ContextHandle = SecurityAttribute->ContextHandle;
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v18 = *(_QWORD *)v11;
        v19 = *(_DWORD *)(v11 + 8);
      }
    }
    else
    {
      v16 = _mm_srli_si128(*(__m128i *)&SecurityAttribute->Flags, 8).m128i_u64[0];
      v10 = v16;
      if ( v16 )
      {
        v18 = *(_QWORD *)v16;
        v19 = *(_DWORD *)(v16 + 8);
      }
    }
    Object = 0LL;
    SecurityContext = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      if ( !v10 )
      {
        v18 = *(_QWORD *)((char *)Object + 260);
        v19 = *((_DWORD *)Object + 67);
      }
      v13 = Object;
      SecurityContext = AlpcpCreateSecurityContext(Object, KeGetCurrentThread(), (__int64)&BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v14 = BugCheckParameter2;
        SecurityAttribute->ContextHandle = *(ALPC_HANDLE *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v14);
      }
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return SecurityContext;
}
