/*
 * XREFs of sub_18007A1F8 @ 0x18007A1F8
 * Callers:
 *     sub_18007A4B0 @ 0x18007A4B0 (sub_18007A4B0.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18005C018 @ 0x18005C018 (sub_18005C018.c)
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     sub_18005E25C @ 0x18005E25C (sub_18005E25C.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E448 @ 0x18005E448 (sub_18005E448.c)
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 *     sub_18007A998 @ 0x18007A998 (sub_18007A998.c)
 *     sub_18007AA0C @ 0x18007AA0C (sub_18007AA0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007A1F8(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned int v9; // esi
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // r11
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int128 v32; // [rsp+48h] [rbp-59h] BYREF
  __int128 v33; // [rsp+58h] [rbp-49h] BYREF
  __int128 v34; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v35[2]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v37[2]; // [rsp+98h] [rbp-9h] BYREF
  _QWORD v38[2]; // [rsp+A8h] [rbp+7h] BYREF
  _QWORD v39[2]; // [rsp+B8h] [rbp+17h] BYREF
  _BYTE v40[16]; // [rsp+C8h] [rbp+27h] BYREF
  _BYTE v41[16]; // [rsp+D8h] [rbp+37h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(v4 + 104);
  }
  v6 = *(_QWORD *)(v4 + 96);
  v36[0] = v6;
  v36[1] = v5;
  if ( v6 )
  {
    v7 = a1[14];
    v32 = 0LL;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v6 = v36[0];
    }
    *(_QWORD *)&v32 = v6;
    *((_QWORD *)&v32 + 1) = v5;
    sub_18005D1D8(v7, &v32);
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v9 = 0;
  v10 = a1 + 16;
  do
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)*a2 + 72LL))(*a2, &v33, v9);
    if ( (_QWORD)v33 )
    {
      v11 = *v10;
      if ( !*v10 )
      {
        sub_18005E25C(v33);
        sub_18005E448(v12);
        sub_18005E30C(v13);
        sub_18005E3D8(v14);
        v16 = sub_18005E468(v15);
        v21 = (__int64 *)sub_18007AA0C((unsigned int)v40, v8, v16, v19, v17, v18, v20);
        v22 = *v21;
        v23 = v21[1];
        *v21 = 0LL;
        v21[1] = 0LL;
        v37[0] = *v10;
        *v10 = v22;
        v37[1] = v10[1];
        v10[1] = v23;
        sub_180010910((__int64)v37);
        sub_180010910((__int64)v40);
        v11 = *v10;
      }
      v34 = 0LL;
      if ( *((_QWORD *)&v33 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL));
      v34 = v33;
      sub_18005D1D8(v11, &v34);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)*a2 + 80LL))(*a2, v35, v9);
    if ( v35[0] )
    {
      v24 = v10[8];
      if ( !v24 )
      {
        v25 = (__int64 *)sub_18007A998(v41, v8, *(_QWORD *)(v35[0] + 96LL));
        v26 = *v25;
        v27 = v25[1];
        *v25 = 0LL;
        v25[1] = 0LL;
        v38[0] = v10[8];
        v10[8] = v26;
        v38[1] = v10[9];
        v10[9] = v27;
        sub_180010910((__int64)v38);
        sub_180010910((__int64)v41);
        v24 = v10[8];
      }
      sub_18005C018(v24, (__int64)v35);
    }
    sub_180010910((__int64)v35);
    sub_180010910((__int64)&v33);
    ++v9;
    v10 += 2;
  }
  while ( v9 < 4 );
  v28 = (_QWORD *)sub_180029E58(a1 + 32, *(_DWORD *)(*a2 + 88LL));
  v29 = a2[1];
  if ( v29 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v29 = a2[1];
  }
  v30 = *a2;
  v39[0] = *v28;
  *v28 = v30;
  v39[1] = v28[1];
  v28[1] = v29;
  sub_180010910((__int64)v39);
  return sub_180010910((__int64)v36);
}
