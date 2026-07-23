/*
 * XREFs of sub_14074DD38 @ 0x14074DD38
 * Callers:
 *     sub_14074DB0C @ 0x14074DB0C (sub_14074DB0C.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14074DEF4 @ 0x14074DEF4 (sub_14074DEF4.c)
 *     sub_14074E060 @ 0x14074E060 (sub_14074E060.c)
 *     sub_14074EB48 @ 0x14074EB48 (sub_14074EB48.c)
 */

__int64 __fastcall sub_14074DD38(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  signed __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx

  sub_14074DEF4(a1, a1 + 144, 1LL);
  sub_14074DEF4(a1, a1 + 160, 2LL);
  sub_14074DEF4(a1, a1 + 184, 3LL);
  sub_14074DEF4(a1, a1 + 208, 4LL);
  sub_14074E060(a1, 0LL);
  result = *(_DWORD *)(a1 + 416) & 6;
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = v3 - 2;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v3 - 2), 0LL);
    v5 = *v3;
    v6 = v3[2];
    if ( v5 )
      v5 &= -(__int64)(ObReferenceObjectSafe(v5) != 0);
    if ( v6 )
      v6 &= -(__int64)(ObReferenceObjectSafe(v6) != 0);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    result = sub_1402AFC00((ULONG_PTR)v4);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 416) & 0x40) == 0 && v6 && (*(_DWORD *)(v6 + 416) & 8) == 0 )
      {
        sub_14074EB48(v6, v5, v5 + 144, 1LL);
        sub_14074EB48(v6, v5, v5 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          sub_14074EB48(v6, v5, v5 + 184, 3LL);
        sub_14074EB48(v6, v5, v5 + 208, 4LL);
        sub_14074E060(v5, a1);
      }
      result = ObfDereferenceObject((PVOID)v5);
    }
    if ( v6 )
      return ObfDereferenceObject((PVOID)v6);
  }
  return result;
}
