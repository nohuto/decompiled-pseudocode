/*
 * XREFs of CcUnmapFileOffsetFromSystemCache @ 0x140282730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcUnmapFileOffsetFromSystemCache(__int64 a1, int a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v3 + 4) )
    KeBugCheckEx(0x34u, 0x1599uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return sub_1402853B0(v3, a2, a3, 0, 0, 1);
}
