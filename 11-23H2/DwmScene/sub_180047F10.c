/*
 * XREFs of sub_180047F10 @ 0x180047F10
 * Callers:
 *     sub_180048C84 @ 0x180048C84 (sub_180048C84.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180027CE8 @ 0x180027CE8 (sub_180027CE8.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_1800347E4 @ 0x1800347E4 (sub_1800347E4.c)
 *     sub_1800487D0 @ 0x1800487D0 (sub_1800487D0.c)
 *     sub_180048858 @ 0x180048858 (sub_180048858.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180047F10(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rdi
  char result; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[72]; // [rsp+40h] [rbp-58h] BYREF
  char v17; // [rsp+88h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+8h] BYREF

  sub_180029550(a1, a2);
  v18 = sub_180026650(*a2);
  v4 = v18;
  sub_180027CE8((_QWORD *)(a1 + 128), (__int64)v15, &v18);
  v5 = sub_18001246C(v14, a2);
  v7 = *v5;
  *v5 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v7;
  v8 = v5[1];
  v5[1] = *(_QWORD *)(v6 + 48);
  v9 = v14[1];
  *(_QWORD *)(v6 + 48) = v8;
  if ( v9 )
    sub_180010530(v9);
  sub_180048858(a1, v16);
  v10 = v16;
  do
  {
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10, a2);
    v10 += 8;
  }
  while ( v10 != &v17 );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
    sub_180029700(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( sub_180029664(a1, 8) )
      return sub_1800487D0(a1, 0LL);
    v13 = sub_180029630(v12);
    result = sub_1800347E4(v13, 5);
    if ( result )
      return sub_1800487D0(a1, 0LL);
  }
  return result;
}
