/*
 * XREFs of sub_1800106A8 @ 0x1800106A8
 * Callers:
 *     sub_180010834 @ 0x180010834 (sub_180010834.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800106A8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v7; // edi

  *a1 = 0LL;
  v4 = sub_18001D6AC(184LL, &unk_1801289A6);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  *(_QWORD *)v4 = &ISpectreRenderer::`vftable';
  *(_DWORD *)(v4 + 12) = 1;
  *(_QWORD *)v4 = off_18011C0E8;
  if ( qword_1801F7490 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801F7490 + 8LL))(qword_1801F7490);
  *(_QWORD *)v5 = off_18011C070;
  *(_QWORD *)(v5 + 16) = off_18011C1D0;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_QWORD *)(v5 + 88) = 0LL;
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 120) = 0LL;
  *(_QWORD *)(v5 + 128) = 0LL;
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_QWORD *)(v5 + 144) = 0LL;
  *(_QWORD *)(v5 + 152) = 0LL;
  *(_QWORD *)(v5 + 160) = 0LL;
  *(_DWORD *)(v5 + 168) = 0;
  v7 = sub_18001AB5C(v5, a2);
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v7;
}
