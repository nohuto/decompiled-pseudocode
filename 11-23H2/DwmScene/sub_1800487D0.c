/*
 * XREFs of sub_1800487D0 @ 0x1800487D0
 * Callers:
 *     sub_180047F10 @ 0x180047F10 (sub_180047F10.c)
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_180048858 @ 0x180048858 (sub_180048858.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800487D0(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  _BYTE v6[72]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  sub_180028EE8((__int64 *)(a1 + 128), &v8);
  sub_180048858(a1, v6);
  v4 = v6;
  do
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, a2);
    v4 += 8;
  }
  while ( v4 != &v7 );
  return sub_1800295A0(a1, a2);
}
