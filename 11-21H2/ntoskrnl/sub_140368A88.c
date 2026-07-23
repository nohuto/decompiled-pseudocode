/*
 * XREFs of sub_140368A88 @ 0x140368A88
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407ECB78 @ 0x1407ECB78 (sub_1407ECB78.c)
 */

__int64 sub_140368A88()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // esi
  struct _KTHREAD *v2; // rdi
  unsigned int v3; // ecx
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A640, 0LL);
  v1 = 0;
  if ( (int)sub_1407ECB78(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140C2A688 )
    {
      qword_140C2A688 = 0LL;
      v1 = 1;
    }
    else
    {
      qword_140C2A688 = 0LL;
    }
    if ( (int)sub_1407ECB78(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140C2A6C0 )
      {
        qword_140C2A6C0 = 0LL;
        v1 = 1;
      }
      else
      {
        qword_140C2A6C0 = 0LL;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A640, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A640);
  v2 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C2A640 - qword_140C50630 < 0x8000000000LL )
    v3 = sub_140287F30(*((_QWORD *)v2 + 23));
  else
    v3 = -1;
  _disable();
  v4 = (__int64)v2 + 1696;
  v5 = 0;
  while ( (*(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C2A640 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v4 + 18)
       || (*(_DWORD *)v4 & 1) != 0
       || *(_DWORD *)(v4 + 8) != v3 )
  {
    ++v5;
    v4 += 96LL;
    if ( v5 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(v4 + 18) = 0;
  if ( v4 )
  {
    if ( *(__int64 *)v4 < 0 )
    {
      *(_BYTE *)v4 |= 2u;
      _enable();
      sub_14034EE30(v4);
      _disable();
    }
    v6 = *(_DWORD *)(v4 + 88);
    *(_DWORD *)(v4 + 88) = 0;
    *(_BYTE *)(v4 + 17) = 0;
    *(_QWORD *)v4 = 0LL;
    *((_BYTE *)v2 + 792) |= 1 << *(_BYTE *)(v4 + 16);
    _enable();
    if ( v6 )
      sub_14022B568((ULONG_PTR)v2, (__int64)&qword_140C2A640, v6);
    goto LABEL_19;
  }
LABEL_21:
  if ( (*((_DWORD *)v2 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&qword_140C2A640, v3, 0LL);
  _enable();
LABEL_19:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v1;
}
