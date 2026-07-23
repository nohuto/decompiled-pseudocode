/*
 * XREFs of sub_1409AD870 @ 0x1409AD870
 * Callers:
 *     KeStartDynamicProcessor @ 0x140961810 (KeStartDynamicProcessor.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1405E081C @ 0x1405E081C (sub_1405E081C.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1409AEB50 @ 0x1409AEB50 (sub_1409AEB50.c)
 */

char sub_1409AD870()
{
  struct _KTHREAD *CurrentThread; // rdi
  _OWORD *v1; // rbx
  __int64 v2; // rcx
  int *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 *v11; // rax
  __int64 *v12; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B150, 0LL);
  v1 = &unk_140C0D660;
  if ( !(unsigned int)KeIsSubsetAffinityEx((__int64)dword_140D06E40, (__int64)&unk_140C0D660) )
  {
    v2 = 2LL;
    v3 = dword_140D06E40;
    do
    {
      v4 = *((_OWORD *)v3 + 1);
      *v1 = *(_OWORD *)v3;
      v5 = *((_OWORD *)v3 + 2);
      v1[1] = v4;
      v6 = *((_OWORD *)v3 + 3);
      v1[2] = v5;
      v7 = *((_OWORD *)v3 + 4);
      v1[3] = v6;
      v8 = *((_OWORD *)v3 + 5);
      v1[4] = v7;
      v9 = *((_OWORD *)v3 + 6);
      v1[5] = v8;
      v10 = *((_OWORD *)v3 + 7);
      v3 += 32;
      v1[6] = v9;
      v1 += 8;
      *(v1 - 1) = v10;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)v1 = *(_QWORD *)v3;
    while ( 1 )
    {
      v11 = sub_1407B6B90((_QWORD *)v2);
      v12 = v11;
      if ( !v11 )
        break;
      sub_1409AEB50(CurrentThread, v11, dword_140D06E40);
      v2 = (__int64)v12;
    }
  }
  return sub_1405E081C((__int64)CurrentThread);
}
