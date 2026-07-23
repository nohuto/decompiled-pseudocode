/*
 * XREFs of sub_14040BAF8 @ 0x14040BAF8
 * Callers:
 *     sub_140400F64 @ 0x140400F64 (sub_140400F64.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14040D3C8 @ 0x14040D3C8 (sub_14040D3C8.c)
 *     _guard_dispatch_icall_nop @ 0x14041AF50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_14040BAF8(_DWORD *a1, __int64 a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  int v7; // esi
  int v12; // eax

  v7 = a1[1];
  _misaligned_access();
  v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140006968 + (*a1 & 0x380LL)))(
          a1,
          a2,
          a6,
          a7);
  return sub_14040D3C8(v12, v7, a3, a4, a5);
}
