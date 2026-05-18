/*
 * XREFs of sub_18002DC40 @ 0x18002DC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_1800801B0 @ 0x1800801B0 (sub_1800801B0.c)
 *     sub_1800B2E50 @ 0x1800B2E50 (sub_1800B2E50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DC40(_QWORD *a1, unsigned int a2)
{
  __int64 *v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  char v12; // bl
  char v13; // r15
  char v14; // r12
  char v15; // r13
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h]
  char v27; // [rsp+90h] [rbp+40h]
  char v28; // [rsp+A0h] [rbp+50h]
  char v29; // [rsp+A8h] [rbp+58h]

  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v25);
  v23 = 0LL;
  v5 = v4[1];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v8 = *v4;
        v23 = *(_OWORD *)v4;
        goto LABEL_6;
      }
    }
  }
  v8 = v23;
LABEL_6:
  v9 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, v5, v4);
    v8 = v23;
  }
  if ( v8 )
  {
    v10 = sub_18002850C(v8);
    v11 = sub_180036808(v10, a2);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F8798, 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F87B8, 0LL);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F86D8, 0LL);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F86F8, 0LL);
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F8718, 0LL);
    v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F8738, 0LL);
    v29 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F8758, 0LL);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F8778, 0LL);
    if ( !v12 || (v17 = 1LL, v13) )
      v17 = 0LL;
    if ( v14 )
      v17 = (unsigned int)v17 | 2;
    if ( v15 )
      v17 = (unsigned int)v17 | 4;
    if ( v27 )
      v17 = (unsigned int)v17 | 8;
    if ( v28 )
      v17 = (unsigned int)v17 | 0x40;
    if ( v29 )
      v17 = (unsigned int)v17 | 0x10;
    if ( v16 )
      v17 = (unsigned int)v17 | 0x20;
    sub_1800801B0(a1[57], v8, v17);
    v18 = a1[55];
    v19 = a1[60];
    v20 = sub_180028460(v8);
    v24 = 0LL;
    v21 = *(_QWORD *)(v20 + 8);
    if ( v21 )
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    v24 = *(_OWORD *)v20;
    sub_1800B2E50(v18, &v24, v19);
  }
  return sub_180010910((__int64)&v23);
}
