/*
 * XREFs of sub_1407A9A80 @ 0x1407A9A80
 * Callers:
 *     sub_140666C64 @ 0x140666C64 (sub_140666C64.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407A5A90 @ 0x1407A5A90 (sub_1407A5A90.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407AB750 @ 0x1407AB750 (sub_1407AB750.c)
 *     sub_1407AC020 @ 0x1407AC020 (sub_1407AC020.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 *     sub_140967BBC @ 0x140967BBC (sub_140967BBC.c)
 *     sub_140967D90 @ 0x140967D90 (sub_140967D90.c)
 */

__int64 __fastcall sub_1407A9A80(__int64 *a1)
{
  ULONG_PTR v1; // rsi
  int v2; // eax
  __int64 v4; // r13
  __int64 v5; // rbp
  int v6; // ecx
  int v7; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int16 v10; // dx
  __int16 v11; // dx
  unsigned int v12; // ecx
  signed __int64 v13; // r13
  int v14; // eax
  volatile signed __int64 *v15; // r15
  unsigned int v16; // edi
  __int64 v17; // rdi
  __int64 v18; // rax
  signed __int64 v19; // rax
  bool v20; // zf
  char v21; // cl
  int v22; // r12d
  signed __int64 BugCheckParameter4; // rcx
  __int64 v24; // r9
  struct _KTHREAD *v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+90h] [rbp+8h]
  __int16 v27; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v1 = a1[1];
  v2 = *((_DWORD *)a1 + 12);
  v4 = *a1;
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v26 = v2;
  v28 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v27 = v6;
  if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v5 + 272) )
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *((_WORD *)a1 + 27) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 352);
      sub_1402AFC00(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *((_WORD *)a1 + 26);
    v25 = CurrentThread;
    *(_WORD *)(v1 + 240) = *((_WORD *)a1 + 26) - 40;
    v10 = *((_WORD *)a1 + 27);
    *(_WORD *)(v1 + 244) = v10;
    *(_WORD *)(v1 + 246) = *((_WORD *)a1 + 28);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)((char *)CurrentThread + 1224);
    if ( (v26 & 0x10000) != 0 )
    {
      v11 = v10 & 0xDFFF;
      v12 = v6 | 0x200;
    }
    else
    {
      v11 = v10 | 0x2000;
      v12 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v12;
    *(_WORD *)(v1 + 244) = v11;
    sub_1407AB750(v1, v4);
    if ( (v26 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)CurrentThread + 175, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v13 = *(_QWORD *)(v1 + 16);
    v14 = *(_DWORD *)(v1 + 40);
    if ( v13 )
    {
      v15 = (volatile signed __int64 *)(v13 + 176);
      ExAcquirePushLockExclusiveEx(v13 + 176, 0LL);
      --*(_DWORD *)(v13 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      v13 = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      sub_1402AFC00((ULONG_PTR)v15);
      --*(_WORD *)(v1 - 30);
      v14 = *(_DWORD *)(v1 + 40);
    }
    *(_DWORD *)(v1 + 40) = v14 & 0xFFFFFFF8 | 5;
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v16 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v7 & 3));
    *(_DWORD *)(v1 + 40) = v16;
    if ( ((v16 >> 3) & 0xF) == 1 )
    {
      v17 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v17 - 16, 0LL);
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 56);
      else
        v19 = v13;
      *(_QWORD *)(v1 + 120) = v19;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 - 16), v13, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v17 - 16));
      sub_1402AFC00(v17 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      sub_1407AC020(v1);
      *(_QWORD *)(v1 + 176) = v13;
    }
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    if ( *(_QWORD *)(v1 + 144) )
      sub_1407A4E8C((PVOID)v5, v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), v13, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    sub_1402AFC00(v5 + 352);
    if ( byte_140D01161 )
      sub_140967BBC(v1);
    if ( (v26 & 0x20000) != 0 )
    {
      v20 = byte_140D01161 == 0;
      *(_QWORD *)(v1 + 32) = v25;
      a1[3] = v28;
      if ( !v20 )
        sub_140967D90(v1);
      sub_1407A7628(v1);
    }
    else
    {
      --*(_WORD *)(v1 - 30);
      *(_QWORD *)(v1 + 32) = v13;
      if ( dword_140C2A158 )
        sub_140966A84(v1);
      v21 = *(_BYTE *)(v1 - 32);
      if ( (v21 & 1) != 0
        && (v22 = 0x10000 - *(__int16 *)(v1 - 30), *(_BYTE *)(v1 - 32) = v21 & 0xFE, *(_WORD *)(v1 - 30) = v13, v22 > 0)
        && (BugCheckParameter4 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), -v22),
            BugCheckParameter4 <= 0) )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v1, 0x28uLL, BugCheckParameter4);
        sub_1407A5A90(v1, 1LL);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v1 - 16);
        sub_1402AFC00(v1 - 16);
      }
      if ( (v26 & 4) != 0 )
        a1[3] = v28;
      else
        sub_14035AD70((volatile signed __int32 *)(v28 + 1240), 1LL, 1LL, v24, 2);
    }
    if ( (v27 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
  else
  {
    sub_1407A7628(v1);
    return 3221225507LL;
  }
}
