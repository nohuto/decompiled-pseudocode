/*
 * XREFs of sub_1403D3960 @ 0x1403D3960
 * Callers:
 *     <none>
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_140263644 @ 0x140263644 (sub_140263644.c)
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403D3CA0 @ 0x1403D3CA0 (sub_1403D3CA0.c)
 *     sub_1403D3D2C @ 0x1403D3D2C (sub_1403D3D2C.c)
 *     sub_1403D3D5C @ 0x1403D3D5C (sub_1403D3D5C.c)
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_1403D3960(char *SystemArgument1)
{
  __int64 v1; // rsi
  unsigned int v3; // r12d
  int v4; // r15d
  __int64 v5; // rbx
  __m128i *v6; // rcx
  __m128i v7; // xmm6
  unsigned int v8; // edx
  __int16 epi16; // ax
  __int64 v10; // r14
  char *v11; // rax
  char *v12; // r13
  LARGE_INTEGER v13; // r8
  LARGE_INTEGER v14; // r9
  char *v15; // r15
  unsigned __int64 v16; // r13
  LARGE_INTEGER v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 result; // rax
  int v23; // r14d
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  signed __int32 v30[6]; // [rsp+8h] [rbp-B9h] BYREF
  __int64 v31; // [rsp+58h] [rbp-69h]
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-59h]
  __m128i v33; // [rsp+78h] [rbp-49h]
  __m128i v34; // [rsp+88h] [rbp-39h]
  __int128 v35; // [rsp+98h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-19h] BYREF
  unsigned int v37; // [rsp+128h] [rbp+67h]
  HANDLE Handle; // [rsp+140h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)SystemArgument1 + 9);
  v3 = 0;
  *((_QWORD *)SystemArgument1 + 3) = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  Handle = 0LL;
  *((_WORD *)SystemArgument1 + 44) = 0;
  SystemArgument1[90] = 6;
  *((_DWORD *)SystemArgument1 + 23) = 0;
  v4 = 0;
  LockHandle.LockQueue = 0LL;
  v35 = 0LL;
  *((_QWORD *)SystemArgument1 + 13) = SystemArgument1 + 96;
  *((_QWORD *)SystemArgument1 + 12) = SystemArgument1 + 96;
  v5 = *((unsigned int *)SystemArgument1 + 20);
  *((_QWORD *)SystemArgument1 + 8) = SystemArgument1 + 56;
  *((_QWORD *)SystemArgument1 + 7) = SystemArgument1 + 56;
  v6 = *(__m128i **)(qword_140C506E0 + 120 * v5 + 112);
  v7 = *v6;
  v8 = v6[1].m128i_u16[0];
  epi16 = _mm_extract_epi16(*v6, 4);
  v33 = *v6;
  *((_WORD *)SystemArgument1 + 60) = epi16;
  v37 = dword_140C50728;
  v10 = v8 / dword_140C50728;
  *((_QWORD *)SystemArgument1 + 2) = SystemArgument1 + 8;
  *((_QWORD *)SystemArgument1 + 1) = SystemArgument1 + 8;
  *(_WORD *)SystemArgument1 = 263;
  SystemArgument1[2] = 6;
  if ( !(_DWORD)v10 )
    v10 = 1LL;
  *((_DWORD *)SystemArgument1 + 1) = 0;
  *((_DWORD *)SystemArgument1 + 32) = v10;
  *((_DWORD *)SystemArgument1 + 39) = v10;
  *((_DWORD *)SystemArgument1 + 38) = v10;
  *((_DWORD *)SystemArgument1 + 34) = 0;
  v11 = (char *)sub_14030B860(64LL, 40 * v10, 0x615A694Du, (unsigned int)v5 | 0x80000000);
  v12 = v11;
  if ( !v11 )
  {
    *(_BYTE *)(v1 + 16176) = 1;
    LODWORD(v10) = 0;
  }
  *((_QWORD *)SystemArgument1 + 18) = v11;
  *((_DWORD *)SystemArgument1 + 41) = v10;
  v31 = *(_QWORD *)(*(_QWORD *)(v1 + 176) + 112LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _InterlockedOr(v30, 0);
  if ( (_DWORD)v10 )
  {
    v15 = v12 + 17;
    v16 = v33.m128i_i64[0];
    while ( 1 )
    {
      *(_DWORD *)(v15 + 3) = 0;
      v17.QuadPart = 0LL;
      *(_WORD *)(v15 - 1) = 1;
      v15[1] = 6;
      *(_QWORD *)(v15 + 15) = v15 + 7;
      *(_QWORD *)(v15 + 7) = v15 + 7;
      *(_QWORD *)&v35 = 0LL;
      v34 = v7;
      if ( v16 )
      {
        v18 = 0LL;
        LOBYTE(v13.LowPart) = 0;
        v34.m128i_i64[0] = 0LL;
        if ( v37 )
        {
          do
          {
            v14 = v17;
            if ( !v16 )
              break;
            _BitScanForward64(&v19, v16);
            v18 |= 1LL << v19;
            v34.m128i_i64[0] = v18;
            if ( !LOBYTE(v13.LowPart) )
            {
              v17.QuadPart |= v18;
              *(_QWORD *)&v35 = v14.QuadPart | v18;
            }
            ++LOBYTE(v13.LowPart);
            v16 &= ~v18;
            v33.m128i_i64[0] = v16;
            v7 = v33;
          }
          while ( LOBYTE(v13.LowPart) < v37 );
        }
      }
      v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1403D3CA0)(
              SystemArgument1,
              (LARGE_INTEGER)v17.QuadPart,
              (LARGE_INTEGER)v13.QuadPart,
              (LARGE_INTEGER)v14.QuadPart);
      if ( !v20 )
        break;
      *(__m128i *)(v20 + 280) = v34;
      *(_DWORD *)(v20 + 264) = v3;
      *(_QWORD *)(v15 - 9) = v20;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 16192));
      if ( (int)PsCreateSystemThreadEx((unsigned int)&Handle, 0LL, (__int64)sub_1403C6B00, v20, v20 + 280, 0LL) < 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v1 + 16192));
        break;
      }
      ObCloseHandle(Handle, 0);
      ++v3;
      *((_QWORD *)SystemArgument1 + 14) |= v35;
      v15 += 40;
      if ( v3 >= (unsigned int)v10 )
      {
        v4 = 0;
        goto LABEL_17;
      }
    }
    v23 = v10 - v3;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)SystemArgument1 + 32, -v23) == v23 )
      sub_14024B0B4(SystemArgument1, 1);
    v4 = v23;
    if ( v23 )
      *(_BYTE *)(v1 + 16176) = 1;
  }
LABEL_17:
  if ( (ULONG_PTR *)v1 != &StartContext )
    goto LABEL_20;
  if ( v3 )
  {
    sub_1403D3EE0(v1, SystemArgument1);
LABEL_20:
    *((_DWORD *)SystemArgument1 + 40) = sub_140263644(v5);
    goto LABEL_21;
  }
  sub_1403D3EE0(v1, 0LL);
LABEL_21:
  v21 = *(_QWORD *)(v1 + 16) + 24512 * v5;
  *(_BYTE *)(v21 + 22965) = 1;
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)SystemArgument1 + 3, &LockHandle);
    sub_140267A5C((__int64)SystemArgument1, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = *((_QWORD *)CurrentPrcb + 4375);
          v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v29 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  KeSetEvent((PRKEVENT)(SystemArgument1 + 88), 0, 0);
  if ( v3 )
    sub_140217454((__int64)SystemArgument1, 0);
  _InterlockedOr(v30, 0);
  *((LARGE_INTEGER *)SystemArgument1 + 4) = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL)
                                                          - PerformanceCounter.QuadPart);
  if ( !*(_BYTE *)(v1 + 16176) )
    sub_1403D3D5C(v21, SystemArgument1);
  sub_1403D3D2C(v1);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 16192), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_14024B0B4((_DWORD *)(v1 + 16152), 1);
  return result;
}
