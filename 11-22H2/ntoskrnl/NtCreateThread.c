/*
 * XREFs of NtCreateThread @ 0x1409ADD90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x14030D55C (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     PspCreateThread @ 0x1407712B4 (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB InitialTeb,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  char PreviousMode; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  _INITIAL_TEB::$51A6825BF626353FB0168B5A96FF6713 OldInitialTeb; // xmm0
  _KPROCESS *Process; // rcx
  __int16 v21; // ax
  PCONTEXT v23; // [rsp+78h] [rbp-5B0h]
  _OWORD v24[5]; // [rsp+90h] [rbp-598h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v26; // [rsp+E8h] [rbp-540h]
  char v27; // [rsp+F0h] [rbp-538h] BYREF
  __int128 v28; // [rsp+F1h] [rbp-537h]
  __int64 v29; // [rsp+101h] [rbp-527h]
  _BYTE v30[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v31; // [rsp+1A8h] [rbp-480h]

  v12 = ThreadContext;
  memset(v24, 0, 0x48uLL);
  v28 = 0LL;
  v29 = 0LL;
  if ( !ThreadContext )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
      v15 = (__int64)ThreadHandle;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        goto LABEL_16;
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ClientId < 0x7FFFFFFF0000LL )
        v16 = (__int64)ClientId;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) == 0 )
    {
      v17 = v30;
      v18 = 9LL;
      do
      {
        *v17 = *(_OWORD *)&v12->P1Home;
        v17[1] = *(_OWORD *)&v12->P3Home;
        v17[2] = *(_OWORD *)&v12->P5Home;
        v17[3] = *(_OWORD *)&v12->ContextFlags;
        v17[4] = *(_OWORD *)&v12->SegGs;
        v17[5] = *(_OWORD *)&v12->Dr1;
        v17[6] = *(_OWORD *)&v12->Dr3;
        v17 += 8;
        *(v17 - 1) = *(_OWORD *)&v12->Dr7;
        v12 = (PCONTEXT)((char *)v12 + 128);
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)&v12->P1Home;
      v17[1] = *(_OWORD *)&v12->P3Home;
      v17[2] = *(_OWORD *)&v12->P5Home;
      v17[3] = *(_OWORD *)&v12->ContextFlags;
      v17[4] = *(_OWORD *)&v12->SegGs;
      v23 = (PCONTEXT)v30;
      v31 = (v31 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( ((unsigned __int8)InitialTeb & 3) == 0 )
      {
        v12 = (PCONTEXT)v30;
        goto LABEL_18;
      }
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
  v23 = ThreadContext;
LABEL_18:
  result = RtlpSanitizeContextFlags(&v12->ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    OldInitialTeb = InitialTeb->OldInitialTeb;
    v24[0] = InitialTeb->OldInitialTeb;
    if ( v24[0] == 0LL )
    {
      v24[0] = OldInitialTeb;
      v24[1] = *(_OWORD *)&InitialTeb->StackBase;
      *(_QWORD *)&v24[2] = InitialTeb->StackAllocationBase;
      if ( *(_QWORD *)&v24[2] )
      {
        v26 = KeGetCurrentThread();
        Process = v26->ApcState.Process;
        if ( Process[1].Affinity.StaticBitmap[30] )
        {
          v21 = WORD2(Process[2].Affinity.StaticBitmap[20]);
          if ( v21 == 332 || v21 == 452 )
          {
            *((_QWORD *)&v24[2] + 1) = *(_QWORD *)&v24[1];
            v24[3] = *(_OWORD *)((char *)&v24[1] + 8);
            memset(&v24[1], 0, 24);
          }
        }
        v27 = 1;
        return PspCreateThread(
                 (__int64)ThreadHandle,
                 DesiredAccess,
                 (ULONG_PTR)ObjectAttributes,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 (__int64)v23,
                 (__int64)v24,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 (__int64)&v27);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
