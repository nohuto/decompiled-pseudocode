/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C0176C30
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  size_t v6; // r8
  __int64 v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // sf
  ULONG64 v15; // rcx
  int v16; // r13d
  char *v17; // r14
  int v18; // ebx
  unsigned int v19; // eax
  size_t v20; // r15
  PVOID v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 Pool2; // rdi
  char v25; // si
  unsigned int v26; // edi
  char *v27; // r15
  int i; // esi
  const void *v29; // rdx
  __int64 v30; // rbx
  int v31; // eax
  unsigned int v32; // [rsp+30h] [rbp-178h]
  __int128 v33; // [rsp+38h] [rbp-170h]
  ULONG64 v34; // [rsp+48h] [rbp-160h]
  _DWORD v35[6]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v36; // [rsp+78h] [rbp-130h]
  int v37; // [rsp+80h] [rbp-128h]
  int v38; // [rsp+84h] [rbp-124h]
  int v39; // [rsp+88h] [rbp-120h]
  char *v40; // [rsp+90h] [rbp-118h]
  char *v41; // [rsp+98h] [rbp-110h]
  __int64 v42; // [rsp+A0h] [rbp-108h]
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v44[2]; // [rsp+150h] [rbp-58h] BYREF
  __int128 v45; // [rsp+160h] [rbp-48h] BYREF
  __int64 v46; // [rsp+170h] [rbp-38h]

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( !a1 )
  {
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    return 3221225485LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v45 = *(_OWORD *)a1;
  v46 = *(_QWORD *)(a1 + 16);
  v44[0] = *((_QWORD *)&v45 + 1);
  v44[1] = v46 & 0x1FFFFFFFFLL;
  if ( a2 )
  {
    v15 = MmUserProbeAddress;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v33 = *(_OWORD *)a2;
    v34 = *(_QWORD *)(a2 + 16);
    v16 = *(_OWORD *)a2;
    if ( (unsigned int)(v16 - 1) > 1
      || (v17 = *(char **)(a2 + 16), !v34)
      || (v7 = 4096LL, HIDWORD(v33) > 0x1000)
      || (v18 = HIDWORD(*(_QWORD *)a2), DWORD1(v33) > HIDWORD(v33) >> 2)
      || (v15 = DWORD2(v33), DWORD2(v33) > 0x400) )
    {
      v26 = -1073741811;
      goto LABEL_55;
    }
    v6 = (unsigned int)(4 * DWORD1(v33));
    v32 = 4 * DWORD1(v33);
    v19 = DWORD2(v33) * 4 * DWORD1(v33);
    v20 = v19;
    if ( !v19 )
    {
      Pool2 = 0LL;
      goto LABEL_36;
    }
    v39 = 1886221383;
    v42 = 260LL;
    v21 = gpLeakTrackingAllocator;
    v22 = v19;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) == 0x706D7447
      && (v23 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1886221383 )
      {
        if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_22;
      }
      v25 = 0;
      if ( (unsigned int)v20 < 0x1000uLL || (v20 & 0xFFF) != 0 )
      {
        v25 = 1;
        v22 = (unsigned int)v20 + 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v22);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v21,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_23;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v21,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_23;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
    }
    else
    {
LABEL_22:
      Pool2 = ExAllocatePool2(260LL, (unsigned int)v20);
    }
LABEL_23:
    v15 = DWORD2(v33);
    v6 = v32;
    v18 = DWORD1(v33);
LABEL_36:
    if ( Pool2 )
    {
      if ( (_DWORD)v6 == HIDWORD(v33) )
      {
        if ( v34 >= MmUserProbeAddress )
          v17 = (char *)MmUserProbeAddress;
        memmove((void *)Pool2, v17, v20);
        LODWORD(v6) = 4 * DWORD1(v33);
      }
      else
      {
        v40 = (char *)v34;
        v27 = (char *)Pool2;
        v41 = (char *)Pool2;
        for ( i = v15; i; --i )
        {
          v29 = v17;
          if ( (unsigned __int64)v17 >= MmUserProbeAddress )
            v29 = (const void *)MmUserProbeAddress;
          v30 = (unsigned int)v6;
          memmove(v27, v29, v6);
          v17 += HIDWORD(v33);
          v40 = v17;
          v27 += v30;
          v41 = v27;
          v6 = v32;
        }
        v18 = DWORD1(v33);
      }
      v35[5] = 0;
      if ( v16 == 1 )
      {
        v35[0] = 2;
      }
      else
      {
        v31 = 0;
        if ( v16 == 2 )
          v31 = 4;
        v35[0] = v31;
      }
      v35[1] = v18;
      v35[2] = DWORD2(v33);
      v35[3] = v6;
      v35[4] = DWORD2(v45);
      v36 = Pool2;
      v37 = 0;
      v38 = 0;
      v11 = ((__int64 (__fastcall *)(__int128 *, _QWORD *, _DWORD *, _QWORD))qword_1C02968E8)(&v45, v44, v35, 0LL);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
      v14 = v11 < 0;
      goto LABEL_7;
    }
    v26 = -1073741823;
LABEL_55:
    UserSessionSwitchLeaveCrit(v15, v4, v6, v7);
    return v26;
  }
  v11 = ((__int64 (__fastcall *)(__int128 *, _QWORD *, _QWORD))qword_1C02968E0)(&v45, v44, 0LL);
  v14 = v11 < 0;
LABEL_7:
  if ( v14 )
    v11 = -1073741823;
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return (unsigned int)v11;
}
