/*
 * XREFs of sub_180017AAC @ 0x180017AAC
 * Callers:
 *     sub_180017BD4 @ 0x180017BD4 (sub_180017BD4.c)
 * Callees:
 *     sub_1800142E4 @ 0x1800142E4 (sub_1800142E4.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180017AAC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v7; // edi
  __int64 v8; // rax

  *a1 = 0LL;
  v4 = sub_18001D6AC(56LL, &unk_1801289A6);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  *(_QWORD *)v4 = &ISpectreMesh::`vftable';
  *(_DWORD *)(v4 + 12) = 1;
  *(_QWORD *)v4 = off_18011CB50;
  if ( qword_1801F7490 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801F7490 + 8LL))(qword_1801F7490);
  *(_QWORD *)v5 = off_18011C668;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 1065353216;
  *(_DWORD *)(v5 + 48) = 1065353216;
  *(_DWORD *)(v5 + 52) = 1065353216;
  v7 = sub_1800142E4(v5, a2);
  v8 = *(_QWORD *)v5;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(v8 + 8))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(v8 + 16))(v5);
    return (unsigned int)v7;
  }
}
