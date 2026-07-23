/*
 * XREFs of sub_1403EB11C @ 0x1403EB11C
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall sub_1403EB11C(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140C0DB68 )
  {
    xmmword_140C0DD20 = *(_OWORD *)a2;
    xmmword_140C0DD30 = *(_OWORD *)(a2 + 16);
    qword_140C0DD40 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140C094D0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140C0DB70;
    *(_QWORD *)(a2 + 32) = qword_140C0DB78;
    result = &xmmword_140C0DD20;
    qword_140C0DB48 = (__int64)&xmmword_140C0DD20;
    dword_140C0DB58 = 40;
    byte_140D0194C = 1;
  }
  return result;
}
