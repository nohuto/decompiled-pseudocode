/*
 * XREFs of sub_1407ABD80 @ 0x1407ABD80
 * Callers:
 *     sub_140662130 @ 0x140662130 (sub_140662130.c)
 *     sub_140663910 @ 0x140663910 (sub_140663910.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_1406657C0 @ 0x1406657C0 (sub_1406657C0.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_14066AA00 @ 0x14066AA00 (sub_14066AA00.c)
 *     sub_1407A6A74 @ 0x1407A6A74 (sub_1407A6A74.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 *     sub_140965C1C @ 0x140965C1C (sub_140965C1C.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 * Callees:
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 */

__int64 __fastcall sub_1407ABD80(__int64 a1, int a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rbx
  char v10; // r12
  signed __int64 *v11; // rdi
  signed __int64 v12; // r8
  ULONG_PTR v13; // rbx
  __int64 BugCheckParameter4; // rax
  bool v15; // zf
  __int64 v16; // rdx
  signed __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rdi
  signed __int32 v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 < 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      if ( !v20 )
        return 3221226224LL;
      v21 = sub_1407A7EB0((_QWORD *)(v20 + 40), a2 & 0x7FFFFFFF, qword_140001580);
      v22 = v21;
      if ( !v21 )
        return 3221226224LL;
      v13 = *(_QWORD *)(v21 + 24);
      sub_1407A6A34(v13);
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 40), 1, 0) )
      {
        *(_DWORD *)(v13 + 264) &= ~0x80000000;
        do
          v23 = _InterlockedIncrement(&dword_140D31300);
        while ( !v23 );
        *(_DWORD *)(v13 + 272) = v23;
        goto LABEL_25;
      }
      sub_1407A7628(v13);
      sub_1407A5A54(v22, 1);
      return 3221227272LL;
    }
    return 3221227266LL;
  }
  if ( (a2 & 0xFC000000) != 0 )
  {
    if ( !qword_140D05118 )
      return 3221227266LL;
    v8 = *(_QWORD *)(qword_140D05118 + 8 * ((unsigned __int64)(unsigned int)a2 >> 26));
  }
  else
  {
    v8 = qword_140D06CC0;
  }
  if ( !v8 )
    return 3221227266LL;
  v9 = a2 & 0x3FFFFFF;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (a2 & 0x3FC) == 0 || (v11 = (signed __int64 *)sub_140733340((unsigned int *)v8, (unsigned int)v9)) == 0LL )
  {
LABEL_31:
    sub_14025032C(v8, v9, v10);
    return 3221227266LL;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v11);
      v12 = *v11;
      if ( (*v11 & 1) != 0 )
        break;
      if ( !v12 )
        goto LABEL_31;
      sub_1407ED9FC(v8, v11, v12);
    }
  }
  while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
  v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_DWORD *)(v13 + 0x108) != a2 || a3 && *(_DWORD *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x110) != a3 )
    goto LABEL_40;
  _m_prefetchw((const void *)(v13 - 24));
  BugCheckParameter4 = *(_QWORD *)(v13 - 24);
  v15 = BugCheckParameter4 == 0;
  if ( BugCheckParameter4 <= 0 )
  {
LABEL_50:
    if ( !v15 )
      KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, BugCheckParameter4);
LABEL_40:
    _InterlockedExchangeAdd64(v11, 1uLL);
    _InterlockedOr(v24, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    return 3221227266LL;
  }
  while ( 1 )
  {
    v16 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v13 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
    if ( BugCheckParameter4 == v16 )
      break;
    if ( BugCheckParameter4 <= 0 )
    {
      v15 = BugCheckParameter4 == 0;
      goto LABEL_50;
    }
  }
  if ( BugCheckParameter4 == -1 )
    goto LABEL_40;
  ExAcquirePushLockExclusiveEx(v13 - 16, 0LL);
  *(_BYTE *)(v13 - 32) |= 1u;
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
  if ( v17 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v17);
  --*(_WORD *)(v13 - 30);
  _InterlockedExchangeAdd64(v11, 1uLL);
  _InterlockedOr(v24, 0);
  if ( *(_QWORD *)(v8 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
  if ( *(_DWORD *)(v13 + 264) != a2
    || a3 && *(_DWORD *)(v13 + 272) != a3
    || !*(_QWORD *)(v13 + 24) && !*(_QWORD *)(v13 + 16) )
  {
    sub_1407A7628(v13);
    return 3221227266LL;
  }
  if ( a1 )
  {
    if ( *(_QWORD *)(v13 + 184) == *(_QWORD *)(a1 + 16) || *(_QWORD *)(v13 + 192) == a1 )
    {
LABEL_25:
      *a5 = v13;
      return 0LL;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v13 + 16);
    if ( v19 && *(_QWORD *)(v19 + 24) == *((_QWORD *)KeGetCurrentThread() + 23) )
      goto LABEL_25;
  }
  sub_1407A7628(v13);
  return 3221225506LL;
}
