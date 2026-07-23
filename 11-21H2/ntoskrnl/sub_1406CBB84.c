/*
 * XREFs of sub_1406CBB84 @ 0x1406CBB84
 * Callers:
 *     sub_1406CBA90 @ 0x1406CBA90 (sub_1406CBA90.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A5530 @ 0x1407A5530 (sub_1407A5530.c)
 *     sub_1407A5668 @ 0x1407A5668 (sub_1407A5668.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6950 @ 0x1407A6950 (sub_1407A6950.c)
 *     sub_1407A7378 @ 0x1407A7378 (sub_1407A7378.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 *     sub_1407A7464 @ 0x1407A7464 (sub_1407A7464.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

__int64 __fastcall sub_1406CBB84(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  _OWORD *v6; // rax
  ULONG_PTR v7; // rdi
  void *v8; // r14
  int v9; // ebx
  ULONG_PTR v10; // rbx
  int v11; // eax
  int v12; // esi
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v17; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  v6 = (_OWORD *)sub_1407A73B0(qword_140001580, 48LL, 1LL);
  v7 = (ULONG_PTR)v6;
  if ( !v6 )
    return 3221225626LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  v8 = (void *)*((_QWORD *)KeGetCurrentThread() + 23);
  v9 = sub_1407A7464(v8, 792LL);
  if ( v9 >= 0 )
  {
    v9 = sub_1407A49B4(&v17, a2, 1LL);
    if ( v9 >= 0 )
    {
      ObfReferenceObjectWithTag(v8, 0x63706C41u);
      v10 = v17;
      *(_QWORD *)(v17 + 48) = v8;
      *(_QWORD *)(v7 + 24) = v10;
      *(_QWORD *)(v7 + 32) = a2;
      *(_QWORD *)(v10 + 96) = v7;
      v11 = sub_1407A7B98(*(_QWORD *)(v7 + 24), a2, 0LL);
      *(_DWORD *)(v7 + 40) = 1;
      v12 = v11;
      sub_1407A7F84(v7);
      sub_1407A7628(v10);
      if ( v12 < 0 )
      {
LABEL_12:
        sub_1407A5A54(v7);
        return (unsigned int)v12;
      }
      v13 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        sub_1402AFC00((ULONG_PTR)(Object + 44));
        v12 = -1073741769;
        goto LABEL_12;
      }
      sub_1407A7F84(v7);
      ExAcquirePushLockExclusiveEx(v7 - 16, 0LL);
      *(_BYTE *)(v7 - 32) |= 4u;
      v14 = Object[2] + 40;
      v18 = v7;
      *(_QWORD *)(v7 + 8) = v14;
      v15 = sub_1407A5530(Object[2] + 40, &v18);
      *(_QWORD *)(v7 + 16) = v15;
      if ( v15 != -1 )
      {
        *(_QWORD *)v7 = Object;
        ObfReferenceObject(Object);
        sub_1407A6950(Object, v7);
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        sub_1402AFC00((ULONG_PTR)(Object + 44));
        *a3 = *(_QWORD *)(v7 + 16);
        sub_1407A5668(v7);
        v12 = 0;
        goto LABEL_12;
      }
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      sub_1402AFC00((ULONG_PTR)(Object + 44));
      *(_QWORD *)(v7 + 8) = 0LL;
      sub_1407A5668(v7);
      sub_1407A5A54(v7);
      return 3221225626LL;
    }
    sub_1407A7378(v8, 792LL);
  }
  sub_1407A5A54(v7);
  return (unsigned int)v9;
}
