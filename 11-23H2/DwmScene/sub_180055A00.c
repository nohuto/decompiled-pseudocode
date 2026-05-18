/*
 * XREFs of sub_180055A00 @ 0x180055A00
 * Callers:
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 * Callees:
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_1800347E4 @ 0x1800347E4 (sub_1800347E4.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_1800563E8 @ 0x1800563E8 (sub_1800563E8.c)
 *     sub_180056BB4 @ 0x180056BB4 (sub_180056BB4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180055A00(__int64 a1, __int64 *a2)
{
  char result; // al
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result )
  {
    v10 = sub_180026650(*a2);
    v5 = v10;
    v6 = sub_1800435C8(a1 + 112, (__int64)&v10);
    if ( v6 == *(_QWORD *)(a1 + 112) || (result = sub_180011DD0((_QWORD *)(v6 + 40))) != 0 )
    {
      result = sub_180029550(a1, a2);
      v7 = *(_QWORD *)(a1 + 136);
      if ( v7 )
      {
        sub_1800563E8(a1, v7, *a2);
        sub_180029700(a1, v5);
        if ( sub_180029664(a1, 8) )
          return sub_180056BB4(a1 + 136, 0LL);
        v9 = sub_180029630(v8);
        result = sub_1800347E4(v9, 1);
        if ( result )
          return sub_180056BB4(a1 + 136, 0LL);
      }
    }
  }
  return result;
}
