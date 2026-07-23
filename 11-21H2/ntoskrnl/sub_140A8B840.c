/*
 * XREFs of sub_140A8B840 @ 0x140A8B840
 * Callers:
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1405FF390 @ 0x1405FF390 (sub_1405FF390.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140A8B6B8 @ 0x140A8B6B8 (sub_140A8B6B8.c)
 *     sub_140A8C69C @ 0x140A8C69C (sub_140A8C69C.c)
 *     sub_140A8C740 @ 0x140A8C740 (sub_140A8C740.c)
 *     sub_140A8C89C @ 0x140A8C89C (sub_140A8C89C.c)
 *     sub_140A90EA0 @ 0x140A90EA0 (sub_140A90EA0.c)
 *     sub_140A910FC @ 0x140A910FC (sub_140A910FC.c)
 *     sub_140A9120C @ 0x140A9120C (sub_140A9120C.c)
 *     sub_140A91728 @ 0x140A91728 (sub_140A91728.c)
 *     sub_140A92010 @ 0x140A92010 (sub_140A92010.c)
 *     sub_140A92074 @ 0x140A92074 (sub_140A92074.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 *     sub_140A92178 @ 0x140A92178 (sub_140A92178.c)
 *     sub_140A925E8 @ 0x140A925E8 (sub_140A925E8.c)
 *     sub_140A92860 @ 0x140A92860 (sub_140A92860.c)
 *     sub_140A929F0 @ 0x140A929F0 (sub_140A929F0.c)
 *     sub_140A92AA0 @ 0x140A92AA0 (sub_140A92AA0.c)
 *     sub_140A9B888 @ 0x140A9B888 (sub_140A9B888.c)
 *     sub_140A9BFC0 @ 0x140A9BFC0 (sub_140A9BFC0.c)
 *     sub_140A9CDF4 @ 0x140A9CDF4 (sub_140A9CDF4.c)
 *     sub_140A9CF68 @ 0x140A9CF68 (sub_140A9CF68.c)
 *     sub_140A9D128 @ 0x140A9D128 (sub_140A9D128.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

int __fastcall sub_140A8B840(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // r13
  __int64 v7; // r14
  int v8; // eax
  int v9; // ecx
  unsigned __int8 *v10; // r12
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  PVOID v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  void *v19; // rdi
  int v20; // eax
  __int64 v21; // rdi
  int v22; // r8d
  int v23; // eax
  char v24; // dl
  int v25; // eax
  __int64 v26; // rdi
  bool v27; // zf
  _QWORD *v28; // rbx
  void *v29; // rax
  _QWORD *v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  void *v34; // rax
  __int64 v35; // rcx
  char v36; // al
  const void *v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-38h] BYREF
  __int64 v40; // [rsp+48h] [rbp-30h]
  __int64 v41; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h]
  __int64 v43; // [rsp+60h] [rbp-18h]
  int v44; // [rsp+C0h] [rbp+48h]
  int v45; // [rsp+C8h] [rbp+50h] BYREF
  int v46; // [rsp+D0h] [rbp+58h]
  const void *v47; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 168);
  v41 = 0LL;
  v39 = 0LL;
  v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  LODWORD(v4) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 0x40000000 )
      return v4;
    v4 = sub_140AA5A48(v1);
    v6 = v4;
    v7 = v4;
    if ( !v4 )
      return v4;
  }
  else
  {
    v7 = sub_140AA5A48(v1);
    v6 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = sub_140A9BFC0(v1);
      v7 = v6;
      v8 = *(_DWORD *)(v1 + 16);
      if ( !v6 )
      {
        LODWORD(v4) = v8 | 0x80000000;
        *(_DWORD *)(v1 + 16) = v4;
        return v4;
      }
      *(_DWORD *)(v1 + 16) = v8 | 0x40000000;
    }
  }
  v9 = *(_DWORD *)(v7 + 232);
  *(_BYTE *)(v7 + 61) = CurrentIrql;
  LOBYTE(v5) = CurrentIrql;
  *(_BYTE *)(v7 + 60) = CurrentIrql;
  v38 = *(const void **)(a1 + 176);
  v10 = (unsigned __int8 *)(*(_QWORD *)(v1 + 184) - 72LL);
  v11 = *(_DWORD *)(v1 + 184) - 72;
  v43 = 0LL;
  v47 = v38;
  v12 = sub_140A910FC(v9, v5, v1, v11, v7, (__int64)v38);
  v13 = *(_QWORD *)(v7 + 240);
  v14 = v12;
  v15 = *(PVOID *)(a1 + 160);
  v46 = v12;
  v40 = v13;
  Object = v15;
  if ( v13 || (v16 = *(_DWORD *)(v7 + 56), (v16 & 1) != 0) )
  {
    v17 = 0;
    v44 = 0;
  }
  else
  {
    v44 = 1;
    *(_DWORD *)(v7 + 56) = v16 | 1;
    v13 = sub_140A9CDF4(v15, v7, v14);
    v40 = v13;
    v17 = 1;
  }
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 16) = v7;
  if ( v13 )
  {
    v18 = MEMORY[0xFFFFF78000000014];
    if ( v17 )
    {
      v19 = (void *)sub_140A92010(v15);
      sub_140A9B888(*(unsigned int *)(v7 + 232), v19, v1);
      ObfDereferenceObjectWithTag(v19, 0x49667256u);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      ++*(_DWORD *)(v7 + 24);
      sub_140A9CF68(v40);
      v15 = Object;
    }
    if ( *(_QWORD *)(v1 + 104) )
    {
      sub_1405FFB44(0x203u, v47, (const void *)v1);
      *(_QWORD *)(v1 + 104) = 0LL;
    }
    if ( (*(_DWORD *)(v7 + 56) & 0x10) != 0 )
      sub_1405FFB44(0x205u, v47, (const void *)v1);
    if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
      && (unsigned __int8)(*v10 - 3) <= 1u
      && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
      && (dword_140C29FC0 & 0x6000) != 0 )
    {
      sub_1405FF390(a1, v7, (__int64)v10);
    }
    v20 = sub_140A8C69C(v15, *(_QWORD *)(v40 + 48));
    v21 = v40;
    *(_DWORD *)(v40 + 56) = v20;
    sub_140A8C740(v7, v44, v22, v1, (__int64)v47, (__int64)v10, (__int64)&v39, (__int64)&v45);
    if ( v46 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      ++*(_DWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 216) = v10;
      v43 = sub_140A9120C(v1);
    }
    v23 = sub_140A925E8(v39, v10);
    v24 = *(_BYTE *)(v1 + 67);
    v46 = v23;
    v25 = sub_140A8B6B8(v21 + 80, v24, (__int64)v10, v39, v45, v23, 1, &v41);
    v26 = v41;
    *(_QWORD *)(v41 + 48) = v18;
    if ( !v25 )
    {
      *(_DWORD *)(a1 + 24) |= 0x4000000u;
      v27 = v46 == 0;
      *(_QWORD *)(a1 + 40) = a1 + 32;
      *(_QWORD *)(a1 + 32) = a1 + 32;
      *(_QWORD *)(v26 + 56) = v18;
      v26 = v41;
      *(_QWORD *)(v41 + 112) = KeGetCurrentThread();
      if ( !v27 )
      {
        *(_OWORD *)(v26 + 80) = *(_OWORD *)(v1 + 48);
        *(_OWORD *)(v26 + 96) = *(_OWORD *)(v1 + 48);
        if ( v44 )
          *(_DWORD *)(v26 + 4) |= 0x8000000u;
      }
    }
    v28 = Object;
    v29 = (void *)sub_140A92074(Object);
    if ( v29 )
      ObfDereferenceObjectWithTag(v29, 0x49667256u);
    else
      *(_DWORD *)(v26 + 4) |= 0x10000000u;
    *(_QWORD *)(v26 + 40) = sub_140A8C89C(v28[1], *v10);
    v30 = (_QWORD *)(a1 + 32);
    *(_DWORD *)(v26 + 4) &= ~0x40000000u;
    v31 = (_QWORD *)(v26 + 16);
    v32 = *(_QWORD *)(v26 + 16);
    if ( *(_QWORD *)(v32 + 8) != v26 + 16 )
      __fastfail(3u);
    *v30 = v32;
    *(_QWORD *)(a1 + 40) = v31;
    *(_QWORD *)(v32 + 8) = v30;
    *v31 = v30;
    *(_QWORD *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 72) = v1;
    v33 = *(_QWORD *)(v1 + 184);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v33 - 72);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v33 - 56);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v33 - 40);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v33 - 24);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(v33 - 8);
    if ( (v10[3] & 1) != 0 )
      *(_DWORD *)(a1 + 24) |= 0x1000000u;
    if ( *v10 == 27 && v10[1] == 2 )
    {
      *(_DWORD *)(a1 + 24) |= 0x20000000u;
      v34 = (void *)sub_140A92010(v28);
      *(_QWORD *)(a1 + 64) = v34;
      ObfDereferenceObjectWithTag(v34, 0x49667256u);
      if ( (unsigned int)sub_140A92178(v28) && !(unsigned int)sub_140A92124(v28, 3LL) )
        *(_DWORD *)(a1 + 24) |= 0x10000000u;
      sub_140A91728(v28);
    }
    if ( v44 )
      sub_140A929F0(v7, v1, (_DWORD)v10, v26, (__int64)v47);
    if ( v46 && (*(_DWORD *)(v7 + 56) & 0x80000) == 0 )
      sub_140A92AA0(v7, (_DWORD)v28, v39, (_DWORD)v10, v26, (__int64)v47);
    sub_140A92860(v7, (_DWORD)v28, v39, (_DWORD)v10, v26, (__int64)v47);
    v35 = v40;
    *(_QWORD *)(v40 + 48) = v28;
    *(_BYTE *)(v7 + 186) = *(_BYTE *)(v1 + 67);
    *(_OWORD *)(*(_QWORD *)(v26 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
    v36 = *(_BYTE *)(v1 + 67);
    if ( v36 > 2 )
    {
      *(_QWORD *)(v1 + 184) -= 72LL;
      *(_BYTE *)(v1 + 67) = v36 - 1;
      *(_BYTE *)(*(_QWORD *)(v1 + 184) - 69LL) |= 0x10u;
      ++*(_BYTE *)(v1 + 67);
      *(_QWORD *)(v1 + 184) += 72LL;
    }
    sub_140A9CF68(v35);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
    if ( dword_140C1B25C )
      sub_140A9D128(v1, *(_QWORD *)(a1 + 48), v7 + 248);
  }
  sub_140AA5BCC(v7);
  LODWORD(v4) = v43;
  if ( v43 )
    LODWORD(v4) = sub_140A90EA0(v43);
  return v4;
}
