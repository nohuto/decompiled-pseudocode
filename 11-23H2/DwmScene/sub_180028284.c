/*
 * XREFs of sub_180028284 @ 0x180028284
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180027CE8 @ 0x180027CE8 (sub_180027CE8.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180028284(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r15d
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h]
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF

  sub_180029870(a1, 1LL);
  sub_180029870(v5, (unsigned int)(v4 + 2));
  sub_18001246C(&v14, (_QWORD *)(*a2 + 112LL));
  v6 = v14 != 0 ? 0x80 : 0;
  if ( v15 )
    sub_180010530(v15);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_1800283EC(a1, v9, v8, v7, v6, 0LL);
  sub_18001246C(&v14, (_QWORD *)(*a2 + 96LL));
  sub_180055AE8(v10, &v14);
  if ( *(_QWORD *)(a1 + 152) )
  {
    sub_18001246C(&v14, (_QWORD *)(*a2 + 112LL));
    sub_180055AE8(v11, &v14);
  }
  v16 = *(_DWORD *)(*a2 + 88LL);
  v12 = sub_180027CE8((_QWORD *)(a1 + 120), (__int64)&v14, &v16);
  return sub_1800124F8((__int64 *)(*(_QWORD *)v12 + 40LL), a2);
}
