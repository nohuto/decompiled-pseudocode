/*
 * XREFs of sub_180017EE4 @ 0x180017EE4
 * Callers:
 *     sub_180018030 @ 0x180018030 (sub_180018030.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18001D4DC @ 0x18001D4DC (sub_18001D4DC.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     sub_1800B623C @ 0x1800B623C (sub_1800B623C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180017EE4(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v7; // edi

  *a1 = 0LL;
  v4 = sub_18001D6AC(200LL, &unk_1801289A6);
  v5 = (_QWORD *)v4;
  if ( !v4 )
    return 2147942414LL;
  *(_QWORD *)v4 = &ISpectreWorld::`vftable';
  *(_DWORD *)(v4 + 12) = 1;
  *(_QWORD *)v4 = off_18011CA10;
  if ( qword_1801F7490 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801F7490 + 8LL))(qword_1801F7490);
  *v5 = off_18011C698;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  sub_1800B623C(v5 + 6);
  v7 = sub_18001D4DC(v5, a2);
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  return (unsigned int)v7;
}
