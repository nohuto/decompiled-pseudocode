/*
 * XREFs of sub_1409AD180 @ 0x1409AD180
 * Callers:
 *     sub_140724E14 @ 0x140724E14 (sub_140724E14.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1403DF20C @ 0x1403DF20C (sub_1403DF20C.c)
 *     sub_1406C8984 @ 0x1406C8984 (sub_1406C8984.c)
 */

_QWORD *__fastcall sub_1409AD180(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  ULONG_PTR v8; // r14
  __int64 v9; // rax
  __int64 **v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 + 520);
  v3 = *(_QWORD *)(a1 + 520);
  v4 = a1 + 576;
  v6 = 0LL;
  if ( v3 != 1 )
    v6 = v4;
  v7 = sub_1406C8984(v6, 0LL);
  --*((_WORD *)CurrentThread + 242);
  v8 = qword_140D3CBC8 + 24LL * v7;
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  if ( v3 == 1 )
  {
    if ( a1 == qword_140D3CCF8 )
      qword_140D3CCF8 = 0LL;
  }
  else
  {
    v9 = *v2;
    if ( *v2 )
    {
      if ( *(__int64 **)(v9 + 8) != v2 || (v10 = (__int64 **)v2[1], *v10 != v2) )
        __fastfail(3u);
      *v10 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
  }
  return sub_1403DF20C((__int64)CurrentThread, v8);
}
