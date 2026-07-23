/*
 * XREFs of sub_1405DDEE4 @ 0x1405DDEE4
 * Callers:
 *     sub_1405DDBE0 @ 0x1405DDBE0 (sub_1405DDBE0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403BA6E0 @ 0x1403BA6E0 (sub_1403BA6E0.c)
 *     sub_1405DFA70 @ 0x1405DFA70 (sub_1405DFA70.c)
 */

__int64 __fastcall sub_1405DDEE4(const UNICODE_STRING *a1, ULONG_PTR a2, ULONG_PTR *a3, _BYTE *a4)
{
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rsi
  ULONG_PTR i; // rbx

  v7 = sub_1403BA6E0(a1, 0LL);
  if ( v7 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23C48, 0LL);
    for ( i = qword_140C23B70; (ULONG_PTR *)i != &qword_140C23B70; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) >= 3u
        && *(_QWORD *)(i + 112)
        && (unsigned __int8)sub_1405DFA70(i, 1uLL, a2)
        && *(_BYTE *)(a2 + 12) )
      {
        v9 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23C48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23C48);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C48);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      *a3 = v9;
      v7 = 0;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
