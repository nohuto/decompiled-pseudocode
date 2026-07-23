/*
 * XREFs of KseUnregisterShim @ 0x140963EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_140825C20 @ 0x140825C20 (sub_140825C20.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  __int64 v5; // r8
  unsigned int v6; // ebp
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  void **v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C54EF4 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
  if ( (unsigned int)sub_140825C20((__int64)&dword_140C54EF0, *(_QWORD **)(a1 + 8), v5, &v13) )
  {
    if ( *((_DWORD *)v13 + 6) )
    {
      v6 = -1073741790;
      v7 = v13;
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A224[2 * v8] = -1073741790;
      dword_140C2A220[2 * v8] = 131453;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(
          3LL,
          "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(_DWORD **)(a1 + 8),
          (_DWORD)v7);
      sub_140368C88(
        3LL,
        (__int64)"KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v7);
      *((_DWORD *)v7 + 7) |= 4u;
    }
    else
    {
      v9 = (_QWORD *)*v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v10 = (void **)v13[1], *v10 != v13) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      v4 = 1;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
      HIDWORD(qword_140C2A440[v11]) = 0;
      LODWORD(qword_140C2A440[v11]) = 131470;
      if ( (dword_140D04880 & 1) != 0 )
        sub_14057D738(3LL, "KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      sub_1403C09C8(3);
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741772;
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A224[2 * v12] = -1073741772;
    dword_140C2A220[2 * v12] = 131482;
    if ( (dword_140D04880 & 2) != 0 )
      sub_14057D738(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    sub_140368C88(3LL, (__int64)"KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C54F20);
  sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v4 )
    sub_1402D8494(v13);
  return v6;
}
