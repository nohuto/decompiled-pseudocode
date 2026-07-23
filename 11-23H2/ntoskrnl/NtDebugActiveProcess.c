/*
 * XREFs of NtDebugActiveProcess @ 0x1409388C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8234 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409378BC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140938348 (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __cdecl NtDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  _KPROCESS *Process; // rsi
  NTSTATUS v9; // edi
  unsigned __int64 Count; // rdi
  __int16 v11; // ax
  __int16 v12; // ax
  BOOLEAN v13; // al
  struct _KEVENT *v14; // rsi
  int v15; // eax
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v18[14]; // [rsp+50h] [rbp-49h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v17 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    Process = CurrentThread->ApcState.Process;
    if ( Object == Process || Object == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v5, (__int64)CurrentThread->ApcState.Process, (__int64)Object) )
      {
        v9 = -1073740014;
      }
      else
      {
        Count = v7[124].Count;
        if ( (Count & 1) == 0
          || (memset(v18, 0, 0x68uLL),
              v18[1] = Count,
              v18[2] = 1LL,
              v9 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v18),
              v9 >= 0) )
        {
          if ( !Process[1].Affinity.StaticBitmap[30]
            || (v11 = WORD2(Process[2].Affinity.StaticBitmap[20]), v11 != 332) && v11 != 452
            || v7[176].Count && ((v12 = WORD2(v7[301].Ptr), v12 == 332) || v12 == 452) )
          {
            Object = 0LL;
            v9 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
            if ( v9 >= 0 )
            {
              v13 = ExAcquireRundownProtection_0(v7 + 139);
              v14 = (struct _KEVENT *)Object;
              if ( v13 )
              {
                v15 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (__int64)Object, &v17);
                v9 = DbgkpSetProcessDebugObject((ULONG_PTR)v7, v14, v15, v17);
                ExReleaseRundownProtection_0(v7 + 139);
              }
              else
              {
                v9 = -1073741558;
              }
              ObfDereferenceObject(v14);
            }
          }
          else
          {
            v9 = -1073741637;
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    return v9;
  }
  return result;
}
