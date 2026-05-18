/*
 * XREFs of sub_18002F830 @ 0x18002F830
 * Callers:
 *     sub_1800E18E0 @ 0x1800E18E0 (sub_1800E18E0.c)
 * Callees:
 *     _o_ceilf @ 0x18000C00C (_o_ceilf.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002F040 @ 0x18002F040 (sub_18002F040.c)
 *     sub_18002F6EC @ 0x18002F6EC (sub_18002F6EC.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18005E410 @ 0x18005E410 (sub_18005E410.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F830(float *a1, float a2, float a3, float a4, float a5)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // r14d
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rcx
  int v12; // edi
  int v13; // r15d
  int v14; // ebx
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v23; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h]
  _DWORD v28[24]; // [rsp+68h] [rbp-21h] BYREF

  v6 = (*(__int64 (__fastcall **)(float *, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v26);
  v23 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v23 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v11 = v27;
  if ( v27 && _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, v7, v6);
  if ( (_QWORD)v23 )
  {
    v12 = *((_DWORD *)a1 + 41);
    v13 = *((_DWORD *)a1 + 42);
    o_ceilf();
    v14 = (int)(float)(a2 * a4);
    o_ceilf();
    v15 = (int)(float)(a3 * a5);
    if ( v14 < 1 )
      v14 = 1;
    *((_DWORD *)a1 + 41) = v14;
    if ( v15 < 1 )
      v15 = 1;
    *((_DWORD *)a1 + 42) = v15;
    if ( v12 != v14 || v13 != v15 )
      sub_18002F040((__int64)a1, 3);
    a1[46] = a4;
    a1[47] = a5;
    a1[44] = a2;
    a1[45] = a3;
    if ( (*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)a1 + 280LL))(a1) )
    {
      *(float *)v28 = a1[41];
      *(float *)&v28[1] = a1[42];
      v28[2] = (*(__int64 (__fastcall **)(float *, _QWORD))(*(_QWORD *)a1 + 264LL))(a1, 0LL);
      v28[3] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 1LL);
      v28[4] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
      v28[5] = 0;
      v16 = (_QWORD *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 152LL))(a1);
      sub_18007E464(*v16, v23, v28);
      sub_18002F6EC((__int64)a1);
      v17 = *v16;
      v18 = *(_QWORD *)(*v16 + 464LL);
      if ( v18 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
        v18 = *(_QWORD *)(v17 + 464);
      }
      v25[0] = *(_QWORD *)(v17 + 456);
      v25[1] = v18;
      v19 = sub_180028544(v23);
      v21 = *(_QWORD *)(v20 + 136);
      if ( v21 )
      {
        sub_18005E29C(v21, v24, v19);
        if ( v24[0] )
          v8 = sub_18005E410();
        sub_180010910((__int64)v24);
      }
      *((_DWORD *)a1 + 43) = v8;
      sub_180010910((__int64)v25);
    }
    else
    {
      *((_DWORD *)a1 + 43) = 1;
    }
  }
  return sub_180010910((__int64)&v23);
}
