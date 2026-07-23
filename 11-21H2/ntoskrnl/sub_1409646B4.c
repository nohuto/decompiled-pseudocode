/*
 * XREFs of sub_1409646B4 @ 0x1409646B4
 * Callers:
 *     sub_14075C7BC @ 0x14075C7BC (sub_14075C7BC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D548 @ 0x14057D548 (sub_14057D548.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_140825C20 @ 0x140825C20 (sub_140825C20.c)
 *     sub_140825DCC @ 0x140825DCC (sub_140825DCC.c)
 *     sub_140964124 @ 0x140964124 (sub_140964124.c)
 */

__int64 __fastcall sub_1409646B4(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int v4; // r14d
  int v5; // r13d
  __int64 v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // r15
  _QWORD *v14; // r12
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 *v18; // r12
  __int64 v19; // rax
  struct _KTHREAD *v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // r15
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+68h] [rbp+10h]
  int *v29; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v29 = 0LL;
  v4 = 0;
  v5 = 0;
  v28 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
  if ( a2 )
  {
    v9 = a1 + 9;
    v10 = a1;
    v11 = a2;
    do
    {
      if ( (unsigned int)sub_140825C20((__int64)&dword_140C54EF0, v10, v8, v10 + 9) == 1 )
      {
        v12 = *(_DWORD *)(*v9 + 24LL);
        if ( !v12 )
          v5 = 1;
        *(_DWORD *)(*v9 + 24LL) = v12 + 1;
      }
      else
      {
        *v9 = 0LL;
        v5 = 1;
        v28 = 1;
      }
      v10 += 10;
      v9 += 10;
      --v11;
    }
    while ( v11 );
    v4 = v28;
    v3 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C54F20);
  sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
  KeLeaveCriticalRegion();
  if ( !v4 )
    goto LABEL_25;
  v13 = 0LL;
  if ( !a2 )
  {
LABEL_18:
    v15 = KeGetCurrentThread();
    --*((_WORD *)v15 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
    v17 = 0LL;
    if ( a2 )
    {
      v18 = a1 + 9;
      while ( (unsigned int)sub_140825C20((__int64)&dword_140C54EF0, &a1[10 * v17], v16, &a1[10 * v17 + 9]) )
      {
        v19 = *v18;
        v17 = (unsigned int)(v17 + 1);
        v18 += 10;
        ++*(_DWORD *)(v19 + 24);
        if ( (unsigned int)v17 >= a2 )
          goto LABEL_22;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C54F20);
      sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
      KeLeaveCriticalRegion();
      v3 = -1073740782;
      v26 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A224[2 * v26] = -1073740782;
      dword_140C2A220[2 * v26] = 459244;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v17]));
      sub_140368C88(6LL, (__int64)"KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v17]));
      goto LABEL_37;
    }
LABEL_22:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C54F20);
    sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
    KeLeaveCriticalRegion();
LABEL_25:
    if ( v5 )
    {
      v3 = sub_140825DCC(&v29);
      if ( v3 < 0 )
        goto LABEL_37;
      v20 = KeGetCurrentThread();
      --*((_WORD *)v20 + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
      v21 = 0LL;
      if ( a2 )
      {
        v22 = a1 + 9;
        while ( 1 )
        {
          v3 = sub_140964124((__int64)v29, *(int **)(*(_QWORD *)(*v22 + 16LL) + 48LL));
          if ( v3 < 0 )
            break;
          v21 = (unsigned int)(v21 + 1);
          v22 += 10;
          if ( (unsigned int)v21 >= a2 )
            goto LABEL_31;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C54F20);
        sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
        KeLeaveCriticalRegion();
        v27 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
        dword_140C2A224[2 * v27] = v3;
        dword_140C2A220[2 * v27] = 459292;
        if ( (dword_140D04880 & 2) != 0 )
          sub_14057D738(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(a1[10 * v21]),
            v3);
        sub_140368C88(
          6LL,
          (__int64)"KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(a1[10 * v21]),
          (unsigned int)v3);
        goto LABEL_37;
      }
LABEL_31:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C54F20);
      sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
      KeLeaveCriticalRegion();
    }
    v23 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v23]) = 0;
    LODWORD(qword_140C2A440[v23]) = 459306;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
    sub_1403C09C8(6);
    goto LABEL_37;
  }
  v14 = a1 + 9;
  while ( 1 )
  {
    if ( !*v14 )
    {
      v3 = sub_14057D548((__int64)&a1[10 * v13]);
      if ( v3 < 0 )
        break;
    }
    v13 = (unsigned int)(v13 + 1);
    v14 += 10;
    if ( (unsigned int)v13 >= a2 )
      goto LABEL_18;
  }
  v25 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
  dword_140C2A224[2 * v25] = v3;
  dword_140C2A220[2 * v25] = 459215;
  if ( (dword_140D04880 & 2) != 0 )
    sub_14057D738(6LL, "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n", LODWORD(a1[10 * v13]), v3);
  sub_140368C88(
    6LL,
    (__int64)"KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
    LODWORD(a1[10 * v13]),
    (unsigned int)v3);
LABEL_37:
  sub_1402D8494(v29);
  return (unsigned int)v3;
}
