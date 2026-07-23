/*
 * XREFs of sub_140B240EC @ 0x140B240EC
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402DA7E4 @ 0x1402DA7E4 (sub_1402DA7E4.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     sub_1403D4DFC @ 0x1403D4DFC (sub_1403D4DFC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140851C58 @ 0x140851C58 (sub_140851C58.c)
 *     sub_140851EBC @ 0x140851EBC (sub_140851EBC.c)
 *     sub_140852380 @ 0x140852380 (sub_140852380.c)
 */

__int64 sub_140B240EC()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // r9
  _QWORD *v3; // rcx
  __int16 v4; // r9
  __int64 result; // rax
  unsigned int v6; // r12d
  _QWORD *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 *v15; // rdx
  ULONG_PTR v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdi
  struct _KTHREAD *v25; // rsi
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  struct _KTHREAD *v30; // rsi
  unsigned int v31; // ecx
  __int64 v32; // rbx
  unsigned int v33; // edx
  int v34; // r9d
  struct _KTHREAD *v35; // rax
  bool v36; // zf
  __int64 v37; // rax

  stru_140C11580.Event.Header.Size = 6;
  stru_140C11580.Owner = 0LL;
  stru_140C11580.Event.Header.WaitListHead.Blink = &stru_140C11580.Event.Header.WaitListHead;
  stru_140C11580.Event.Header.WaitListHead.Flink = &stru_140C11580.Event.Header.WaitListHead;
  v0 = dword_140C0C86C;
  stru_140C11580.Count = 1;
  stru_140C11580.Contention = 0;
  LOWORD(stru_140C11580.Event.Header.Lock) = 1;
  stru_140C11580.Event.Header.SignalState = 0;
  byte_140C115B8 = 1;
  if ( dword_140C0C86C > 0x4000 )
  {
    v0 = 0x4000;
    dword_140C0C86C = 0x4000;
  }
  if ( v0 < 32 )
    dword_140C0C86C = 32;
  v1 = dword_140C0C868;
  if ( (unsigned int)dword_140C0C868 > 0xE10 )
  {
    v1 = 3600;
    dword_140C0C868 = 3600;
  }
  if ( v1 < 0x3C )
    dword_140C0C868 = 60;
  for ( i = 0; i < (unsigned __int16)word_140D05000; i = v4 + 1 )
  {
    v3 = 0LL;
    if ( (_UNKNOWN *)qword_140D31700[i] != (_UNKNOWN *)((char *)&unk_140D3DDC0 + 280 * i) )
      v3 = (_QWORD *)qword_140D31700[i];
    sub_140852380(v3);
  }
  result = sub_140851EBC((__int64)qword_140D06C40);
  if ( (int)result >= 0 )
  {
    result = sub_140851C58(*((_QWORD *)qword_140D06C40 + 2));
    v6 = result;
    if ( (int)result >= 0 )
    {
      sub_1403D4DFC();
      _mm_lfence();
      if ( !qword_140C4ED20 )
      {
        v20 = __rdtsc();
        v21 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4)) ^ 0xBD6LL;
        if ( !v21 )
          v21 = 1LL;
        qword_140C4ED20 = v21;
        v22 = __rdtsc();
        qword_140C4ED28 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) >> 4)) ^ 0x5EBLL;
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 243);
        v24 = 0LL;
        v25 = KeGetCurrentThread();
        v26 = (__int64)qword_140C246D8 + 184;
        _disable();
        v27 = *((unsigned __int8 *)v25 + 792);
        if ( *((_BYTE *)v25 + 792) || (v27 = sub_14029F6A8((__int64)qword_140C246D8 + 184, (__int64)v25)) != 0 )
        {
          _BitScanForward((unsigned int *)&v28, v27);
          *((_BYTE *)v25 + 792) = v27 & ~(1 << v28);
          _enable();
          v24 = (__int64)v25 + 96 * v28 + 1696;
          if ( (unsigned __int64)(v26 - qword_140C50630) >= 0x8000000000LL )
            v29 = -1;
          else
            v29 = sub_140287F30(*((_QWORD *)v25 + 23));
          *(_DWORD *)(v24 + 8) = v29;
          *(_QWORD *)v24 = v26 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
          sub_14029F120((unsigned __int64 *)v26, v24, v26);
        if ( v24 )
          *(_BYTE *)(v24 + 18) = 1;
        v12 = 0;
        v11 = 64;
        v13 = *((unsigned int *)qword_140C246D8 + 11);
        qword_140C4ED38 = v13;
        v14 = (unsigned int)v13;
        if ( (_DWORD)v13 )
        {
          v15 = qword_140C24700;
          while ( *v15 )
          {
            if ( (*(_BYTE *)(*v15 + 66) & 0x40) != 0 )
              _bittestandset64(&qword_140C4ED40, v12);
            ++v12;
            ++v15;
            if ( v12 >= (unsigned int)v13 )
              goto LABEL_36;
          }
          v14 = v12;
          LODWORD(v13) = v12;
          qword_140C4ED38 = v12;
        }
LABEL_36:
        v16 = (ULONG_PTR)qword_140C246D8 + 184;
        _m_prefetchw((char *)qword_140C246D8 + 184);
        v17 = *(_QWORD *)v16;
        v18 = *(_QWORD *)v16 - 16LL;
        if ( (*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v18 = 0LL;
        if ( (v17 & 2) != 0
          || (v19 = *(_QWORD *)v16, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v18, v17)) )
        {
          ExfReleasePushLock((_QWORD *)v16);
        }
        v30 = KeGetCurrentThread();
        if ( v16 - qword_140C50630 >= 0x8000000000LL )
          v31 = -1;
        else
          v31 = sub_140287F30(*((_QWORD *)v30 + 23));
        _disable();
        v32 = (__int64)v30 + 1696;
        v33 = 0;
        while ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) != (v16 & 0x7FFFFFFFFFFFFFFCLL)
             || !*(_BYTE *)(v32 + 18)
             || (*(_DWORD *)v32 & 1) != 0
             || *(_DWORD *)(v32 + 8) != v31 )
        {
          ++v33;
          v32 += 96LL;
          if ( v33 >= 6 )
            goto LABEL_65;
        }
        *(_BYTE *)(v32 + 18) = 0;
        if ( v32 )
        {
          if ( *(__int64 *)v32 < 0 )
          {
            *(_BYTE *)v32 |= 2u;
            _enable();
            sub_14034EE30(v32);
            _disable();
          }
          v34 = *(_DWORD *)(v32 + 88);
          *(_DWORD *)(v32 + 88) = 0;
          *(_BYTE *)(v32 + 17) = 0;
          *(_QWORD *)v32 = 0LL;
          *((_BYTE *)v30 + 792) |= 1 << *(_BYTE *)(v32 + 16);
          _enable();
          if ( v34 )
            sub_14022B568((ULONG_PTR)v30, v16, v34);
          goto LABEL_68;
        }
