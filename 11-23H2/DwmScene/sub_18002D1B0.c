/*
 * XREFs of sub_18002D1B0 @ 0x18002D1B0
 * Callers:
 *     sub_1800CB170 @ 0x1800CB170 (sub_1800CB170.c)
 * Callees:
 *     _o_ceilf @ 0x18000BFFC (_o_ceilf.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002C3C8 @ 0x18002C3C8 (sub_18002C3C8.c)
 *     sub_18002CB80 @ 0x18002CB80 (sub_18002CB80.c)
 *     sub_18002D088 @ 0x18002D088 (sub_18002D088.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D1B0(float *a1, float a2, float a3, float a4, float a5)
{
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // edi
  int v9; // r14d
  int v10; // ebx
  int v11; // eax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-41h] BYREF
  __int64 v16; // [rsp+30h] [rbp-39h]
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-29h]
  _DWORD v19[24]; // [rsp+48h] [rbp-21h] BYREF

  v6 = (*(__int64 (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 376LL))(a1, &v17);
  result = sub_180011C50(v6, &v15);
  if ( v18 )
    result = sub_180010574(v18);
  if ( v15 )
  {
    v8 = *((_DWORD *)a1 + 41);
    v9 = *((_DWORD *)a1 + 42);
    o_ceilf();
    v10 = (int)(float)(a2 * a4);
    o_ceilf();
    v11 = (int)(float)(a3 * a5);
    if ( v10 < 1 )
      v10 = 1;
    *((_DWORD *)a1 + 41) = v10;
    if ( v11 < 1 )
      v11 = 1;
    *((_DWORD *)a1 + 42) = v11;
    if ( v8 != v10 || v9 != v11 )
      sub_18002CB80((__int64)a1, 3);
    a1[46] = a4;
    a1[47] = a5;
    a1[44] = a2;
    a1[45] = a3;
    result = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 280LL))(a1);
    if ( (_BYTE)result )
    {
      *(float *)v19 = a1[41];
      *(float *)&v19[1] = a1[42];
      v19[2] = (*(__int64 (__fastcall **)(float *, _QWORD))(*(_QWORD *)a1 + 264LL))(a1, 0LL);
      v19[3] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 1LL);
      v19[4] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
      v19[5] = 0;
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 152LL))(a1);
      sub_180072C68(*v12, v15, v19);
      sub_18002D088((__int64)a1);
      sub_18001246C(&v17, (_QWORD *)(*v12 + 456LL));
      v13 = sub_180026650(v15);
      v14 = *(_QWORD *)(v17 + 136);
      if ( v14 )
        result = sub_18002C3C8(v14, v13);
      else
        result = 0LL;
      *((_DWORD *)a1 + 43) = result;
      if ( v18 )
        result = sub_180010530((__int64)v18);
    }
    else
    {
      *((_DWORD *)a1 + 43) = 1;
    }
  }
  if ( v16 )
    return sub_180010530(v16);
  return result;
}
