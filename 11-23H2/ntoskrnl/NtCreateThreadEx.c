/*
 * XREFs of NtCreateThreadEx @ 0x14076F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x14030DA20 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030DB10 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429EA0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14076F400 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140770F2C (PspCreateUserContext.c)
 *     PspCreateThread @ 0x140770F94 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x140771358 (PspBuildCreateProcessContext.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  char *v13; // r14
  ULONG *v14; // rdi
  __int64 v15; // rdx
  NTSTATUS result; // eax
  void *v17; // rbx
  ULONG64 v18; // r12
  unsigned __int64 v19; // rax
  void *v20; // rsp
  PUSER_THREAD_START_ROUTINE v21; // r12
  NTSTATUS Thread; // ebx
  __int64 v23; // rcx
  ULONG v24[20]; // [rsp+50h] [rbp-70h] BYREF
  char v25; // [rsp+A0h] [rbp-20h] BYREF
  SIZE_T v26; // [rsp+A8h] [rbp-18h]
  SIZE_T v27; // [rsp+B0h] [rbp-10h]
  SIZE_T v28; // [rsp+B8h] [rbp-8h]
  ULONG ContextLength; // [rsp+C0h] [rbp+0h] BYREF
  ULONG ContextFlags[2]; // [rsp+C8h] [rbp+8h] BYREF
  ACCESS_MASK v31; // [rsp+D0h] [rbp+10h]
  PUSER_THREAD_START_ROUTINE v32; // [rsp+D8h] [rbp+18h]
  PVOID v33; // [rsp+E0h] [rbp+20h]
  ULONG *v34; // [rsp+E8h] [rbp+28h]
  PCONTEXT_EX ContextEx; // [rsp+F0h] [rbp+30h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+38h]
  POBJECT_ATTRIBUTES v37; // [rsp+100h] [rbp+40h]
  _QWORD v38[64]; // [rsp+110h] [rbp+50h] BYREF

  v37 = ObjectAttributes;
  v31 = DesiredAccess;
  v32 = StartRoutine;
  v33 = Argument;
  *(_WORD *)((char *)v38 + 1) = 0;
  BYTE3(v38[0]) = 0;
  *(_QWORD *)ContextFlags = 0LL;
  ContextEx = 0LL;
  ContextLength = 0;
  v34 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
      v23 = (__int64)ThreadHandle;
    *(_QWORD *)v23 = *(_QWORD *)v23;
  }
  memset(v38, 0, 0x1F8uLL);
  if ( !AttributeList
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v15, 1LL, v38),
        result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               ContextFlags,
               0LL,
               0LL);
    if ( result >= 0 )
    {
      v17 = *(void **)ContextFlags;
      if ( (*(_BYTE *)(*(_QWORD *)ContextFlags + 992LL) & 1) != 0 )
      {
        v21 = v32;
      }
      else
      {
        v13 = &v25;
        v25 = 0;
        v27 = StackSize;
        v28 = MaximumStackSize;
        v26 = ZeroBits;
        v34 = v24;
        memset(v24, 0, 0x48uLL);
        v18 = (*(_DWORD *)(*(_QWORD *)ContextFlags + 2516LL) & 0x4000) != 0 ? 0x800 : 0;
        ContextFlags[0] = (*(_DWORD *)(*(_QWORD *)ContextFlags + 2516LL) & 0x4000) != 0 ? 1048651 : 1048587;
        v36 = qword_140D1F330;
        RtlGetExtendedContextLength2(ContextFlags[0], &ContextLength, (unsigned int)v18);
        v19 = ContextLength + 15LL;
        if ( v19 <= ContextLength )
          v19 = 0xFFFFFFFFFFFFFF0LL;
        v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
        v14 = v24;
        memset(v24, 0, ContextLength);
        RtlInitializeExtendedContext2((PCONTEXT)v24, ContextFlags[0], &ContextEx, v18);
        v21 = v32;
        PspCreateUserContext((unsigned int)v24, 1, v36, (_DWORD)v32, (__int64)v33);
      }
      ObfDereferenceObjectWithTag(v17, 0x72437350u);
      Thread = PspCreateThread(
                 ThreadHandle,
                 v31,
                 v37,
                 ProcessHandle,
                 0LL,
                 v38,
                 v38[2],
                 v14,
                 v34,
                 CreateFlags,
                 v21,
                 v33,
                 v13);
      PspDeleteCreateProcessContext((__int64)v38);
      return Thread;
    }
  }
  return result;
}
