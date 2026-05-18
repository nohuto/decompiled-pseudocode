/*
 * XREFs of sub_180015520 @ 0x180015520
 * Callers:
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 * Callees:
 *     sub_180015C04 @ 0x180015C04 (sub_180015C04.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180015520(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v7; // esi
  __int64 v8; // rax

  *a1 = 0LL;
  v4 = sub_18001D6AC(48LL, &unk_1801289A6);
  v5 = (_QWORD *)v4;
  if ( !v4 )
    return 2147942414LL;
  *(_QWORD *)v4 = &ISpectreNode::`vftable';
  *(_DWORD *)(v4 + 12) = 1;
  *(_QWORD *)v4 = off_18011C4F8;
  if ( qword_1801F7490 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801F7490 + 8LL))(qword_1801F7490);
  v5[3] = 0LL;
  *v5 = off_18011C558;
  v5[2] = off_18011C610;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v7 = sub_180015C04(v5, a2);
  v8 = *v5;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(v8 + 8))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(v8 + 16))(v5);
    return (unsigned int)v7;
  }
}
