/*
 * XREFs of sub_1407730FC @ 0x1407730FC
 * Callers:
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_140777B74 @ 0x140777B74 (sub_140777B74.c)
 * Callees:
 *     sub_14025A078 @ 0x14025A078 (sub_14025A078.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402DE684 @ 0x1402DE684 (sub_1402DE684.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406E4E14 @ 0x1406E4E14 (sub_1406E4E14.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

__int64 __fastcall sub_1407730FC(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  sub_1402DE844(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 776 || v3 == 781 )
    {
      sub_14025A078(*(_QWORD *)(v2 + 32));
      sub_14077198C(
        *(__int64 *)&qword_140D00AC0,
        *(_QWORD *)(v2 + 48),
        1,
        0LL,
        0LL,
        (__int64)qword_14000E1A0,
        0,
        0LL,
        0,
        0);
      sub_1406E4E14(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *(_DWORD *)(a1 + 32) == 783 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    sub_1402D25CC(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  sub_1402DE684(a1);
  return *(unsigned int *)(v2 + 392);
}
