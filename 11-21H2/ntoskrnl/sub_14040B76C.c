/*
 * XREFs of sub_14040B76C @ 0x14040B76C
 * Callers:
 *     sub_140400DE4 @ 0x140400DE4 (sub_140400DE4.c)
 * Callees:
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 *     _guard_dispatch_icall_nop @ 0x14041AF50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_14040B76C(__int64 a1, _DWORD *a2, void *a3, _DWORD *a4, __int64 a5)
{
  sub_14040B1B0((void *)(a1 + 32), *(_DWORD *)(a1 + 4), a2 + 16, 0LL, a3, a4);
  return (*(__int64 (__fastcall **)(_DWORD *, void *, _DWORD *, __int64))((char *)off_140006960 + (*a2 & 0x380LL)))(
           a2,
           a3,
           a4,
           a5);
}
