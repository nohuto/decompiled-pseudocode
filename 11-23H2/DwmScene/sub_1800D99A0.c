/*
 * XREFs of sub_1800D99A0 @ 0x1800D99A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_1800D971C @ 0x1800D971C (sub_1800D971C.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 *     sub_1800DA8B4 @ 0x1800DA8B4 (sub_1800DA8B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800D99A0(__int64 a1)
{
  _QWORD *v2; // r9
  __int64 **v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rcx
  _BYTE *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  _QWORD v16[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  if ( !sub_180011DE0((_QWORD *)(a1 + 536)) )
    return 0;
  v3 = (__int64 **)(a1 + 552);
  v4 = **(_QWORD **)(a1 + 552);
  v17 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    **(_BYTE **)(v4 + 40) = 0;
    sub_18001D3F8(&v17);
    v4 = v17;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v2 + 16LL))(*v2, v16);
  v5 = (_QWORD *)v16[0];
  v6 = (_QWORD *)v16[1];
  while ( v5 != v6 )
  {
    v7 = (**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5);
    v8 = (_QWORD *)sub_1800D971C(a1, v7);
    sub_18001246C(&v14, v8);
    *v14 = 1;
    sub_1800D9AF0(a1, v5, &v14);
    if ( v15 )
      sub_180010530(v15);
    v5 += 2;
  }
  sub_1800DA8B4(v16);
  v9 = **v3;
  v17 = v9;
  while ( (__int64 *)v9 != *v3 )
  {
    if ( **(_BYTE **)(v9 + 40) )
    {
      sub_18001D3F8(&v17);
    }
    else
    {
      sub_18001D3F8(&v17);
      v11 = sub_180028C50((_QWORD *)(a1 + 552), v10);
      sub_180027C24(v12, v11);
    }
    v9 = v17;
  }
  return 1;
}
