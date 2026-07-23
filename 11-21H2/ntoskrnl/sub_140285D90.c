/*
 * XREFs of sub_140285D90 @ 0x140285D90
 * Callers:
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 * Callees:
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14059219C @ 0x14059219C (sub_14059219C.c)
 *     sub_140592278 @ 0x140592278 (sub_140592278.c)
 */

__int64 __fastcall sub_140285D90(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v3; // eax
  ULONG_PTR v6; // rax
  ULONG_PTR BugCheckParameter4; // r8
  _DWORD *v8; // r9
  ULONG_PTR v9; // rdi
  int v10; // esi
  __int64 v11; // rsi
  ULONG_PTR v12; // r13
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  _WORD *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rdi
  __int64 *v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r11
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v30; // [rsp+30h] [rbp-58h]
  __int128 v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+50h] [rbp-38h]
  __int64 v33; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v33 = 0LL;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = sub_140287970(a1);
  v9 = v6;
  v10 = BugCheckParameter4;
  if ( (*v8 & 0xFFF) != 0 )
    v10 = 1;
  v11 = (unsigned int)((*v8 >> 12) + v10);
  if ( !(_DWORD)v11 )
    KeBugCheckEx(0x1Au, 0x103087uLL, v6, 0LL, BugCheckParameter4);
  v12 = sub_140286F90(v6, *a3, &v33);
  result = sub_140311CC0(v12);
  if ( (int)result < 0 )
  {
    ++dword_140C53DA0;
    return result;
  }
  v14 = *(_WORD *)(v9 + 60) & 0x3FF;
  v15 = *a2;
  v16 = *(_WORD **)(qword_140C51F48 + 8 * v14);
  if ( *a2 )
  {
    sub_14059219C(v15);
  }
  else
  {
    v17 = sub_140286210(*(_QWORD *)(qword_140C51F48 + 8 * v14));
    v15 = v17;
    if ( !v17 )
    {
      ++dword_140C53DA0;
      sub_140592278(v12);
      return 3221225495LL;
    }
    *a2 = v17;
  }
  v19 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v11;
  v20 = (_QWORD *)sub_1403295C0(v15, v18);
  v24 = *a3 >> 2;
  v25 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  v20[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v20[3] = v12;
  for ( v20[4] = v11 & 0x3F | v20[4] & 0xC000000000000000uLL | v24 & 0x3FFFFFFFFFFF0000LL | v25;
        (unsigned __int64)v21 < v19;
        ++v21 )
  {
    if ( v22 >= v23 )
    {
      v12 = *(_QWORD *)(v12 + 16);
      v22 = *(_QWORD *)(v12 + 8);
      v28 = *(unsigned int *)(v12 + 44);
      v20[3] |= 1uLL;
      v23 = v22 + 8 * v28;
    }
    v26 = (v22 << 16) | 0x400;
    if ( qword_140C50780 )
    {
      v27 = (v22 << 16) | 0x410;
      if ( (qword_140C50780 & v26) == 0 )
        v27 = qword_140C50780 | (v22 << 16) | 0x400;
      v26 = v27;
    }
    *v21 = v26;
    v22 += 8LL;
  }
  _InterlockedOr(v29, 0);
  v32 = v20[4] | 0xC000000000000000uLL;
  v30 = 0LL;
  v31 = 0LL;
  v20[4] = v32;
  sub_140285FE0(v12, v20, (2 * (unsigned __int8)v20[3]) & 2 | 1u);
  return 0LL;
}
