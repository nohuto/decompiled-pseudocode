/*
 * XREFs of sub_1406EAFE4 @ 0x1406EAFE4
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14075CE94 @ 0x14075CE94 (sub_14075CE94.c)
 */

__int64 __fastcall sub_1406EAFE4(__int64 a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  int *v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  int v14; // ecx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rbx
  void *v22; // rcx
  __int64 v23; // rax
  void *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C54EF4 != 2 )
    return 3221225659LL;
  if ( (dword_140C54EF0 & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( sub_140359DE0(v2) )
    return 3221225659LL;
  if ( (unsigned int)sub_14075CE94(&dword_140C54EF0, v2, &v26) && v26 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
    v5 = (_QWORD *)v26;
    v6 = 0LL;
    v7 = (int *)(v26 + 24);
    v8 = *(_DWORD *)(v26 + 24);
    if ( v8 )
    {
      do
      {
        v9 = *(_QWORD *)(v5[4] + 80 * v6 + 72);
        if ( (*(_DWORD *)(v9 + 28) & 4) == 0 && *(_QWORD *)(*(_QWORD *)(v9 + 16) + 32LL) )
          sub_14042A5E0(*(_QWORD *)(a1 + 48), v9);
        v8 = *v7;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *v7 );
    }
    v10 = 0LL;
    if ( v8 )
    {
      do
      {
        v11 = *(__int64 **)(v5[4] + 80 * v10 + 72);
        if ( !*((_DWORD *)v11 + 6) )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v12] = -1073740768;
          dword_140C2A220[2 * v12] = 460173;
          if ( (dword_140D04880 & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x58Du, 0LL);
        }
        v13 = *((_DWORD *)v11 + 7);
        v14 = *((_DWORD *)v11 + 6) - 1;
        *((_DWORD *)v11 + 6) = v14;
        if ( (v13 & 4) != 0 && !v14 )
        {
          v15 = (__int64 *)*v11;
          if ( *(__int64 **)(*v11 + 8) != v11 )
            goto LABEL_43;
          v16 = (__int64 **)v11[1];
          if ( *v16 != v11 )
            goto LABEL_43;
          *v16 = v15;
          v15[1] = (__int64)v16;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *v7 );
      v5 = (_QWORD *)v26;
    }
    v17 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v18 = (_QWORD *)v5[1], (_QWORD *)*v18 != v5) )
LABEL_43:
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C54F20);
    sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
    KeLeaveCriticalRegion();
    v19 = 0LL;
    if ( *v7 )
    {
      v20 = v26;
      do
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 80 * v19 + 72);
        v22 = *(void **)(v21 + 32);
        if ( v22 )
          ObfDereferenceObject(v22);
        if ( (*(_DWORD *)(v21 + 28) & 4) != 0 && !*(_DWORD *)(v21 + 24) )
        {
          sub_1402D8494((void *)v21);
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
          HIDWORD(qword_140C2A440[v23]) = 0;
          LODWORD(qword_140C2A440[v23]) = 460230;
          if ( (dword_140D04880 & 1) != 0 )
            sub_14057D738(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v21);
          sub_1403C09C8(5);
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < *v7 );
    }
    v24 = (void *)v26;
    sub_14075C424(*(_QWORD *)(v26 + 32));
    sub_1402D8494(v24);
    v25 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v25]) = 0;
    LODWORD(qword_140C2A440[v25]) = 460238;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(5LL, "KSE: Shimmed driver unload notification processed\n");
    sub_1403C09C8(5);
  }
  return 0LL;
}
