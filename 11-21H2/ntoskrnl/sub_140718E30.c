/*
 * XREFs of sub_140718E30 @ 0x140718E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_140721B0C @ 0x140721B0C (sub_140721B0C.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_140718E30(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // al
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  __int128 v24; // [rsp+50h] [rbp-58h] BYREF
  __int128 v25; // [rsp+60h] [rbp-48h] BYREF
  _OWORD v26[2]; // [rsp+70h] [rbp-38h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v26, 0x20000uLL);
  sub_140347770((__int64)&v25);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v24 + 1) = &v24;
    *(_QWORD *)&v24 = &v24;
    *((_QWORD *)&v23 + 1) = &v23;
    *(_QWORD *)&v23 = &v23;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    sub_140AB4370();
    sub_140AB42D0(*(_QWORD *)(a2 + 8));
    v9 = sub_140AB45A0(a2, 0LL);
    v10 = *(_QWORD *)(a2 + 8);
    if ( v9 )
    {
      sub_140AB4300(v10);
      sub_140AB4260(v20, v19, v21, v22);
    }
    else
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v10 + 32) + 1680LL, 0LL);
      v13 = *(_QWORD *)(a2 + 16);
      if ( v13 && *(_QWORD *)(v13 + 16) != v13 + 16 )
        sub_14071C288(v13, v11, v12, 267, 0, (__int64)&v23, (__int64)&v24);
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14 + 1680);
      sub_1402AFC00(v14 + 1680);
      sub_140AB4300(*(_QWORD *)(a2 + 8));
      sub_140AB4260(v16, v15, v17, v18);
      sub_140721B0C(&v23);
      sub_140719010(&v24);
    }
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( qword_140D3B008 )
  {
    LOBYTE(v6) = 27;
    sub_14042A5E0(v6, v26);
  }
  return sub_14022EA30((__int64 *)&v25);
}
