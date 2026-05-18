/*
 * XREFs of sub_18006F308 @ 0x18006F308
 * Callers:
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_18006F930 @ 0x18006F930 (sub_18006F930.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_180054790 @ 0x180054790 (sub_180054790.c)
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     sub_1800566B0 @ 0x1800566B0 (sub_1800566B0.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_1800568F8 @ 0x1800568F8 (sub_1800568F8.c)
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 *     sub_18006FA10 @ 0x18006FA10 (sub_18006FA10.c)
 *     sub_18006FA84 @ 0x18006FA84 (sub_18006FA84.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18006F308(__int64 *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 *v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 *result; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h]
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+60h] [rbp-1h]
  __int64 v30; // [rsp+68h] [rbp+7h] BYREF
  __int64 v31; // [rsp+70h] [rbp+Fh]
  char v32; // [rsp+78h] [rbp+17h] BYREF
  __int64 v33; // [rsp+80h] [rbp+1Fh]
  _QWORD v34[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v35; // [rsp+98h] [rbp+37h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+3Fh]
  unsigned int v37; // [rsp+C8h] [rbp+67h] BYREF

  sub_18001246C(&v30, (_QWORD *)(*a2 + 96LL));
  if ( v30 )
  {
    v4 = sub_18001246C(&v28, &v30);
    sub_180055AE8(v5, v4);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v7 = 0;
  v8 = a1 + 24;
  do
  {
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*a2 + 72LL))(*a2, &v28, v7);
    if ( v28 )
    {
      if ( !*(v8 - 8) )
      {
        sub_1800566B0(v28);
        sub_1800568F8(v9);
        sub_180056744(v10);
        sub_180056848(v11);
        v13 = sub_180056918(v12);
        v18 = (__int64 *)sub_18006FA84((unsigned int)&v32, v6, v13, v16, v14, v15, v17);
        sub_180011020(&a1[2 * v7 + 16], v18);
        if ( v33 )
          sub_180010530(v33);
      }
      v19 = sub_18001246C(v34, &v28);
      sub_180055AE8(v20, v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*a2 + 80LL))(*a2, &v26, v7);
    if ( v26 )
    {
      if ( !*v8 )
      {
        v21 = (__int64 *)sub_18006FA10(&v35, v6, *(_QWORD *)(v26 + 96));
        sub_180011020(&a1[2 * v7 + 24], v21);
        if ( v36 )
          sub_180010530(v36);
      }
      sub_180054790(*v8, (__int64)&v26);
    }
    if ( v27 )
      sub_180010530(v27);
    if ( v29 )
      sub_180010530(v29);
    ++v7;
    v8 += 2;
  }
  while ( v7 < 4 );
  v37 = *(_DWORD *)(*a2 + 88LL);
  sub_180054270(a1 + 32, (__int64)v34, &v37);
  result = sub_18001246C(&v35, a2);
  v23 = *result;
  *result = *(_QWORD *)(v24 + 40);
  *(_QWORD *)(v24 + 40) = v23;
  v25 = result[1];
  result[1] = *(_QWORD *)(v24 + 48);
  *(_QWORD *)(v24 + 48) = v25;
  if ( v36 )
    result = (__int64 *)sub_180010530(v36);
  if ( v31 )
    return (__int64 *)sub_180010530(v31);
  return result;
}
