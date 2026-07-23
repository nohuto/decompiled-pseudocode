/*
 * XREFs of sub_140663FAC @ 0x140663FAC
 * Callers:
 *     sub_1406640F0 @ 0x1406640F0 (sub_1406640F0.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407A4E68 @ 0x1407A4E68 (sub_1407A4E68.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_140663FAC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  signed __int64 *v6; // rbx
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  void *v9; // rsi
  ULONG_PTR v10; // rbx
  __int64 v11; // rax

  v3 = *(_QWORD **)(a1 + 16);
  v6 = v3 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v3 - 2), 0LL);
  v7 = (_DWORD *)*v3;
  v8 = 0;
  if ( !*v3 )
    goto LABEL_12;
  v9 = (void *)v3[1];
  if ( !v9 )
    goto LABEL_12;
  if ( (v7[104] & 0x1000) == 0 )
    v9 = v7;
  if ( ObReferenceObjectSafe((__int64)v9) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    v10 = *(_QWORD *)(a2 + 16);
    sub_1407A6A34(v10);
    v11 = sub_1407A4E68(v10, v9);
    if ( v11 )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(v11 + 40);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(v11 + 48);
    }
    else
    {
      v8 = -1073741670;
    }
    sub_1407B0F40(v10);
    ObfDereferenceObject(v9);
    return v8;
  }
  else
  {
LABEL_12:
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    return 3221225527LL;
  }
}
