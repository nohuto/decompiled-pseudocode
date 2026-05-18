/*
 * XREFs of sub_18008C230 @ 0x18008C230
 * Callers:
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180015630 @ 0x180015630 (sub_180015630.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_1800869BC @ 0x1800869BC (sub_1800869BC.c)
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008C230(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]

  *(_DWORD *)(a1 + 96) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 8);
  v6 = a2 + 16;
  sub_1800869BC((_QWORD *)(a1 + 112), (_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 40);
  sub_180015630((_QWORD *)(a1 + 160), a3);
  if ( sub_180029664(a1, 1) )
  {
    v8 = sub_180029630(v7);
    sub_18003655C(v8, &v15);
    v9 = 0;
    v10 = v15;
    if ( (v16 - v15) >> 4 )
    {
      v11 = 0LL;
      do
      {
        sub_18001246C(&v13, (_QWORD *)(v10 + 16 * v11));
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
          sub_18008BEC0(a1, &v13);
        if ( v14 )
          sub_180010530(v14);
        ++v9;
        v10 = v15;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((v16 - v15) >> 4) );
    }
    sub_180013300((__int64)&v15);
  }
  return sub_18007E7DC(v6);
}
