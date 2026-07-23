/*
 * XREFs of sub_14075C7BC @ 0x14075C7BC
 * Callers:
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14075C460 @ 0x14075C460 (sub_14075C460.c)
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 *     sub_14075CE94 @ 0x14075CE94 (sub_14075CE94.c)
 *     sub_1409646B4 @ 0x1409646B4 (sub_1409646B4.c)
 */

__int64 __fastcall sub_14075C7BC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, _DWORD *a6)
{
  int v10; // edi
  __int64 v12; // rcx
  _QWORD *v13; // r14
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF

  v21 = 0LL;
  v20 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v22 = 0LL;
  if ( !(unsigned int)sub_14075CE94(&dword_140C54EF0, a3, &v22) )
  {
    v10 = sub_14075CC14(&dword_140C54EF0, a1, &v21, &v20);
    if ( v10 == -1073741275 )
      v10 = sub_14075C460(a2, a3, a4, &v21, &v20);
    if ( v10 < 0 )
      goto LABEL_5;
    v13 = v21;
    v14 = v20;
    v10 = sub_1409646B4(v21, v20);
    if ( v10 >= 0 )
    {
      v15 = sub_1402D84BC(0x28uLL);
      v16 = v15;
      if ( v15 )
      {
        v15[4] = v13;
        *((_DWORD *)v15 + 6) = v14;
        v15[2] = a3;
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
        v18 = (_QWORD *)qword_140C54F18;
        if ( *(_UNKNOWN **)qword_140C54F18 != &unk_140C54F10 )
          __fastfail(3u);
        *v16 = &unk_140C54F10;
        v16[1] = v18;
        *v18 = v16;
        qword_140C54F18 = (__int64)v16;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C54F20);
        sub_1402AFC00((ULONG_PTR)&qword_140C54F20);
        KeLeaveCriticalRegion();
LABEL_5:
        *a5 = v21;
        *a6 = v20;
        goto LABEL_6;
      }
      v10 = -1073741670;
    }
    if ( !v13 )
      return (unsigned int)v10;
    if ( v14 )
      sub_14075C424(v13, v14);
LABEL_6:
    if ( v10 >= 0 )
    {
      v19 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
      HIDWORD(qword_140C2A440[v19]) = 0;
      LODWORD(qword_140C2A440[v19]) = 459112;
      if ( (dword_140D04880 & 1) != 0 )
        sub_14057D738(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
      sub_1403C09C8(7);
    }
    return (unsigned int)v10;
  }
  v12 = v22;
  *a5 = *(_QWORD *)(v22 + 32);
  *a6 = *(_DWORD *)(v12 + 24);
  return 0LL;
}
