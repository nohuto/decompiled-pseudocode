/*
 * XREFs of sub_180075B34 @ 0x180075B34
 * Callers:
 *     sub_18006D0B0 @ 0x18006D0B0 (sub_18006D0B0.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_1800705E8 @ 0x1800705E8 (sub_1800705E8.c)
 *     sub_1800A2D48 @ 0x1800A2D48 (sub_1800A2D48.c)
 *     sub_1800A2D6C @ 0x1800A2D6C (sub_1800A2D6C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_180075B34(__int64 a1, __int64 *a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v9; // r10
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rdi
  float v17; // xmm6_4
  __int64 v18; // rcx
  __int64 v19; // rbx
  float v20; // xmm0_4
  __int64 v21; // rbx
  _DWORD v22[4]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v23; // [rsp+48h] [rbp-19h] BYREF
  __int128 v24; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v26[6]; // [rsp+78h] [rbp+17h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v9 = *a2;
  if ( *a2 )
  {
    v24 = 0LL;
    v10 = *(_QWORD *)(v9 + 64);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
        if ( v12 == v11 )
        {
          v24 = *(_OWORD *)(v9 + 56);
          break;
        }
      }
    }
    v23 = 0LL;
    v13 = *(_QWORD *)(v24 + 80);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      while ( v14 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
        if ( v15 == v14 )
        {
          v23 = *(_OWORD *)(v24 + 72);
          break;
        }
      }
    }
    sub_180010910((__int64)&v24);
    v16 = sub_180036808(a1, *(_DWORD *)(v23 + 112));
    v17 = 0.0;
    sub_1800705E8(v18, v26, &v23);
    if ( v26[0] )
    {
      sub_18001483C(v26[0], v25);
      if ( v25[0] )
        v17 = *(float *)(v25[0] + 104LL) + *(float *)(v25[0] + 104LL);
      sub_180010910((__int64)v25);
    }
    sub_180010910((__int64)v26);
    if ( a3 )
    {
      v19 = *a2;
      v20 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 88LL))(v16, &qword_1801FA858);
      v22[0] = 0;
      *(float *)&v22[1] = v20 * v17;
      v22[2] = 0;
      sub_1800A2D48(v19, v22);
    }
    if ( a4 )
    {
      v21 = *a2;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 88LL))(v16, &qword_1801FA978);
      sub_1800A2D6C(v21);
    }
    return (_UNKNOWN **)sub_180010910((__int64)&v23);
  }
  return result;
}
