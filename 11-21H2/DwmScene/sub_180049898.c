/*
 * XREFs of sub_180049898 @ 0x180049898
 * Callers:
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800690B8 @ 0x1800690B8 (sub_1800690B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180049898(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  _QWORD *v9; // rax
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // r11
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = *(__int64 **)(*(_QWORD *)(a1 + 200) + 8LL);
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_WORD *)v6 + 14) >= a3 )
      v6 = (__int64 *)*v6;
    else
      v6 = (__int64 *)v6[2];
  }
  if ( sub_1800122C0(a2) )
  {
    *(_DWORD *)(v7 + 32) = 2;
    v9 = (_QWORD *)sub_1800690B8(*(_QWORD *)(v8 + 136), v14);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v9 + 56LL))(*v9, v10, a2);
  }
  else
  {
    *(_DWORD *)(v7 + 32) = 3;
    v11 = (_QWORD *)sub_1800690B8(*(_QWORD *)(v8 + 136), v14);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v11 + 64LL))(*v11, v12, a4);
  }
  sub_180010910((__int64)v14);
  return sub_180010910((__int64)a2);
}
