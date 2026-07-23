/*
 * XREFs of sub_140662E08 @ 0x140662E08
 * Callers:
 *     sub_140662130 @ 0x140662130 (sub_140662130.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_14074DEF4 @ 0x14074DEF4 (sub_14074DEF4.c)
 *     sub_14074EB48 @ 0x14074EB48 (sub_14074EB48.c)
 *     sub_1407A6CE4 @ 0x1407A6CE4 (sub_1407A6CE4.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 *     sub_1407AD8F0 @ 0x1407AD8F0 (sub_1407AD8F0.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14066238C @ 0x14066238C (sub_14066238C.c)
 *     sub_140663348 @ 0x140663348 (sub_140663348.c)
 *     sub_1406633A8 @ 0x1406633A8 (sub_1406633A8.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     sub_14074B7A0 @ 0x14074B7A0 (sub_14074B7A0.c)
 *     sub_14074B82C @ 0x14074B82C (sub_14074B82C.c)
 *     sub_1407A6FD8 @ 0x1407A6FD8 (sub_1407A6FD8.c)
 *     sub_1407A7064 @ 0x1407A7064 (sub_1407A7064.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 */

__int64 __fastcall sub_140662E08(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  __int64 v5; // r15
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // ebp
  BOOL v12; // r14d
  __int64 *v13; // r15
  ULONG_PTR v14; // rcx
  __int64 *v15; // r12
  int v16; // ebp
  __int64 *v17; // r15
  __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  volatile signed __int64 *v26; // rbp
  int v27; // eax
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  int v30; // [rsp+80h] [rbp+8h]
  __int64 v31; // [rsp+88h] [rbp+10h]
  int v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v3 = *(_DWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 16);
  v31 = v5;
  v7 = v3 & 7;
  v8 = v3 & 0x80;
  v30 = v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    v11 = v3 & 0x78;
    v12 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v12) = v11 == 16;
      if ( v8 )
        goto LABEL_44;
      v15 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v15 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 16 )
        {
          v9 = *v15;
          v10 = v15[1];
        }
        else
        {
          v9 = a1;
          v10 = a1;
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v15 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15 - 2);
      v14 = (ULONG_PTR)(v15 - 2);
    }
    else
    {
      LOBYTE(v12) = v11 == 8;
      if ( v8 )
        goto LABEL_44;
      v13 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 8 )
        {
          v9 = v13[2];
          v10 = v9;
        }
        else
        {
          v9 = *v13;
          v10 = v13[1];
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13 - 2);
      v14 = (ULONG_PTR)(v13 - 2);
    }
    sub_1402AFC00(v14);
    goto LABEL_42;
  }
  v16 = v3 & 0x78;
  v12 = v16 == 8;
  if ( !v8 && v5 )
  {
    v17 = *(__int64 **)(a2 + 184);
    if ( !v17 )
    {
LABEL_43:
      v5 = v31;
      goto LABEL_44;
    }
    ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
    if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
    {
      if ( v16 == 8 )
      {
        v9 = v17[2];
        v10 = v9;
      }
      else
      {
        v9 = *v17;
        v10 = v17[1];
      }
      if ( v9 )
        v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      if ( v10 )
        v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
    }
    if ( _InterlockedCompareExchange64(v17 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17 - 2);
    sub_1402AFC00((ULONG_PTR)(v17 - 2));
    v12 = v16 == 8;
LABEL_42:
    LOBYTE(a3) = v32;
    v7 = v30;
    goto LABEL_43;
  }
LABEL_44:
  if ( !v12 )
  {
    if ( v5 && (v7 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v18 = 0LL;
      v19 = 0;
    }
    else
    {
      v19 = 1073741870;
      v18 = 1LL;
    }
    if ( (a3 & 1) != 0 && (_DWORD)v18 )
      goto LABEL_90;
LABEL_59:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    sub_1406633A8(a2, v18);
    *(_DWORD *)(a2 + 40) |= 0x8200u;
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    _InterlockedOr(v29, 0);
    sub_1407A7064(a2);
    sub_140663348(a2);
    v21 = *(_QWORD *)(a2 + 208);
    v22 = 0LL;
    if ( v21 )
    {
      PsReleaseProcessWakeCounter(v21, *(unsigned int *)(a2 + 264));
      v22 = 0LL;
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v23 = *(_QWORD *)(a2 + 216);
    if ( v23 )
    {
      PsReleaseProcessWakeCounter(v23, *(unsigned int *)(a2 + 264));
      v22 = 0LL;
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v24 = *(_QWORD *)(a2 + 32);
    if ( v24 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v24 + 1400), 0LL) == a2 )
      {
        *(_WORD *)(a2 - 30) -= 2;
        *(_QWORD *)(a2 + 32) = 0LL;
        sub_14035AD70((volatile signed __int32 *)(v24 + 1240), 1LL, 1LL, v20, 2);
      }
    }
    else if ( v9 && v10 )
    {
      if ( !v12 && (v32 & 2) == 0 )
      {
LABEL_87:
        v27 = *(_DWORD *)(a2 + 40);
        if ( (v27 & 0x2000) != 0 && (v27 & 7) == 3 )
          sub_1407A6FD8(a2, v22);
        goto LABEL_90;
      }
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
      if ( (*(_DWORD *)(v9 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v9 + 352));
        sub_1402AFC00(v9 + 352);
      }
      else
      {
        ++*(_WORD *)(a2 - 30);
        *(_QWORD *)(a2 + 64) = v9;
        *(_QWORD *)(a2 + 56) = v10;
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v10 + 56);
        sub_14074B7A0(v9, a2);
        sub_14074B82C(v9);
      }
      v5 = v31;
    }
    if ( v12 && (v32 & 0x10000) != 0 && v5 )
    {
      v25 = *(_DWORD *)(a2 + 40) & 7;
      if ( v25 == 3 )
      {
        sub_1407A6FD8(a2, v22);
      }
      else
      {
        if ( v25 == 4 )
        {
          v26 = (volatile signed __int64 *)(v5 + 200);
          ExAcquirePushLockExclusiveEx(v5 + 200, 0LL);
          --*(_DWORD *)(v5 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v26 = (volatile signed __int64 *)(v5 + 136);
          ExAcquirePushLockExclusiveEx(v5 + 136, 0LL);
          sub_14066238C(v5, a2);
        }
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v26);
        sub_1402AFC00((ULONG_PTR)v26);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_87;
  }
  if ( !v5 || v7 != 3 || (v18 = 1LL, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v18 = 0LL;
  v19 = 259;
  if ( (a3 & 1) == 0 || (_DWORD)v18 )
    goto LABEL_59;
LABEL_90:
  *(_DWORD *)(a2 + 40) &= ~0x8000u;
  sub_1407A7628(a2);
  if ( v9 )
    ObfDereferenceObject((PVOID)v9);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  return v19;
}
