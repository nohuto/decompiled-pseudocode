/*
 * XREFs of sub_1408486C4 @ 0x1408486C4
 * Callers:
 *     sub_1403CE444 @ 0x1403CE444 (sub_1403CE444.c)
 *     sub_140848440 @ 0x140848440 (sub_140848440.c)
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B1E364 @ 0x140B1E364 (sub_140B1E364.c)
 *     sub_140B1E3C4 @ 0x140B1E3C4 (sub_140B1E3C4.c)
 *     sub_140B1E41C @ 0x140B1E41C (sub_140B1E41C.c)
 *     sub_140B1E47C @ 0x140B1E47C (sub_140B1E47C.c)
 *     sub_140B1E4DC @ 0x140B1E4DC (sub_140B1E4DC.c)
 *     sub_140B1E534 @ 0x140B1E534 (sub_140B1E534.c)
 *     sub_140B1E58C @ 0x140B1E58C (sub_140B1E58C.c)
 *     sub_140B1E5EC @ 0x140B1E5EC (sub_140B1E5EC.c)
 *     sub_140B1E6B0 @ 0x140B1E6B0 (sub_140B1E6B0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14084881C @ 0x14084881C (sub_14084881C.c)
 *     sub_140A0282C @ 0x140A0282C (sub_140A0282C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408486C4(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 v12; // rbp
  _QWORD *v13; // rax
  char v14; // si

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = sub_140347C10((__int64)&qword_140D3CCA0, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D3CCA0, 0LL);
  v11 = v9;
  if ( v10 )
    sub_14029F120(&qword_140D3CCA0, v9, (__int64)&qword_140D3CCA0);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = sub_14084881C(*a3, a3[1]);
  if ( v12 )
  {
    v6 = -1073741771;
    sub_140A0282C(v7);
    sub_140A0282C(v12);
  }
  else
  {
    v13 = (_QWORD *)qword_140D3CF40;
    if ( *(__int64 **)qword_140D3CF40 != &qword_140D3CF38 )
      __fastfail(3u);
    *v7 = &qword_140D3CF38;
    v7[1] = v13;
    *v13 = v7;
    qword_140D3CF40 = (__int64)v7;
    *a1 = v7;
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CCA0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140D3CCA0);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CCA0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v6;
}
