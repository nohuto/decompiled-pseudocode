/*
 * XREFs of sub_1407EC8C4 @ 0x1407EC8C4
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_1407EC9DC @ 0x1407EC9DC (sub_1407EC9DC.c)
 *     sub_1407ECAC8 @ 0x1407ECAC8 (sub_1407ECAC8.c)
 */

__int64 __fastcall sub_1407EC8C4(WCHAR *SourceString)
{
  volatile signed __int64 *v1; // rbp
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rsi
  int v5; // edi
  PVOID v7; // rax
  __int64 v8; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]

  v1 = (volatile signed __int64 *)qword_140C54F40;
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( dword_140C54EF4 != 2 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v8 + 1] = -1073741823;
    dword_140C2A220[2 * v8] = 656075;
    if ( (dword_140D04880 & 2) != 0 )
      sub_14057D738(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    sub_140368C88(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)&v10 + 8), SourceString);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v4 = (void *)sub_1407EC9DC(v1, v9);
  if ( !v4 )
  {
    v7 = sub_1402D84BC(0x38uLL);
    v4 = v7;
    if ( !v7 || (int)sub_14075C924((__int64)v7 + 40, SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_5;
    }
    sub_1407ECAC8(v1, v4);
  }
  v5 = 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  sub_1402AFC00((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
  {
    if ( v4 )
    {
      sub_14075CDC4((__int64)v4 + 40);
      sub_1402D8494(v4);
    }
  }
  return (unsigned int)v5;
}
