/*
 * XREFs of sub_14079296C @ 0x14079296C
 * Callers:
 *     sub_1407928B0 @ 0x1407928B0 (sub_1407928B0.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_14079296C(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  signed __int64 *v3; // rdi
  __int64 v7; // rsi
  _QWORD *i; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 result; // rax

  v3 = (signed __int64 *)(a2 + 80);
  v7 = sub_140347C10(a2 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    sub_14029F350(v3, 0, v7, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  for ( i = *(_QWORD **)(a2 + 88); i != (_QWORD *)(a2 + 88); i = (_QWORD *)*i )
  {
    v9 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( i[4] == a1 )
    {
      sub_140347810(v9 + 1);
      if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v3);
      sub_1402AFC00((ULONG_PTR)v3);
      result = 0LL;
      *a3 = v9;
      return result;
    }
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  sub_1402AFC00((ULONG_PTR)v3);
  return 3221225524LL;
}
