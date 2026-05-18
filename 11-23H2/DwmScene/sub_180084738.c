/*
 * XREFs of sub_180084738 @ 0x180084738
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18005FFE4 @ 0x18005FFE4 (sub_18005FFE4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003985C @ 0x18003985C (sub_18003985C.c)
 *     sub_180039884 @ 0x180039884 (sub_180039884.c)
 *     sub_18003989C @ 0x18003989C (sub_18003989C.c)
 *     sub_180039B00 @ 0x180039B00 (sub_180039B00.c)
 *     sub_180054690 @ 0x180054690 (sub_180054690.c)
 *     sub_180054B0C @ 0x180054B0C (sub_180054B0C.c)
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_180084204 @ 0x180084204 (sub_180084204.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 *     sub_180084D80 @ 0x180084D80 (sub_180084D80.c)
 *     sub_1800850E8 @ 0x1800850E8 (sub_1800850E8.c)
 *     sub_180085110 @ 0x180085110 (sub_180085110.c)
 *     sub_18008511C @ 0x18008511C (sub_18008511C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180084738(__int64 a1, __int64 *a2, int a3)
{
  int v3; // ebx
  unsigned int v6; // r13d
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r9d
  int v15; // edi
  unsigned __int64 v16; // rax
  unsigned int i; // edi
  unsigned __int64 v18; // r8
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  _QWORD *v24; // rax
  bool v25; // r14
  _QWORD *v26; // rax
  bool v27; // r14
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h]
  __int64 v33; // [rsp+40h] [rbp-38h] BYREF
  __int64 v34; // [rsp+48h] [rbp-30h]
  __int64 v35; // [rsp+50h] [rbp-28h] BYREF
  __int64 v36; // [rsp+58h] [rbp-20h]
  __int64 v37; // [rsp+60h] [rbp-18h] BYREF
  __int64 v38; // [rsp+68h] [rbp-10h]
  unsigned int v39; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v40; // [rsp+C8h] [rbp+50h]
  int v41; // [rsp+D0h] [rbp+58h]
  int v42; // [rsp+D8h] [rbp+60h] BYREF

  v41 = a3;
  v3 = a3;
  v6 = *(_DWORD *)(*a2 + 88);
  sub_180011C50(*a2 + 72, &v33);
  v7 = (_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 40) )
  {
    if ( !*v7 || !(unsigned __int8)sub_180084D80(*v7, v6) )
    {
      v8 = sub_18001246C(&v31, &v33);
      sub_180084A30(a1, v8);
    }
    sub_1800850E8(a1);
    v39 = v6;
    if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(*(_QWORD *)sub_180084204((_QWORD *)(a1 + 88), (__int64)&v37, &v39) + 32LL) )
    {
      v9 = sub_18008511C(a1);
      v13 = sub_180085110(v11, v10, v12, v9);
      sub_180039B00((_QWORD **)*a2, a1 + 128, v13, v14);
      v15 = *(_DWORD *)(a1 + 80);
      v39 = v6;
      *(_DWORD *)(*(_QWORD *)sub_180084204((_QWORD *)(a1 + 88), (__int64)&v37, &v39) + 32LL) = v15;
    }
  }
  LOBYTE(v16) = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 200LL))(v33, &v42);
  for ( i = 0; i < 6; ++i )
  {
    if ( ((1 << i) & v3) != 0 )
    {
      LOBYTE(v16) = sub_180011DE0((_QWORD *)(a1 + 128));
      if ( (_BYTE)v16 )
      {
        LOBYTE(v16) = sub_18003985C(*a2, i, a1 + 128, *(_DWORD *)(a1 + 144));
        v18 = 0xCCCCCCCCCCCCCCCDuLL;
      }
      if ( ((1 << i) & v42) != 0 )
      {
        v19 = 0;
        v39 = 0;
        v20 = *(_QWORD *)(a1 + 56);
        v16 = v18 * ((*(_QWORD *)(a1 + 64) - v20) >> 3);
        if ( v16 )
        {
          v21 = 0LL;
          do
          {
            sub_18001246C(&v31, (_QWORD *)(v20 + 40 * v21));
            sub_18001246C(&v29, (_QWORD *)(v22 + 16));
            v40 = *(_DWORD *)(v23 + 32);
            if ( sub_180011DE0(&v31) )
            {
              v24 = sub_1800566F0(v31, &v35, v6);
              v25 = sub_180011DD0(v24);
              if ( v36 )
                sub_180010530(v36);
              if ( v25 )
                sub_180055A00(v31, &v33);
              sub_18003989C(*a2, i, (__int64)&v31, v40, v29, v30);
              if ( sub_180011DE0(&v29) )
              {
                v26 = sub_180054B0C(v29, &v37, v6);
                v27 = sub_180011DD0(v26);
                if ( v38 )
                  sub_180010530(v38);
                if ( v27 )
                  sub_180054690(v29, &v33);
                sub_180039884(*a2, i, (__int64)&v29, v40, v29, v30);
              }
              v19 = v39;
            }
            if ( v30 )
              sub_180010530(v30);
            if ( v32 )
              sub_180010530(v32);
            v39 = ++v19;
            v20 = *(_QWORD *)(a1 + 56);
            v16 = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 64) - v20) >> 3);
            v21 = v19;
          }
          while ( v19 < v16 );
          v3 = v41;
        }
      }
    }
  }
  if ( v34 )
    LOBYTE(v16) = sub_180010530(v34);
  return v16;
}
