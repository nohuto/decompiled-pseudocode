/*
 * XREFs of sub_1800422EC @ 0x1800422EC
 * Callers:
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 *     sub_1800211EC @ 0x1800211EC (sub_1800211EC.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 *     sub_180041924 @ 0x180041924 (sub_180041924.c)
 *     sub_180042270 @ 0x180042270 (sub_180042270.c)
 *     sub_180042568 @ 0x180042568 (sub_180042568.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800422EC(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  volatile __int32 *v6; // rax
  __int64 v7; // r8
  __int32 v8; // r9d
  __int64 *v9; // rax
  _DWORD *v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile __int32 *v14; // rax
  __int32 v15; // r8d
  __int64 *v16; // rax
  int v17; // eax
  _DWORD *v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // r10
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  volatile __int32 *v25; // rax
  __int32 v26; // r8d
  __int64 v27; // r10
  __int64 *v28; // rax
  _DWORD *v29; // rax
  int v30; // edx
  __int64 result; // rax
  unsigned int v32; // [rsp+20h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-39h] BYREF
  __int64 v37; // [rsp+48h] [rbp-31h] BYREF
  __int64 v38; // [rsp+50h] [rbp-29h] BYREF
  __int64 v39; // [rsp+58h] [rbp-21h]
  __int64 v40; // [rsp+60h] [rbp-19h]
  __int64 v41; // [rsp+68h] [rbp-11h]
  __int64 v42; // [rsp+70h] [rbp-9h] BYREF
  __int64 v43; // [rsp+78h] [rbp-1h]
  __int64 v44; // [rsp+80h] [rbp+7h] BYREF
  __int64 v45; // [rsp+88h] [rbp+Fh]
  __int64 v46; // [rsp+90h] [rbp+17h] BYREF
  __int64 v47; // [rsp+98h] [rbp+1Fh]
  __int64 v48; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+2Fh]
  _BYTE v50[32]; // [rsp+B0h] [rbp+37h] BYREF
  unsigned int v51; // [rsp+F8h] [rbp+7Fh] BYREF

  sub_18002A404(a1 + 16);
  v4 = **(_QWORD **)(a1 + 88);
  v37 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v39 = *(_QWORD *)(v4 + 64) + 76LL;
    v51 = 1;
    sub_18002E120(&v51);
    v6 = (volatile __int32 *)sub_18001C7FC(v5);
    while ( _InterlockedExchange(v6, v8) )
      ;
    v9 = (__int64 *)sub_180041410(*(_QWORD *)(v7 + 64), &v44);
    sub_180042270(a1, a2, v9);
    if ( v45 )
      sub_180010530(v45);
    v32 = 0;
    sub_18002E114(&v32);
    v10 = (_DWORD *)sub_18002E108(v39);
    *v10 = v11;
    sub_18001D3F8(&v37);
    v4 = v37;
  }
  sub_180042568(a1);
  v12 = sub_18003F644((__int64 *)(a1 + 88), (__int64)v50);
  sub_18001246C(&v42, (_QWORD *)(*(_QWORD *)v12 + 64LL));
  v40 = v42 + 76;
  v33 = 1;
  sub_18002E120(&v33);
  v14 = (volatile __int32 *)sub_18001C7FC(v13);
  while ( _InterlockedExchange(v14, v15) )
    ;
  v16 = (__int64 *)sub_180041410(v42, &v46);
  sub_180041924(a1, a2, v16);
  if ( v47 )
    sub_180010530(v47);
  v34 = 0;
  sub_18002E108(v40);
  v17 = sub_18002E114(&v34);
  *v18 = v17;
  v19 = **(_QWORD **)(a1 + 88);
  v38 = v19;
  while ( !*(_BYTE *)(v19 + 25) )
  {
    v20 = (__int64 *)(v19 + 32);
    v21 = &qword_1801D3FE8;
    if ( (unsigned __int64)qword_1801D4000 >= 8 )
      v21 = (__int64 *)qword_1801D3FE8;
    v22 = *(_QWORD *)(v19 + 48);
    v23 = v19 + 32;
    if ( *(_QWORD *)(v19 + 56) >= 8uLL )
      v23 = *v20;
    if ( v22 != qword_1801D3FF8 || (unsigned int)sub_18001F810(v23, v21, v22) )
    {
      v41 = v20[4] + 76;
      v35 = 1;
      sub_18002E120(&v35);
      v25 = (volatile __int32 *)sub_18001C7FC(v24);
      while ( _InterlockedExchange(v25, v26) )
        ;
      v28 = (__int64 *)sub_180041410(*(_QWORD *)(v27 + 32), &v48);
      sub_180041924(a1, a2, v28);
      if ( v49 )
        sub_180010530(v49);
      v36 = 0;
      sub_18002E114(&v36);
      v29 = (_DWORD *)sub_18002E108(v41);
      *v29 = v30;
    }
    sub_18001D3F8(&v38);
    v19 = v38;
  }
  result = sub_1800211EC(a1 + 192);
  if ( v43 )
    return sub_180010530(v43);
  return result;
}
