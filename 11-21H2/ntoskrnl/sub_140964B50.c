/*
 * XREFs of sub_140964B50 @ 0x140964B50
 * Callers:
 *     sub_140A34148 @ 0x140A34148 (sub_140A34148.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407EC9DC @ 0x1407EC9DC (sub_1407EC9DC.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 */

__int64 __fastcall sub_140964B50(WCHAR *SourceString)
{
  WCHAR v1; // r12
  WCHAR *v2; // r14
  ULONG_PTR v3; // rdi
  unsigned int v5; // ebp
  __int16 v6; // ax
  WCHAR *v7; // rcx
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rsi
  _WORD *v12; // rdx
  UNICODE_STRING v13[2]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_140C54F40;
  v15 = 0;
  v5 = -1073741275;
  if ( v1 != 42 )
    v2 = SourceString;
  memset(v13, 0, sizeof(v13));
  v6 = *v2;
  DestinationString = 0LL;
  if ( v6 )
  {
    v7 = v2;
    while ( v6 != 42 && v6 != 63 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    for ( i = *(_QWORD **)(v3 + 32); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v3 + 32) )
        goto LABEL_10;
      v12 = (_WORD *)i[3];
      if ( v1 == 42 )
      {
        if ( *v12 != 42 )
          continue;
        ++v12;
      }
      if ( (unsigned int)sub_140851068((__int16 *)v2, v12) )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_8:
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  v8 = KeGetCurrentThread();
  --*((_WORD *)v8 + 242);
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( sub_1407EC9DC(v3, (__int64)v13) )
    v5 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  sub_1402AFC00(v3);
  KeLeaveCriticalRegion();
  return v5;
}
