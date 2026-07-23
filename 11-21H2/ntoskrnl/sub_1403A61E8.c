/*
 * XREFs of sub_1403A61E8 @ 0x1403A61E8
 * Callers:
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403A0690 @ 0x1403A0690 (sub_1403A0690.c)
 *     sub_1403A6628 @ 0x1403A6628 (sub_1403A6628.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1403A61E8(__int64 a1, char a2)
{
  char v4; // r13
  __int64 v5; // rbp
  POOL_TYPE v6; // r12d
  PVOID result; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // r15
  struct _KPRCB *v18; // rax
  USHORT v19; // di
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  ULONG_PTR PoolWithTag; // rbx
  char v22; // di
  struct _KTHREAD *v23; // rdi
  __int64 v24; // rbx
  unsigned int v25; // ecx
  int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-64h]
  unsigned int v33; // [rsp+3Ch] [rbp-5Ch]
  __int64 v34; // [rsp+40h] [rbp-58h]
  _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-40h] BYREF

  Affinity = 0LL;
  v4 = 0;
  PreviousAffinity = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v5) = 0;
  v6 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = ExAllocatePoolWithTag(v6, 0x80uLL, 0x61537845u);
  v8 = (ULONG_PTR)result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *(_QWORD *)(v8 + 56) = v8 + 64;
  *(_QWORD *)(v8 + 48) = 512LL;
  *(_QWORD *)(v8 + 16) = a1;
  v9 = 0LL;
  *(_DWORD *)(v8 + 36) = 512;
  CurrentThread = KeGetCurrentThread();
  _disable();
  v11 = *((unsigned __int8 *)CurrentThread + 792);
  v12 = -1;
  if ( *((_BYTE *)CurrentThread + 792) || (v11 = sub_14029F6A8((__int64)&qword_140C10DA0, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v13, v11);
    *((_BYTE *)CurrentThread + 792) = v11 & ~(1 << v13);
    _enable();
    v9 = (__int64)CurrentThread + 96 * v13 + 1696;
    if ( (unsigned __int64)&qword_140C10DA0 - qword_140C50630 < 0x8000000000LL )
      v14 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v14 = -1;
    *(_DWORD *)(v9 + 8) = v14;
    *(_QWORD *)v9 = (unsigned __int64)&qword_140C10DA0 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C10DA0, 0LL) )
    sub_14029F120(&qword_140C10DA0, v9, (__int64)&qword_140C10DA0);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v15 = sub_1403A6628(qword_140C10DA8, v8, *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL));
  *(_DWORD *)(v8 + 32) = v15;
  if ( v15 == -1 )
    goto LABEL_55;
  v16 = dword_140D06884;
  v33 = dword_140D06884;
  if ( !MaximumProcessorCount )
  {
LABEL_24:
    PoolWithTag = 0LL;
    v22 = 1;
    goto LABEL_25;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v17 + qword_140C10DB0);
    v18 = (unsigned int)v5 >= v16 ? KeGetCurrentPrcb() : (struct _KPRCB *)sub_140348800(v5);
    v19 = *(_WORD *)(*((_QWORD *)v18 + 24) + 138LL);
    if ( a2 )
      break;
    PoolWithTag = sub_140349710(v6, 0x1000uLL, 1632860229LL, v19 | 0x80000000, 0);
    if ( !PoolWithTag )
      goto LABEL_54;
LABEL_19:
    if ( (unsigned int)sub_1403A6628(v34, PoolWithTag, v19) == -1 )
      goto LABEL_54;
    LODWORD(v5) = v5 + 1;
    v17 += 8LL;
    if ( (unsigned int)v5 >= MaximumProcessorCount )
      goto LABEL_24;
    v16 = v33;
  }
  KeQueryNodeActiveAffinity(v19, &Affinity, 0LL);
  if ( v4 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v4 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(v6, 0x1000uLL, 0x61537845u);
  if ( PoolWithTag )
    goto LABEL_19;
LABEL_54:
  v22 = 0;
LABEL_25:
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTag )
    sub_140348B40(PoolWithTag);
  if ( !v22 )
  {
LABEL_55:
    v27 = *(_DWORD *)(v8 + 32);
    if ( v27 != -1 )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          v5 = (unsigned int)(v5 - 1);
          v28 = *(_QWORD *)(qword_140C10DB0 + 8 * v5);
          v29 = *(_DWORD *)(v8 + 32);
          _BitScanReverse(&v30, v29);
          sub_140348B40(*(_QWORD *)(*(_QWORD *)(v28 + 8LL * (v30 - 2)) + 8LL * (v29 ^ (1 << v30)) + 8));
          sub_1403A0690(v28, *(_DWORD *)(v8 + 32));
        }
        while ( (_DWORD)v5 );
        v27 = *(_DWORD *)(v8 + 32);
      }
      sub_1403A0690(qword_140C10DA8, v27);
    }
    sub_140348B40(v8);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C10DA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C10DA0);
  v23 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C10DA0 - qword_140C50630 < 0x8000000000LL )
    v12 = sub_140287F30(*((_QWORD *)v23 + 23));
  _disable();
  v24 = (__int64)v23 + 1696;
  v25 = 0;
  while ( (*(_QWORD *)v24 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C10DA0 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v24 + 18)
       || (*(_DWORD *)v24 & 1) != 0
       || *(_DWORD *)(v24 + 8) != v12 )
  {
    ++v25;
    v24 += 96LL;
    if ( v25 >= 6 )
      goto LABEL_46;
  }
  *(_BYTE *)(v24 + 18) = 0;
  if ( v24 )
  {
    if ( *(__int64 *)v24 < 0 )
    {
      *(_BYTE *)v24 |= 2u;
      _enable();
      sub_14034EE30(v24);
      _disable();
    }
    v26 = *(_DWORD *)(v24 + 88);
    *(_DWORD *)(v24 + 88) = 0;
    *(_BYTE *)(v24 + 17) = 0;
    *(_QWORD *)v24 = 0LL;
    *((_BYTE *)v23 + 792) |= 1 << *(_BYTE *)(v24 + 16);
    _enable();
    if ( v26 )
      sub_14022B568((ULONG_PTR)v23, (__int64)&qword_140C10DA0, v26);
    return (PVOID)v8;
  }
LABEL_46:
  if ( (*((_DWORD *)v23 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v23, (ULONG_PTR)&qword_140C10DA0, v12, 0LL);
  _enable();
  return (PVOID)v8;
}
