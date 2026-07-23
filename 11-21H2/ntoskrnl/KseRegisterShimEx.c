/*
 * XREFs of KseRegisterShimEx @ 0x140825A70
 * Callers:
 *     KseRegisterShim @ 0x140825A50 (KseRegisterShim.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_140825C20 @ 0x140825C20 (sub_140825C20.c)
 *     sub_140825C94 @ 0x140825C94 (sub_140825C94.c)
 *     sub_140825DCC @ 0x140825DCC (sub_140825DCC.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v7; // ebx
  _QWORD *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  char v12; // bl
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C54EF4 != 2 )
    return 3221225473LL;
  v18 = 0LL;
  v7 = sub_140825DCC(&v18);
  if ( v7 >= 0 )
  {
    if ( (unsigned int)sub_140825C94(retaddr, v18, a1) )
    {
      v8 = sub_1402D84BC(0x28uLL);
      if ( v8 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
        if ( (unsigned int)sub_140825C20(&dword_140C54EF0, *(_QWORD *)(a1 + 8), v10, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C54F20);
          sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v7 = -1073741771;
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v16] = -1073741771;
          dword_140C2A220[2 * v16] = 131310;
          if ( (dword_140D04880 & 2) != 0 )
            sub_14057D738(2LL, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          sub_140368C88(2LL, (__int64)"KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          sub_1402D8494(v8);
        }
        else
        {
          *((_DWORD *)v8 + 6) = 0;
          v8[2] = a1;
          *((_DWORD *)v8 + 7) = a3;
          v8[4] = a4;
          v11 = (_QWORD *)qword_140C54F08;
          if ( *(_UNKNOWN **)qword_140C54F08 != &unk_140C54F00 )
            __fastfail(3u);
          *v8 = &unk_140C54F00;
          v8[1] = v11;
          *v11 = v8;
          qword_140C54F08 = (__int64)v8;
          v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
            ExfTryToWakePushLock(&qword_140C54F20);
          sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v7 = 0;
          *(_QWORD *)(a1 + 24) = &unk_140C54F28;
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
          HIDWORD(qword_140C2A440[v13]) = 0;
          LODWORD(qword_140C2A440[v13]) = 131353;
          if ( (dword_140D04880 & 1) != 0 )
            sub_14057D738(2LL, "KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
          sub_1403C09C8(2);
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741823;
      v15 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A224[2 * v15] = -1073741823;
      dword_140C2A220[2 * v15] = 131277;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      sub_140368C88(2LL, (__int64)"KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v18 )
    sub_1402D8494(v18);
  return (unsigned int)v7;
}
