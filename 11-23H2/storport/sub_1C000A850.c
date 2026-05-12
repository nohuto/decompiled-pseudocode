/*
 * XREFs of sub_1C000A850 @ 0x1C000A850
 * Callers:
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0008ED0 @ 0x1C0008ED0 (sub_1C0008ED0.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C000AF60 @ 0x1C000AF60 (sub_1C000AF60.c)
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C001A174 @ 0x1C001A174 (sub_1C001A174.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C004123C @ 0x1C004123C (sub_1C004123C.c)
 *     sub_1C00437E4 @ 0x1C00437E4 (sub_1C00437E4.c)
 */

__int64 __fastcall sub_1C000A850(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  PSLIST_ENTRY v7; // r15
  unsigned __int64 v8; // r13
  int v9; // r8d
  int v10; // ecx
  bool v11; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD); // rax
  char v17; // bl
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  char v21; // r14
  char *v23; // r8
  int v24; // r10d
  unsigned int v25; // ebx
  unsigned int i; // r9d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rbx
  __int64 v31; // r11
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 CurrentNodeNumber; // rbx
  char v44; // al
  char v45; // al
  unsigned __int64 v46; // r11
  unsigned int v47; // r14d
  int v48; // r8d
  int v49; // eax
  __int64 v50; // r14
  LARGE_INTEGER v51; // rax
  LARGE_INTEGER v52; // rax
  __int64 v53; // [rsp+20h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v55; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v56; // [rsp+98h] [rbp+10h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+18h]
  __int64 v58; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v57 = 0LL;
  v4 = *(_QWORD *)(a2 + 224);
  v5 = *(_QWORD *)(a2 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0LL;
  v58 = 0LL;
  v8 = 0LL;
  v53 = 0LL;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v9 = *(_DWORD *)(v5 + 20);
    v10 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v9 = *(unsigned __int8 *)(v5 + 2);
    v10 = *(_DWORD *)(v5 + 12);
  }
  if ( v4 )
  {
    if ( *(int *)(v4 + 680) > 0 )
    {
      if ( v9 == 32 || (v49 = 1, v9 == 19) )
        v49 = 0;
      if ( v49 )
        goto LABEL_121;
    }
    else if ( *(_BYTE *)(v4 + 692) && (v10 & 0x10) == 0 || *(_BYTE *)(v4 + 693) && (v10 & 0x80000) == 0 )
    {
      goto LABEL_121;
    }
  }
  else if ( (unsigned __int8)sub_1C001A174(*(_QWORD *)(a1 + 896))
         && (unsigned int)(v48 - 36) > 1
         && (*(_BYTE *)(a2 + 17) & 8) == 0 )
  {
LABEL_121:
    *(_BYTE *)(v5 + 3) = 5;
    sub_1C00437E4(*(_QWORD *)(a2 + 224), 0LL, a2);
    sub_1C000EF50(a1, a2, 1LL);
    return 0LL;
  }
  if ( byte_1C0093BE8 )
  {
    v11 = byte_1C0093BA0 == 0;
  }
  else
  {
    if ( !dword_1C0093400 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_11;
    }
    if ( !byte_1C0093BA0 )
      goto LABEL_125;
    v11 = dword_1C0093404 == 0;
  }
  if ( v11 )
  {
LABEL_125:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_11;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_11:
  v11 = byte_1C0093AE7 == 0;
  v13 = *(_QWORD *)(a2 + 168);
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( v11 && v13 )
  {
    if ( *(_BYTE *)(v13 + 2) != 40 )
    {
      v24 = *(unsigned __int8 *)(v13 + 2);
      v23 = (char *)(v13 + 72);
      goto LABEL_76;
    }
    v23 = 0LL;
    v24 = *(_DWORD *)(v13 + 20);
    if ( !v24 )
    {
      v25 = *(_DWORD *)(v13 + 56);
      for ( i = 0; i < v25; ++i )
      {
        v27 = *(unsigned int *)(v13 + 4LL * i + 120);
        if ( (unsigned int)v27 >= 0x80 )
        {
          v46 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v27 < (unsigned int)v46 )
          {
            v50 = v27 + v13;
            if ( *(_DWORD *)(v27 + v13) == 64 )
            {
              if ( v27 + 40 <= v46 )
              {
LABEL_103:
                if ( *(_BYTE *)(v50 + 10) )
                  v23 = (char *)(v50 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v27 + v13) == 65 )
            {
              if ( v27 + 56 <= v46 )
                goto LABEL_103;
            }
            else if ( *(_DWORD *)(v27 + v13) == 66 && v27 + 40 <= v46 )
            {
              if ( *(_DWORD *)(v50 + 12) )
                v23 = (char *)(v50 + 32);
              break;
            }
          }
        }
      }
    }
LABEL_76:
    if ( v23 )
    {
      if ( !v24 )
      {
        v44 = *v23;
        if ( *v23 == 42 || v44 == -86 || v44 == -118 )
        {
          v45 = v23[1];
          if ( (v45 & 8) != 0 )
            v23[1] = v45 & 0xF7;
        }
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 4306) )
  {
LABEL_25:
    if ( (qword_1C0093468 & 4) == 0 )
      goto LABEL_26;
    v36 = *(_QWORD *)(a2 + 224);
    if ( v36 )
      v8 = (unsigned __int8)BYTE2(*(_DWORD *)(v36 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v36 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v36 + 96))) << 8);
    v37 = sub_1C000AF60(a2, v13);
    v38 = *(_QWORD *)(a2 + 168);
    v53 = v37;
    v39 = *(_QWORD *)(a2 + 160);
    v58 = v38;
    if ( v39 )
      goto LABEL_64;
    if ( v38 )
    {
      if ( *(_BYTE *)(v38 + 2) != 40 )
      {
        v39 = *(_QWORD *)(v38 + 48);
LABEL_64:
        v57 = v39;
        goto LABEL_26;
      }
      v57 = *(_QWORD *)(v38 + 80);
    }
LABEL_26:
    v18 = *(_QWORD *)(a2 + 224);
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 128) & 2) != 0 )
      {
        v56 = 0;
        if ( (unsigned __int8)sub_1C0010160(v18, 0LL, a2, &v56) )
        {
          RtlInterlockedClearBitRun(v18 + 3360, v56, 1LL);
          sub_1C004123C(v18 + 656, 0LL, a2);
        }
      }
    }
    v19 = *(_QWORD *)(a2 + 160);
    if ( v19 )
      *(_BYTE *)(v19 + 141) = -86;
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
    v20 = MEMORY[0xFFFFF78000000014];
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 568) + 16LL))(
            *(_QWORD *)(a1 + 576) + 16LL,
            *(_QWORD *)(a2 + 168));
    if ( byte_1C0093BE8 && ((byte_1C0093A01 & 1) != 0 || (byte_1C0093A03 & 2) != 0) )
    {
      if ( byte_1C0093BA0 )
        v52 = KeQueryPerformanceCounter(0LL);
      else
        v52.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 712) = v52;
    }
    if ( *(_BYTE *)(a1 + 4306) )
    {
      if ( *(int *)(a1 + 4600) <= 1 )
      {
        if ( *(_DWORD *)(a1 + 752) )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          sub_1C0008914(a1, (KIRQL)LockHandle.LockQueue.Next);
      }
      else if ( v7 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + ((unsigned __int64)LODWORD(v7[1].Next) << 6)),
          v7);
      }
    }
    if ( (qword_1C0093468 & 4) != 0 && *(_DWORD *)(a1 + 4868) && *(_QWORD *)(a1 + 4872) )
    {
      v40 = *(_QWORD *)(a1 + 4872)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4864)) % *(_DWORD *)(a1 + 4868));
      *(_DWORD *)v40 = 0;
      if ( v20 )
        *(_QWORD *)(v40 + 40) = v20;
      else
        *(_QWORD *)(v40 + 40) = MEMORY[0xFFFFF78000000014];
      v41 = v58;
      *(_QWORD *)(v40 + 8) = v57;
      *(_QWORD *)(v40 + 32) = v53;
      *(_QWORD *)(v40 + 16) = v8;
      *(_QWORD *)(v40 + 24) = v41;
    }
    if ( !v21 )
      return (unsigned int)-1073741823;
    return v2;
  }
  if ( (qword_1C0093468 & 1) != 0 )
  {
    v28 = sub_1C000AF60(a2, v13);
    v29 = *(_QWORD *)(a2 + 160);
    v30 = v28;
    v31 = *(_QWORD *)(a2 + 168);
    if ( !v29 && v31 )
    {
      if ( *(_BYTE *)(v31 + 2) == 40 )
        v29 = *(_QWORD *)(v31 + 80);
      else
        v29 = *(_QWORD *)(v31 + 48);
    }
    v32 = *(_QWORD *)(a2 + 224);
    if ( v32 )
      v33 = (unsigned __int8)BYTE2(*(_DWORD *)(v32 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v32 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v32 + 96))) << 8);
    else
      v33 = 0LL;
    v34 = *(_QWORD *)(a2 + 216);
    if ( v34 && *(_DWORD *)(v34 + 4868) && *(_QWORD *)(v34 + 4872) )
    {
      v35 = *(_QWORD *)(v34 + 4872)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v34 + 4864)) % *(_DWORD *)(v34 + 4868));
      *(_DWORD *)v35 = 36;
      *(_QWORD *)(v35 + 40) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v35 + 8) = v29;
      *(_QWORD *)(v35 + 16) = v33;
      *(_QWORD *)(v35 + 24) = v31;
      *(_QWORD *)(v35 + 32) = v30;
    }
  }
  v14 = *(_QWORD *)(a2 + 160);
  if ( v14 )
    *(_BYTE *)(v14 + 141) = -82;
  v15 = *(_QWORD *)(a2 + 216);
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v15 + 568) + 128LL);
  if ( v16 )
    v17 = v16(*(_QWORD *)(v15 + 576) + 16LL, *(_QWORD *)(a2 + 168));
  else
    v17 = 1;
  if ( byte_1C0093BE8 && ((byte_1C0093A01 & 1) != 0 || (byte_1C0093A03 & 2) != 0) )
  {
    if ( byte_1C0093BA0 )
      v51 = KeQueryPerformanceCounter(0LL);
    else
      v51.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 704) = v51;
  }
  if ( v17 )
  {
    if ( *(int *)(a1 + 4600) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 752) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 744), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = sub_1C000889C(a1);
    }
    else if ( *(_DWORD *)(a1 + 4600) < KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      CurrentNodeNumber = KeGetCurrentNodeNumber();
      v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + (CurrentNodeNumber << 6)));
      if ( !v7 )
      {
        v47 = KeQueryHighestNodeNumber() + 1;
        do
LABEL_86:
          LODWORD(CurrentNodeNumber) = 0;
        while ( !v47 );
        while ( 1 )
        {
          v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4608)
                                                         + ((unsigned __int64)(unsigned int)CurrentNodeNumber << 6)));
          if ( v7 )
            break;
          _mm_pause();
          LODWORD(CurrentNodeNumber) = CurrentNodeNumber + 1;
          if ( (unsigned int)CurrentNodeNumber >= v47 )
            goto LABEL_86;
        }
      }
      LODWORD(v7[1].Next) = CurrentNodeNumber;
      *(_DWORD *)(a2 + 24) = HIDWORD(v7[1].Next);
    }
    else
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
    goto LABEL_25;
  }
  v42 = *(_QWORD *)(a2 + 224);
  if ( v42 )
  {
    if ( (*(_BYTE *)(v42 + 128) & 2) != 0 )
    {
      v55 = 0;
      if ( (unsigned __int8)sub_1C0010160(v42, 0LL, a2, &v55) )
      {
        RtlInterlockedClearBitRun(v42 + 3360, v55, 1LL);
        sub_1C004123C(v42 + 656, 0LL, a2);
      }
    }
  }
  return 0LL;
}
