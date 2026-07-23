/*
 * XREFs of sub_14069B48C @ 0x14069B48C
 * Callers:
 *     sub_14069B200 @ 0x14069B200 (sub_14069B200.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14069B58C @ 0x14069B58C (sub_14069B58C.c)
 */

__int64 __fastcall sub_14069B48C(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  signed __int64 *v9; // rdi
  _DWORD *v10; // rbx
  int v11; // edi
  int v12; // esi
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v7 = sub_14069B58C(a1);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (signed __int64 *)(v7 + 352);
  ExAcquirePushLockSharedEx(v7 + 352, 0LL);
  v10 = 0LL;
  if ( (v8[3] & 1) == 0 )
    v10 = (_DWORD *)v8[3];
  if ( v10 )
    ObfReferenceObjectWithTag(v10, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  sub_1402AFC00((ULONG_PTR)v9);
  ObfDereferenceObject(v8);
  if ( !v10 )
    return 3221225485LL;
  v11 = v10[272];
  v12 = sub_140287F30((__int64)v10);
  ObfDereferenceObjectWithTag(v10, 0x63706C41u);
  result = a3 < 8 ? 0xC0000004 : 0;
  if ( a3 >= 8 )
  {
    *a2 = v12;
    a2[1] = v11;
  }
  if ( a4 )
    *a4 = 8;
  return result;
}
