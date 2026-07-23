/*
 * XREFs of sub_14059D170 @ 0x14059D170
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14025FD40 @ 0x14025FD40 (sub_14025FD40.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x14041BE80 (ZwFsControlFile.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059CFBC @ 0x14059CFBC (sub_14059CFBC.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 */

void __fastcall sub_14059D170(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v3; // r14
  ULONG_PTR v4; // r12
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int SignalState; // esi
  __int64 *v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r12
  int v15; // ebx
  struct _KTHREAD *v16; // rsi
  unsigned int v17; // r8d
  __int64 v18; // rdi
  unsigned int v19; // ecx
  int v20; // r8d
  signed __int32 v21[8]; // [rsp+8h] [rbp-100h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-98h]
  __int128 v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v26; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  int v28[24]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 InputBuffer; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+128h] [rbp+20h]

  memset(v28, 0, 0x58uLL);
  v30 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  v3 = sub_1402CCC50(0LL);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 976)) )
  {
    --*((_WORD *)CurrentThread + 243);
    v4 = a1 + 1152;
    ExAcquirePushLockExclusiveEx(a1 + 1152, 0LL);
    v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    v6 = *(_DWORD *)(a1 + 16728);
    SignalState = 0;
    Event.Header.SignalState = 0;
    if ( v6 )
    {
      v8 = (__int64 *)(a1 + 16736);
      v9 = v6;
      v25 = a1 + 16736;
      do
      {
        v10 = *v8;
        if ( (*(_WORD *)(*v8 + 204) & 0x850) == 0x10 )
        {
          Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)393216;
          *(_QWORD *)&v23 = &Event.Header.WaitListHead.Blink;
          Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event.Header.WaitListHead.Blink;
          v24 = SignalState | 0x200000000000uLL;
          *((_QWORD *)&v23 + 1) = a1;
          v11 = sub_14025FD40(v10);
          if ( v11 >= DWORD1(v24) )
          {
            do
            {
              sub_14059CFBC(
                a1,
                (__int64)v28,
                (__int64)sub_14059D070,
                (__int64)&Event.Header.WaitListHead,
                &Event.Header.WaitListHead);
              if ( !HIDWORD(v24) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v24) << 12;
              v30 = (unsigned __int64)HIDWORD(v24) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              Event.Header.LockNV = ZwFsControlFile(
                                      *(HANDLE *)(v10 + 224),
                                      0LL,
                                      (PIO_APC_ROUTINE)ApcRoutine,
                                      &Event.Header.WaitListHead,
                                      &IoStatusBlock,
                                      0x98208u,
                                      &InputBuffer,
                                      0x18u,
                                      0LL,
                                      0);
              if ( Event.Header.LockNV == 259 )
              {
                KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
                Event.Header.LockNV = IoStatusBlock.Status;
              }
              v12 = sub_140340078(v3, v10, DWORD2(v24));
              v13 = v12;
              if ( qword_140C50780 )
              {
                if ( (v12 & 0x10) != 0 )
                  v13 = v12 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = v12 & ~qword_140C50780;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(v24) )
              {
                v15 = HIDWORD(v24);
                do
                {
                  sub_1402E20D0(a1, v12, 2);
                  v12 = sub_14033B6A0(v12, ++v14);
                  --v15;
                }
                while ( v15 );
              }
              if ( Event.Header.LockNV < 0 )
                break;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              *((_QWORD *)&v24 + 1) = (unsigned int)(HIDWORD(v24) + DWORD2(v24));
            }
            while ( (unsigned __int64)DWORD2(v24) < *(_QWORD *)v10 );
            SignalState = Event.Header.SignalState;
            v8 = (__int64 *)v25;
          }
        }
        ++SignalState;
        ++v8;
        Event.Header.SignalState = SignalState;
        v25 = (__int64)v8;
      }
      while ( SignalState < v9 );
      CurrentThread = v26;
      v4 = a1 + 1152;
    }
    --*((_WORD *)CurrentThread + 243);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    v16 = KeGetCurrentThread();
    if ( v4 - qword_140C50630 >= 0x8000000000LL )
      v17 = -1;
    else
      v17 = sub_140287F30(*((_QWORD *)v16 + 23));
    _disable();
    v18 = (__int64)v16 + 1696;
    v19 = 0;
    while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != (v4 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v18 + 18)
         || (*(_DWORD *)v18 & 1) != 0
         || *(_DWORD *)(v18 + 8) != v17 )
    {
      ++v19;
      v18 += 96LL;
      if ( v19 >= 6 )
        goto LABEL_35;
    }
    *(_BYTE *)(v18 + 18) = 0;
    if ( !v18 )
    {
LABEL_35:
      if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v4, v17, 0LL);
      _enable();
      goto LABEL_43;
    }
    if ( *(__int64 *)v18 < 0 )
    {
      *(_BYTE *)v18 |= 2u;
      _enable();
      sub_14034EE30(v18);
      _disable();
    }
    v20 = *(_DWORD *)(v18 + 88);
    *(_DWORD *)(v18 + 88) = 0;
    *(_BYTE *)(v18 + 17) = 0;
    *(_QWORD *)v18 = 0LL;
    *((_BYTE *)v16 + 792) |= 1 << *(_BYTE *)(v18 + 16);
    _enable();
    if ( v20 )
      sub_14022B568((ULONG_PTR)v16, v4, v20);
LABEL_43:
    v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    sub_1406EC1C4(a1);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 976));
    *(_QWORD *)(a1 + 1104) = sub_1402F5718();
    _InterlockedOr(v21, 0);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  sub_1403606C4(*(_QWORD *)(a1 + 176));
}
