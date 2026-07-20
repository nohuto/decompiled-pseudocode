/*
 * XREFs of SmpHandleConnectionRequest @ 0x140003230
 * Callers:
 *     SmpApiCallback @ 0x140002CF0 (SmpApiCallback.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpAddKnownSubSys @ 0x14000265C (SmpAddKnownSubSys.c)
 *     SmpReadySubSys @ 0x1400026A0 (SmpReadySubSys.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140003734 (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 *     SmpLookupControlBlock @ 0x14000382C (SmpLookupControlBlock.c)
 *     SmpGetProcessMuSessionId @ 0x1400038C0 (SmpGetProcessMuSessionId.c)
 *     SmpCreateKnownSubSys @ 0x1400039F8 (SmpCreateKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140003AD4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x14000696C (SmpReleaseControlBlock.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpDeleteSubSys @ 0x14001AD78 (SmpDeleteSubSys.c)
 */

void __fastcall SmpHandleConnectionRequest(__int64 a1, __int64 a2, void *a3, int a4)
{
  char v5; // r13
  __int64 *v6; // rbx
  HANDLE *v7; // rdi
  __int64 KnownSubSys; // r14
  int v9; // r15d
  char v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rsi
  _DWORD *v17; // rdx
  char v18; // al
  HANDLE *v19; // r8
  int v20; // r9d
  char v21; // r10
  char v22; // r11
  __int64 v23; // rsi
  __int64 v24; // rdx
  char *Heap; // rax
  int *v26; // rbx
  HANDLE v27; // rax
  _DWORD *v28; // rax
  void *v29; // r13
  int v30; // eax
  __int64 v31; // rdx
  _OWORD *v32; // rbx
  const WCHAR *v33; // rdx
  char v34; // [rsp+50h] [rbp-B0h]
  char v35; // [rsp+52h] [rbp-AEh]
  char v36; // [rsp+53h] [rbp-ADh]
  ULONG MaxMessageLength; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  void *PortHandle; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD *v49; // [rsp+B8h] [rbp-48h]
  _BYTE v50[16]; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  __int128 v56; // [rsp+100h] [rbp+0h]
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+110h] [rbp+10h] BYREF

  v46 = a2;
  PortHandle = a3;
  v5 = 0;
  v47 = a1;
  v6 = (__int64 *)(a2 + 8);
  v39 = 0;
  v36 = 0;
  v45 = a2 + 40;
  v7 = 0LL;
  KnownSubSys = 0LL;
  v9 = 0;
  v34 = 0;
  v10 = 1;
  v49 = (_OWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 8) == SmpUniqueProcessId || a4 )
  {
    Handle = 0LL;
    v23 = 0LL;
    goto LABEL_17;
  }
  v53 = 0LL;
  v55 = 0;
  v54 = 0LL;
  v52 = 48;
  v56 = 0LL;
  if ( (int)NtAlpcOpenSenderProcess(&Handle, a1, a2) < 0 )
  {
    v10 = 0;
    v23 = 0LL;
    Handle = 0LL;
    goto LABEL_62;
  }
  SmpGetProcessMuSessionId(Handle, &v39);
  v11 = v39;
  v42 = 0;
  v43 = 0LL;
  v44 = *v6;
  v12 = SmpSearchKnownSubSysDatabase(v39, &v42);
  if ( v12 )
    goto LABEL_52;
  v13 = SmpLookupControlBlock(v11);
  v7 = (HANDLE *)v13;
  if ( !v13 )
    goto LABEL_52;
  v14 = *(_QWORD *)(a2 + 8);
  v40 = *(_QWORD *)(v13 + 16);
  if ( *(_QWORD *)(v40 + 8) == v14 )
  {
    KnownSubSys = SmpCreateKnownSubSys(1LL);
    v43 = v50;
    SmpWaitForSubSysStartup(v11, 1, 0LL, (__int64)v50);
    if ( !*(_DWORD *)v40 && *(_QWORD *)(v40 + 8) == *(_QWORD *)(a2 + 8) )
    {
      v15 = SmpSearchKnownSubSysDatabase(v11, &v42);
      v16 = (_DWORD *)v45;
      v12 = v15;
      v42 = 1;
      LODWORD(v44) = *(_DWORD *)v45;
      if ( v15 )
      {
        v10 = 0;
      }
      else
      {
        v12 = SmpSearchKnownSubSysDatabase(v11, &v42);
        if ( v12 )
        {
          v10 = 0;
        }
        else if ( KnownSubSys )
        {
          *(_DWORD *)(KnownSubSys + 64) = v11;
          v12 = KnownSubSys;
          *(_QWORD *)(KnownSubSys + 32) = Handle;
          v17 = (_DWORD *)KnownSubSys;
          *(_DWORD *)(KnownSubSys + 24) = *v16;
          KnownSubSys = 0LL;
          Handle = 0LL;
          SmpAddKnownSubSys((__int64)v50, v17);
          v34 = 1;
        }
        else
        {
          v10 = 0;
        }
      }
    }
    SmpUnlockKnownSubSysList(v50);
    v18 = v34;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v13 + 56) == v14 )
  {
    v9 = 8;
    v18 = 1;
  }
  else
  {
LABEL_52:
    v18 = 0;
  }
