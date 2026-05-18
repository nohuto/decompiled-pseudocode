/*
 * XREFs of sub_1800F0750 @ 0x1800F0750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800F05B4 @ 0x1800F05B4 (sub_1800F05B4.c)
 *     sub_1800F0E90 @ 0x1800F0E90 (sub_1800F0E90.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800F0750(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, __int64 *, __int64); // r15
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v5 = sub_1800F05B4(a2);
  v7 = v5;
  v15 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      LODWORD(v15) = 2;
    }
    else if ( v6 == 2 )
    {
      LODWORD(v15) = 4;
    }
  }
  else
  {
    LODWORD(v15) = 3;
  }
  v8 = sub_1800DA968(v5, &v16);
  v9 = *v8;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)*v8 + 192LL);
  v11 = *(_QWORD *)(a1 + 96);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v10(v9, &v15, a1 + 96);
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  sub_1800DD668(v7, v12);
  if ( v12 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  sub_1800F0E90(a1);
  return 1;
}
