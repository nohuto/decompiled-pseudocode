/*
 * XREFs of sub_18004E8E0 @ 0x18004E8E0
 * Callers:
 *     sub_18004DFA0 @ 0x18004DFA0 (sub_18004DFA0.c)
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18004E968 @ 0x18004E968 (sub_18004E968.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004E8E0(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  _BYTE v6[72]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  sub_18002B024((_QWORD *)(a1 + 128), &v8);
  sub_18004E968(a1, v6);
  v4 = v6;
  do
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, a2);
    v4 += 8;
  }
  while ( v4 != &v7 );
  return sub_18002B780(a1, a2);
}