LABEL_14:
  v34 = v18;
  v19 = v7;
  v35 = v18;
  v20 = v9;
  v21 = v18;
  v22 = v10;
  v23 = v12;
  v24 = v12;
  if ( v10 != 1 )
  {
LABEL_62:
    v26 = 0LL;
    goto LABEL_23;
  }
  v34 = v18;
  if ( !v12 )
  {
    v5 = v18;
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(v12 + 8) & 1) == 0 )
  {
    v42 = 1;
    v43 = 0LL;
    LODWORD(v44) = *(_DWORD *)v45;
    KnownSubSys = SmpSearchKnownSubSysDatabase(v11, &v42);
    if ( KnownSubSys )
    {
      v10 = 0;
      v34 = v35;
      v23 = v12;
      goto LABEL_62;
    }
    v21 = v35;
    v24 = v12;
    v19 = v7;
    v20 = v9;
    v22 = 1;
  }
  _m_prefetchw((const void *)(v24 + 8));
  v34 = v21;
  v7 = v19;
  v9 = v20;
  v5 = v21;
  v10 = v22;
  v23 = v24;
  if ( (_InterlockedOr((volatile signed __int32 *)(v24 + 8), 2u) & 2) != 0 )
  {
    v10 = 0;
    v34 = v21;
    goto LABEL_62;
  }
LABEL_17:
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x28uLL);
  v26 = (int *)Heap;
  if ( Heap )
  {
    RtlInitializeSRWLock(Heap + 24);
    v26[2] = 0;
    if ( v23 )
    {
      *((_QWORD *)v26 + 4) = v23;
      v9 |= 0x10u;
    }
    else
    {
      v27 = Handle;
      if ( v9 )
        v27 = v7;
      *((_QWORD *)v26 + 4) = v27;
    }
    v28 = PortHandle;
    *v26 = v9;
    v28[1] |= 0x20000000u;
    *((_QWORD *)v26 + 2) = 0LL;
    RtlAcquireSRWLockExclusive(v26 + 6);
  }
  else
  {
    v10 = 0;
    if ( v5 == 1 )
      v36 = 1;
  }
LABEL_23:
  v29 = PortHandle;
  v30 = NtAlpcAcceptConnectPort(&v48, v47, 0LL, 0LL, 0LL, v26, v46, PortHandle, v10);
  if ( v10 != 1 )
    goto LABEL_28;
  if ( v30 >= 0 )
  {
    v26[1] = *(_DWORD *)(AlpcGetMessageAttribute(v29, 0x20000000LL) + 16);
    *((_QWORD *)v26 + 2) = v48;
    RtlReleaseSRWLockExclusive(v26 + 6, v31);
    if ( v23 )
    {
      v32 = (_OWORD *)v45;
      v33 = (const WCHAR *)(v45 + 4);
      *(_WORD *)(v45 + 242) = 0;
      RtlInitUnicodeStringEx(&DestinationString, v33);
      SecurityQos.ImpersonationLevel = SecurityIdentification;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      if ( NtConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, &MaxMessageLength, 0LL, 0LL) >= 0 )
      {
        if ( MaxMessageLength == 288 )
          *(_QWORD *)(v23 + 40) = PortHandle;
        else
          NtClose(PortHandle);
      }
      if ( v7 )
        NtSetEvent(v7[5], 0LL);
      if ( (*(_BYTE *)(v23 + 8) & 1) != 0 )
        v32 = v49;
      SmpReadySubSys(v23, v32);
      v23 = 0LL;
    }
    else if ( (v9 & 8) != 0 )
    {
      v7 = 0LL;
    }
    else if ( Handle )
    {
      Handle = 0LL;
    }
LABEL_28:
    if ( !v36 )
      goto LABEL_29;
    goto LABEL_68;
  }
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v26);
  if ( v34 != 1 )
    goto LABEL_28;
LABEL_68:
  if ( v23 )
    SmpDeleteSubSys((PVOID)v23);
  SmpDestroyControlBlock(v7);
LABEL_29:
  if ( Handle )
    NtClose(Handle);
  if ( v23 )
    SmpDereferenceKnownSubSys((_BYTE *)v23);
  if ( KnownSubSys )
    SmpDereferenceKnownSubSys((_BYTE *)KnownSubSys);
  if ( v7 )
    SmpReleaseControlBlock(v7);
}
