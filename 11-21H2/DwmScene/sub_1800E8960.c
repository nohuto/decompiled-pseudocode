/*
 * XREFs of sub_1800E8960 @ 0x1800E8960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 *     sub_1800E2DA0 @ 0x1800E2DA0 (sub_1800E2DA0.c)
 *     sub_1800ECF80 @ 0x1800ECF80 (sub_1800ECF80.c)
 *     sub_1800ED220 @ 0x1800ED220 (sub_1800ED220.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 *__fastcall sub_1800E8960(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int128 *a4,
        unsigned __int8 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int128 v26; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = *a2;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 88);
    v13 = *(__int64 **)(v11 + 128);
    v14 = (__int64 *)v13[1];
    v15 = v13;
    while ( !*((_BYTE *)v14 + 25) )
    {
      if ( *((_DWORD *)v14 + 8) >= v12 )
      {
        v15 = v14;
        v14 = (__int64 *)*v14;
      }
      else
      {
        v14 = (__int64 *)v14[2];
      }
    }
    if ( *((_BYTE *)v15 + 25) || v12 < *((_DWORD *)v15 + 8) || v15 == v13 )
    {
      v26 = 0LL;
      v17 = 0LL;
    }
    else
    {
      v16 = v15[6];
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v16 = v15[6];
      }
      v17 = v15[5];
      *(_QWORD *)&v26 = v17;
      *((_QWORD *)&v26 + 1) = v16;
    }
    v8 = *(_QWORD *)sub_1800ED220(v17, &v23);
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v9 = *sub_1800E2DA0(v17, &v24);
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v10 = *(_QWORD *)sub_1800ECF80(v17, &v25);
    v20 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    sub_180010910((__int64)&v26);
  }
  v27 = *a4;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 344LL))(*(_QWORD *)(a1 + 144), v8);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v9, a5);
  (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
    *(_QWORD *)(a1 + 144),
    v10,
    &v27,
    a3);
  v21 = sub_18007BD8C();
  return sub_18007BD68((__int64)v21, 4, 1);
}
