/*
 * XREFs of KseQueryDeviceDataList @ 0x140963440
 * Callers:
 *     sub_1409F6464 @ 0x1409F6464 (sub_1409F6464.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140368A88 @ 0x140368A88 (sub_140368A88.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407EC9DC @ 0x1407EC9DC (sub_1407EC9DC.c)
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 *     sub_14085E788 @ 0x14085E788 (sub_14085E788.c)
 *     sub_1409635EC @ 0x1409635EC (sub_1409635EC.c)
 *     sub_1409637DC @ 0x1409637DC (sub_1409637DC.c)
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 */

__int64 __fastcall KseQueryDeviceDataList(WCHAR *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rsi
  __int64 v13; // rbx
  _QWORD *v15; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v16, 0, 0x44uLL);
  v15 = 0LL;
  if ( dword_140C54EF4 != 2 || (dword_140C54EF0 & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  v8 = sub_140963B40(SourceString, a2, a3, a4);
  if ( v8 == -1073741275 )
  {
    if ( (unsigned int)sub_140368A88() )
    {
      sub_1409635EC();
LABEL_13:
      v8 = sub_1407ED450(SourceString, &v15);
      if ( v8 >= 0 )
      {
        v13 = (__int64)v15;
        v8 = sub_1409637DC(v15, a2, a3, a4);
        if ( (int)sub_14085E788(SourceString, v13) < 0 )
          sub_140965070(v13);
      }
      return (unsigned int)v8;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_140C54F38;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = sub_1407EC9DC(qword_140C54F38, (__int64)v16);
    v15 = v11;
    if ( v11 )
      v8 = sub_1409637DC(v11, a2, a3, a4);
    v12 = qword_140C54F38;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C54F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    sub_1402AFC00(v12);
    KeLeaveCriticalRegion();
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)v8;
}
