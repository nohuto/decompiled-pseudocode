/*
 * XREFs of sub_14074E130 @ 0x14074E130
 * Callers:
 *     sub_14074D760 @ 0x14074D760 (sub_14074D760.c)
 *     sub_14074DB0C @ 0x14074DB0C (sub_14074DB0C.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14074B7A0 @ 0x14074B7A0 (sub_14074B7A0.c)
 *     sub_14074B82C @ 0x14074B82C (sub_14074B82C.c)
 *     sub_14074D510 @ 0x14074D510 (sub_14074D510.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 */

__int64 __fastcall sub_14074E130(char *Object, char a2)
{
  __int64 *v2; // r13
  volatile signed __int64 *v5; // rdi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  __int64 v9; // r15
  PVOID v10; // r14
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rdi
  ULONG_PTR v16; // rdi
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h]

  v2 = (__int64 *)*((_QWORD *)Object + 2);
  v17 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 - 2), 0LL);
  v5 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (a2 & 1) != 0 )
    *((_DWORD *)Object + 104) |= 0x80u;
  v6 = *((_DWORD *)Object + 104);
  if ( (v6 & 0x20) == 0 )
  {
    *((_DWORD *)Object + 104) = v6 | 0x20;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Object + 352);
    sub_1402AFC00((ULONG_PTR)(Object + 352));
    v7 = *((_DWORD *)Object + 104);
    if ( (v7 & 6) == 2 )
    {
      sub_14074D510((__int64)Object);
      v7 = *((_DWORD *)Object + 104);
    }
    v8 = ((v7 >> 1) & 3) - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = *v2;
        v10 = Object;
      }
      else
      {
        v9 = v2[2];
        v10 = (PVOID)*v2;
      }
      v18 = (__int64)v10;
      if ( v9 )
        v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      if ( !v10 || ObReferenceObjectSafe((__int64)v10) )
        goto LABEL_15;
    }
    else
    {
      v9 = 0LL;
    }
    v18 = 0LL;
    v10 = 0LL;
LABEL_15:
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    sub_1402AFC00((ULONG_PTR)(v2 - 2));
    if ( v9 )
    {
      *((_QWORD *)&v17 + 1) = &v17;
      *(_QWORD *)&v17 = &v17;
      do
      {
        v11 = sub_14074E474((_DWORD)Object, v9, (int)v9 + 144, 1, (__int64)&v17);
        v12 = sub_14074E474((_DWORD)Object, v9, (int)v9 + 160, 2, (__int64)&v17) | v11;
        v13 = sub_14074E474((_DWORD)Object, v9, (int)v9 + 184, 3, (__int64)&v17) | v12;
      }
      while ( v13 | (unsigned int)sub_14074E474((_DWORD)Object, v9, (int)v9 + 208, 4, (__int64)&v17) );
      ObfDereferenceObject((PVOID)v9);
      v10 = (PVOID)v18;
      while ( 1 )
      {
        v14 = v17;
        if ( (__int128 *)v17 == &v17 )
          break;
        *(_QWORD *)&v17 = *(_QWORD *)v17;
        v16 = v14 - 80;
        *(_QWORD *)(v17 + 8) = &v17;
        sub_1407A6A34(v16);
        if ( v18 )
        {
          ExAcquirePushLockSharedEx(v18 + 352, 0LL);
          if ( (*(_DWORD *)(v18 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v16 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v18 + 352));
            sub_1402AFC00(v18 + 352);
          }
          else
          {
            *(_DWORD *)(v16 + 72) = _InterlockedIncrement((volatile signed __int32 *)Object + 100);
            *(_QWORD *)(v16 + 128) = *((_QWORD *)Object + 7);
            *(_QWORD *)(v16 + 56) = Object;
            *(_QWORD *)(v16 + 64) = v18;
            sub_14074B7A0(v18, v16);
            sub_14074B82C(v18);
          }
        }
        else
        {
          --*(_WORD *)(v16 - 30);
        }
        sub_1407A7628(v16);
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 352);
  sub_1402AFC00((ULONG_PTR)(Object + 352));
  if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 - 2);
  sub_1402AFC00((ULONG_PTR)(v2 - 2));
  return 3221225527LL;
}
