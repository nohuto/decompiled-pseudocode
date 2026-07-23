/*
 * XREFs of NtOpenThreadTokenEx @ 0x140725A50
 * Callers:
 *     NtOpenThreadToken @ 0x140725A30 (NtOpenThreadToken.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407259B0 @ 0x1407259B0 (sub_1407259B0.c)
 *     PsDisableImpersonation @ 0x140725F50 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140726090 (PsRestoreImpersonation.c)
 *     sub_1407261F4 @ 0x1407261F4 (sub_1407261F4.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407B468C @ 0x1407B468C (sub_1407B468C.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  void *v6; // r12
  KPROCESSOR_MODE v7; // r15
  int v8; // esi
  ULONG v9; // esi
  PHANDLE v10; // r14
  __int64 v11; // rcx
  KPROCESSOR_MODE v12; // r9
  NTSTATUS result; // eax
  _DWORD *v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *v16; // r13
  _DWORD *v17; // rbx
  char v18; // di
  int v19; // r13d
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  NTSTATUS v22; // r15d
  PACL v23; // rbx
  __int64 v24; // rdx
  bool v25; // [rsp+40h] [rbp-D8h]
  bool v26; // [rsp+41h] [rbp-D7h]
  BOOLEAN v27; // [rsp+42h] [rbp-D6h]
  char v28; // [rsp+44h] [rbp-D4h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v30; // [rsp+50h] [rbp-C8h] BYREF
  int v31; // [rsp+58h] [rbp-C0h]
  PACL Dacl; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 *v33; // [rsp+68h] [rbp-B0h]
  HANDLE Handle; // [rsp+70h] [rbp-A8h] BYREF
  struct _KTHREAD *v35; // [rsp+78h] [rbp-A0h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+80h] [rbp-98h] BYREF
  __int128 v37; // [rsp+90h] [rbp-88h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-78h]
  _BYTE *v39; // [rsp+B0h] [rbp-68h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  _BYTE SecurityDescriptor[32]; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-38h]

  v6 = 0LL;
  v30 = 0LL;
  v28 = 0;
  v26 = 0;
  v31 = 0;
  ImpersonationState = 0LL;
  v27 = 0;
  Handle = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  LODWORD(v40) = 0;
  Dacl = 0LL;
  v33 = 0LL;
  v25 = 0;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v8 = 73714;
  if ( v7 )
    v8 = 7666;
  v9 = HandleAttributes & v8;
  if ( v7 )
  {
    v10 = TokenHandle;
    v11 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  else
  {
    v10 = TokenHandle;
  }
  v12 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x800u, (POBJECT_TYPE)PsThreadType, v12, &Object, 0LL);
  if ( result >= 0 )
  {
    v14 = Object;
    if ( (*((_DWORD *)Object + 344) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    v35 = CurrentThread;
    --*((_WORD *)CurrentThread + 242);
    v16 = (signed __int64 *)((char *)Object + 1360);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1360, 0LL);
    if ( (v14[344] & 8) != 0 )
    {
      v17 = Object;
      v6 = (void *)(*((_QWORD *)Object + 159) & 0xFFFFFFFFFFFFFFF8uLL);
      v18 = BYTE1(v14[344]) & 1;
      v28 = v18;
      ObfReferenceObjectWithTag(v6, 0x74726853u);
      v31 = v17[318] & 3;
      v26 = (v17[318] & 4) != 0;
      CurrentThread = v35;
    }
    else
    {
      v18 = 0;
    }
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    sub_1402AFC00((ULONG_PTR)v16);
    sub_1402AC800((__int64)CurrentThread);
    if ( v6 )
    {
      v19 = v31;
      if ( v31 )
      {
        if ( OpenAsSelf )
          v27 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
        if ( v18 )
        {
          if ( OpenAsSelf )
          {
            if ( ImpersonationState.Token )
            {
              v33 = (unsigned __int8 *)*((_QWORD *)ImpersonationState.Token + 138);
              v25 = 1;
            }
          }
          else
          {
            v24 = *((_QWORD *)Object + 193);
            if ( v24 )
              v33 = *(unsigned __int8 **)(v24 + 1104);
            v25 = v24 != 0;
          }
          v20 = *((_QWORD *)Object + 68);
          v21 = sub_140347920(v20, 0x746C6644u);
          v22 = sub_1407B468C(v6, v21, &Dacl);
          sub_1402F89B0((signed __int64 *)(v20 + 1208), v21, 0x746C6644u);
          v23 = Dacl;
          if ( v22 >= 0 )
          {
            if ( Dacl )
            {
              SecurityDescriptor[0] = 1;
              RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
            }
            LODWORD(v37) = 48;
            *((_QWORD *)&v37 + 1) = 0LL;
            DWORD2(v38) = v9;
            *(_QWORD *)&v38 = 0LL;
            if ( v23 )
              v39 = SecurityDescriptor;
            else
              v39 = 0LL;
            v40 = 0LL;
            v22 = sub_1407CDED0((_DWORD)v6, (unsigned int)&v37, v26, 2, v19, 0, 0, (__int64)&v30);
            if ( v22 >= 0 )
            {
              if ( v25 )
                v22 = sub_1407259B0((__int64)v30, v33);
              if ( v22 >= 0 )
              {
                ObfReferenceObject(v30);
                v22 = sub_140729C30(v30, 0LL, 0, 0LL, (__int64)&Handle);
              }
            }
          }
          v18 = v28;
        }
        else
        {
          v22 = ObOpenObjectByPointer(v6, v9, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, v7, &Handle);
          v23 = Dacl;
        }
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
        if ( v27 )
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
        if ( v22 >= 0 && v18 )
          sub_1407261F4(Object, v6, v30);
        ObfDereferenceObjectWithTag(v6, 0x74726853u);
        if ( v30 )
          ObfDereferenceObject(v30);
        ObfDereferenceObject(Object);
        if ( v22 >= 0 )
          *v10 = Handle;
        return v22;
      }
      else
      {
        ObfDereferenceObjectWithTag(v6, 0x74726853u);
        ObfDereferenceObject(Object);
        return -1073741658;
      }
    }
    else
    {
LABEL_9:
      ObfDereferenceObject(Object);
      return -1073741700;
    }
  }
  return result;
}
