/*
 * XREFs of sub_1800D11F0 @ 0x1800D11F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_1800566D0 @ 0x1800566D0 (sub_1800566D0.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_1800568D8 @ 0x1800568D8 (sub_1800568D8.c)
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CF088 @ 0x1800CF088 (sub_1800CF088.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800CF7CC @ 0x1800CF7CC (sub_1800CF7CC.c)
 *     sub_1800D0600 @ 0x1800D0600 (sub_1800D0600.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800D11F0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 *v5; // rax
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r12
  int v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  int v14; // r10d
  unsigned int v15; // r13d
  size_t v16; // r11
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // r9d
  int v22; // r10d
  size_t v23; // r11
  unsigned int v24; // ebx
  unsigned int v25; // edi
  int v26; // r14d
  unsigned int v27; // r9d
  unsigned int v29; // [rsp+48h] [rbp-69h]
  int v30; // [rsp+4Ch] [rbp-65h]
  int v31; // [rsp+50h] [rbp-61h]
  unsigned int v32; // [rsp+54h] [rbp-5Dh]
  size_t v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h] BYREF
  __int64 v36; // [rsp+70h] [rbp-41h]
  __int64 v37; // [rsp+78h] [rbp-39h]
  __int64 v38; // [rsp+80h] [rbp-31h] BYREF
  __int64 v39; // [rsp+88h] [rbp-29h] BYREF
  __int64 v40; // [rsp+90h] [rbp-21h]
  __int64 v41; // [rsp+98h] [rbp-19h]
  __int64 v42; // [rsp+A0h] [rbp-11h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-9h]
  int v44; // [rsp+ACh] [rbp-5h]
  __int64 v45; // [rsp+B0h] [rbp-1h]
  __int64 v46; // [rsp+B8h] [rbp+7h]
  unsigned int v48; // [rsp+120h] [rbp+6Fh]

  v4 = a1;
  if ( *a2 )
  {
    v5 = sub_1800566F0(*a2, &v33, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v36 = 0LL;
    v5 = &v35;
    v6 = 2;
    v7 = 0LL;
  }
  v45 = v7;
  v8 = v5[1];
  v41 = v8;
  v46 = v8;
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v36 )
      sub_180010530(v36);
  }
  if ( (v6 & 1) != 0 && v34 )
    sub_180010530(v34);
  if ( (unsigned int)sub_1800568D8(v7) == 1 )
  {
    v9 = *sub_1800CF0C8(v7, &v38);
    v37 = v9;
    sub_18000E72C(&v38);
  }
  else
  {
    v9 = *sub_1800CF088(v7, &v39);
    v37 = v9;
    sub_18000E72C(&v39);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v9,
          0LL,
          1LL,
          0,
          &v42);
  sub_180011C50(v4 + 72, &v33);
  sub_1800CF7CC(&v35, &v33);
  if ( v34 )
    sub_180010530(v34);
  sub_1800C7750(v35, v10);
  if ( v10 < 0 )
  {
    sub_18001DB68(&stru_1801C8548, 3, "Failed to read Texture with HRESULT error 0x%.8x", v10);
    if ( v36 )
      sub_180010530(v36);
    if ( v8 )
      sub_180010530(v8);
    return 0;
  }
  else
  {
    v11 = sub_180056744(v7);
    sub_1800488C8(v11);
    v12 = sub_180056744(v7);
    sub_1800D0600(v12);
    v13 = sub_180056918(v7);
    v15 = v14 * v13;
    v31 = v14 * v13 * sub_180056848(v7);
    v48 = v43;
    v30 = v44;
    v16 = v15;
    if ( v43 <= v15 )
      v16 = v43;
    v33 = v16;
    v40 = v42;
    v17 = sub_180056848(v7);
    v29 = (v18 + v17 - 1) / v18;
    v19 = sub_1800566D0(v7);
    v32 = v19;
    v24 = 0;
    if ( v19 )
    {
      do
      {
        v25 = 0;
        if ( v20 )
        {
          v26 = v21 * v24;
          do
          {
            v27 = v26 + v15 * v25;
            if ( v27 >= a4 )
              break;
            sub_18000FF54((void *)(a3 + v27), v15, (const void *)(v40 + v48 * v25++ + v22 * v24), v23);
            v20 = v29;
            v22 = v30;
            v23 = v33;
          }
          while ( v25 < v29 );
          v21 = v31;
          v19 = v32;
        }
        ++v24;
      }
      while ( v24 < v19 );
      v8 = v41;
      v4 = a1;
      v9 = v37;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v9, 0LL);
    if ( v36 )
      sub_180010530(v36);
    if ( v8 )
      sub_180010530(v8);
    return 1;
  }
}
