/*
 * XREFs of sub_180073C28 @ 0x180073C28
 * Callers:
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180073B4C @ 0x180073B4C (sub_180073B4C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180073C28(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rsi
  __int64 *v6; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD **)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  while ( v2 != v4 )
  {
    v6 = sub_18001246C(v7, v2);
    sub_180073B4C((_QWORD *)a1, v6);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v2 + 8LL))(
      *v2,
      a2,
      *(unsigned int *)(a1 + 8),
      *(unsigned int *)(a1 + 12),
      *(_DWORD *)(a1 + 20),
      *(_DWORD *)(a1 + 28));
    v2 += 2;
  }
}
