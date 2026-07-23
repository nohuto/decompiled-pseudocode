/*
 * XREFs of sub_1406CBFF0 @ 0x1406CBFF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1406CC024 @ 0x1406CC024 (sub_1406CC024.c)
 */

__int64 __fastcall sub_1406CBFF0(__int64 a1, __int64 a2)
{
  sub_1406CC024(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CF5E70, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x100u);
  }
  return 0LL;
}