LABEL_65:
        if ( (*((_DWORD *)v30 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v30, v16, v31, 0LL);
        _enable();
LABEL_68:
        v35 = KeGetCurrentThread();
        v36 = (*((_WORD *)v35 + 243))++ == 0xFFFF;
        if ( v36 && *((struct _KTHREAD **)v35 + 19) != (struct _KTHREAD *)((char *)v35 + 152) )
          KiCheckForKernelApcDelivery();
        if ( (_DWORD)v13 )
        {
          qword_140C4ED60 = qword_140C24700[41929663 * (__rdtsc() >> 4) % v14];
          v7 = (_QWORD *)(qword_140C4ED60 + 112);
          v8 = (const char *)(qword_140C4ED60 + 112);
          if ( qword_140C4ED60 + 112 < (unsigned __int64)(qword_140C4ED60 + 176) )
          {
            do
            {
              _mm_prefetch(v8, 0);
              v8 += 64;
            }
            while ( (unsigned __int64)v8 < qword_140C4ED60 + 176 );
          }
          v9 = qword_140C4ED20;
          v10 = 8LL;
          do
          {
            v9 = __ROR8__(v9 - *v7++, qword_140C4ED28);
            v11 -= 8;
            --v10;
          }
          while ( v10 );
          for ( ; v11; --v11 )
          {
            v37 = *(unsigned __int8 *)v7;
            v7 = (_QWORD *)((char *)v7 + 1);
            v9 = __ROR8__(v9 - v37, qword_140C4ED28);
          }
          qword_140C4ED68 = v9;
          qword_140C4ED30 = sub_1402F5718() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
        }
        else
        {
          qword_140C4ED20 = 0LL;
        }
      }
      stru_140C115E0.TargetInfoAsUlong = 275;
      stru_140C115E0.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_1403DF6E0;
      stru_140C11620.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A70F90;
      stru_140C115E0.DeferredContext = 0LL;
      stru_140C115E0.DpcData = 0LL;
      stru_140C115E0.ProcessorHistory = 0LL;
      stru_140C11620.Parameter = 0LL;
      stru_140C11620.List.Flink = 0LL;
      dword_140C0B22C = 1;
      sub_1402DA7E4();
      return v6;
    }
  }
  return result;
}
