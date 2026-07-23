/*
 * XREFs of sub_140798234 @ 0x140798234
 * Callers:
 *     sub_140791110 @ 0x140791110 (sub_140791110.c)
 *     sub_1407920F0 @ 0x1407920F0 (sub_1407920F0.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_140794AD0 @ 0x140794AD0 (sub_140794AD0.c)
 *     sub_14079982C @ 0x14079982C (sub_14079982C.c)
 *     sub_14085EB0C @ 0x14085EB0C (sub_14085EB0C.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140798300 @ 0x140798300 (sub_140798300.c)
 */

__int64 __fastcall sub_140798234(__int64 a1, __int64 a2, __int64 *a3)
{
  signed __int64 *v3; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx

  v3 = (signed __int64 *)(a1 + 48);
  v7 = sub_140347C10(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    sub_14029F350(v3, 0, v7, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = sub_140798300(a1, a2);
  v9 = v8;
  if ( v8 )
    v9 = -(__int64)(sub_140347810((struct _EX_RUNDOWN_REF *)(v8 + 8)) != 0) & v8;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  sub_1402AFC00((ULONG_PTR)v3);
  if ( !v9 )
    return 3221225524LL;
  *a3 = v9;
  return 0LL;
}
