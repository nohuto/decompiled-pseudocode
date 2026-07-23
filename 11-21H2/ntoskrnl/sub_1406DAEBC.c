/*
 * XREFs of sub_1406DAEBC @ 0x1406DAEBC
 * Callers:
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1409B0030 @ 0x1409B0030 (sub_1409B0030.c)
 */

__int64 __fastcall sub_1406DAEBC(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx

  v4 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(_QWORD *)(a1 + 528);
  if ( !v5 || (v4 = sub_1409B0030(v5, a2), v4 >= 0) )
    _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x4000000u);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  return (unsigned int)v4;
}
