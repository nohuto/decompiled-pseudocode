/*
 * XREFs of sub_1409F12F0 @ 0x1409F12F0
 * Callers:
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140883B44 @ 0x140883B44 (sub_140883B44.c)
 *     sub_1409F2650 @ 0x1409F2650 (sub_1409F2650.c)
 *     sub_1409F2898 @ 0x1409F2898 (sub_1409F2898.c)
 */

__int64 __fastcall sub_1409F12F0(ULONG_PTR BugCheckParameter2, int a2, __int64 **a3)
{
  __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rsi
  unsigned int v16; // edx
  __int64 *v17; // rcx
  __int64 **v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 *v23; // r14
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rax
  unsigned int v28; // eax
  __int64 **v29; // rcx
  __int64 *v30; // [rsp+50h] [rbp+8h] BYREF

  v30 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v8 = 0;
  v9 = *(_QWORD *)(BugCheckParameter2 + 1152);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v10 = *(_DWORD *)(v9 + 20);
  v11 = a2 + *(_DWORD *)(v9 + 16);
  if ( v11 >= (7 * v10) >> 3 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 40);
      if ( v10 < v12 )
      {
        v13 = 2 * v10;
        if ( !v10 )
          v13 = *(_DWORD *)(BugCheckParameter2 + 36);
        while ( (7 * v13) >> 3 < v11 )
          v13 *= 2;
        if ( v13 >= v12 )
          v13 = *(_DWORD *)(BugCheckParameter2 + 40);
        v12 = v13;
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 1184) >= *(_DWORD *)(BugCheckParameter2 + 44) )
      {
        goto LABEL_28;
      }
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      sub_1402AFC00(BugCheckParameter2);
      sub_1402F9540((__int64)KeGetCurrentThread());
      if ( v3 )
        sub_1409F2898(v3);
      v3 = (__int64 *)sub_1409F2650(v12);
      if ( !v3 )
        goto LABEL_30;
      v14 = KeGetCurrentThread();
      --*((_WORD *)v14 + 242);
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v15 = *(__int64 **)(BugCheckParameter2 + 1152);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v16 = *((_DWORD *)v15 + 5);
      if ( a2 + *((_DWORD *)v15 + 4) < (7 * v16) >> 3 )
        goto LABEL_29;
      if ( v16 >= v12 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1152) = v3;
      v3 = v15;
      v17 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) != v15 )
        goto LABEL_35;
      v18 = (__int64 **)v15[1];
      if ( *v18 != v15 )
        goto LABEL_35;
      *v18 = v17;
      v17[1] = (__int64)v18;
      v19 = *(_QWORD **)(BugCheckParameter2 + 1176);
      v20 = *(_QWORD **)(BugCheckParameter2 + 1152);
      if ( *v19 != BugCheckParameter2 + 1168 )
        goto LABEL_35;
      *v20 = BugCheckParameter2 + 1168;
      v21 = 0LL;
      v20[1] = v19;
      *v19 = v20;
      *(_QWORD *)(BugCheckParameter2 + 1176) = v20;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 16LL) = *((_DWORD *)v15 + 4);
            (unsigned int)v21 < *((_DWORD *)v15 + 5);
            v21 = (unsigned int)(v21 + 1) )
      {
        v22 = v15[3];
        v23 = (__int64 *)(v22 + 8 * v21);
        if ( *v23 )
        {
          sub_140883B44(*(_QWORD *)(BugCheckParameter2 + 1152), (unsigned __int8 *)(v22 + 8 * v21), &v30);
          *v30 = *v23;
          if ( (*((_DWORD *)v15 + 4))-- == 1 )
            break;
        }
      }
      if ( v8 < 0x14 )
      {
        v25 = *(_QWORD *)(BugCheckParameter2 + 1152);
        ++v8;
        v10 = *(_DWORD *)(v25 + 20);
        v11 = a2 + *(_DWORD *)(v25 + 16);
        if ( v11 >= (7 * v10) >> 3 )
          continue;
      }
LABEL_28:
      if ( !v3 )
        goto LABEL_30;
      goto LABEL_29;
    }
    v28 = *(_DWORD *)(BugCheckParameter2 + 1184);
    if ( v28 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_29:
      *a3 = v3;
      goto LABEL_30;
    }
    *(_QWORD *)(BugCheckParameter2 + 1152) = v3;
    *(_DWORD *)(BugCheckParameter2 + 1184) = v28 + 1;
    v29 = *(__int64 ***)(BugCheckParameter2 + 1176);
    if ( *v29 != (__int64 *)(BugCheckParameter2 + 1168) )
LABEL_35:
      __fastfail(3u);
    *v3 = BugCheckParameter2 + 1168;
    v3[1] = (__int64)v29;
    *v29 = v3;
    *(_QWORD *)(BugCheckParameter2 + 1176) = v3;
    if ( *(_DWORD *)(BugCheckParameter2 + 1184) == 2 )
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1160), 0, 0);
  }
LABEL_30:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v26 = KeGetCurrentThread();
    --*((_WORD *)v26 + 242);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  return *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 16LL) < (unsigned int)(7
                                                                                   * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152)
                                                                                               + 20LL)) >> 3
       ? ((unsigned int)(7 * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 20LL)) >> 3)
       - *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 16LL)
       : 0;
}
