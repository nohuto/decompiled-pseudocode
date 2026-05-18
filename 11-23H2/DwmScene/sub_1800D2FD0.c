/*
 * XREFs of sub_1800D2FD0 @ 0x1800D2FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800566D0 @ 0x1800566D0 (sub_1800566D0.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_1800568F8 @ 0x1800568F8 (sub_1800568F8.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CF088 @ 0x1800CF088 (sub_1800CF088.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800CF7CC @ 0x1800CF7CC (sub_1800CF7CC.c)
 *     sub_1800CF8FC @ 0x1800CF8FC (sub_1800CF8FC.c)
 *     sub_1800D0600 @ 0x1800D0600 (sub_1800D0600.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_1800D2FD0(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  __int64 *v6; // rax
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 **v13; // r13
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _DWORD, void **); // rbx
  __int64 v16; // rsi
  __int64 *v17; // rax
  int v18; // ebx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **); // rbx
  _QWORD *v21; // rax
  char v22; // r12
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rdi
  __int64 *v30; // rax
  void *v32; // [rsp+40h] [rbp-39h] BYREF
  int v33; // [rsp+48h] [rbp-31h]
  __int64 v34; // [rsp+50h] [rbp-29h] BYREF
  __int64 v35; // [rsp+58h] [rbp-21h]
  _QWORD v36[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  __int64 v38; // [rsp+78h] [rbp-1h]
  __int64 v39; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+Fh]
  __int64 v41; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v42; // [rsp+E8h] [rbp+6Fh] BYREF
  const void *v43; // [rsp+F0h] [rbp+77h]
  int v44; // [rsp+F8h] [rbp+7Fh]

  v44 = a4;
  v43 = a3;
  LODWORD(v41) = 0;
  if ( *a2 )
  {
    v6 = sub_1800566F0(*a2, &v39, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v35 = 0LL;
    v6 = &v34;
    v7 = 2;
    v8 = 0LL;
  }
  v36[0] = v8;
  v9 = v6[1];
  v36[1] = v9;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v35 )
      sub_180010530(v35);
  }
  if ( (v7 & 1) != 0 && v40 )
    sub_180010530(v40);
  v10 = -((unsigned int)sub_1800568F8(v8) != 2);
  sub_1800CF8FC(&v34, v36);
  LODWORD(v41) = 1;
  v11 = *(_QWORD *)(*a2 + 128);
  v12 = (__int64 *)(a1 + 144);
  v13 = (__int64 **)(a1 + 144);
  if ( v11 && *(_DWORD *)(v11 + 12) == 1 )
  {
    v14 = *v12;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v14 + 112LL);
    v16 = v34;
    v17 = sub_1800CF0C8(v34, &v42);
    v18 = v15(v14, *v17, 0LL, (unsigned int)(v10 + 4), 0, &v32);
    sub_18000E72C(&v42);
  }
  else
  {
    v16 = v34;
    LODWORD(v41) = sub_1800566D0(v34);
    v19 = *v12;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v19 + 112LL);
    v21 = sub_1800CF088(v16, &v42);
    v18 = v20(v19, *v21, 0LL, (unsigned int)(v10 + 4), 0, &v32);
    sub_18000E72C(&v42);
  }
  sub_180011C50(a1 + 72, &v37);
  sub_1800CF7CC(&v39, &v37);
  if ( v38 )
    sub_180010530(v38);
  sub_1800C7750(v39, v18);
  v22 = 0;
  if ( v18 < 0 )
  {
    sub_18001DB68(&stru_1801C8548, 3, "Failed to update Texture with HRESULT error 0x%.8x", v18);
  }
  else
  {
    v23 = sub_180056744(v16);
    sub_1800D0600(v23);
    v24 = sub_180056848(v16);
    v26 = (int)v41 * v33 * v24 / v25;
    if ( v26 == v44 )
    {
      sub_18000FF54(v32, v26, v43, v26);
      v22 = 1;
    }
    v27 = *sub_1800CF0C8(v16, &v41);
    sub_18000E72C(&v41);
    v28 = *v13;
    v29 = **v13;
    if ( v27 )
      v30 = sub_1800CF0C8(v16, &v41);
    else
      v30 = sub_1800CF088(v16, &v41);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v29 + 120))(v28, *v30, 0LL);
    sub_18000E72C(&v41);
  }
  if ( v40 )
    sub_180010530(v40);
  if ( v35 )
    sub_180010530(v35);
  if ( v9 )
    sub_180010530(v9);
  return v22;
}
