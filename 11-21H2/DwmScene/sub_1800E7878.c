/*
 * XREFs of sub_1800E7878 @ 0x1800E7878
 * Callers:
 *     sub_1800E7560 @ 0x1800E7560 (sub_1800E7560.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003D520 @ 0x18003D520 (sub_18003D520.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800E7878(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  _QWORD *v5; // rax
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, int *, __int64 *); // rsi
  __int64 v8; // rcx
  bool v9; // di
  __int64 v10; // rcx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+80h] [rbp+28h] BYREF
  __int64 v17; // [rsp+88h] [rbp+30h] BYREF
  int v18; // [rsp+90h] [rbp+38h] BYREF
  int v19; // [rsp+94h] [rbp+3Ch]
  __int64 v20; // [rsp+98h] [rbp+40h] BYREF

  v18 = 0;
  v19 = 0;
  v17 = 0LL;
  v14 = 0LL;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v14 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_1800E6A0C(v15, &v14);
  sub_180010910((__int64)&v14);
  v5 = sub_1800DA968(v15[0], &v20);
  v6 = *v5;
  v7 = *(int (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)*v5 + 192LL);
  v8 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v7(v6, &v18, &v17) >= 0;
  v10 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 224LL))(*(_QWORD *)(a1 + 144), v17);
    sub_18003D520((_QWORD **)a1);
    v16 = 0;
    do
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64, _DWORD))(**(_QWORD **)(a1 + 144) + 232LL))(
              *(_QWORD *)(a1 + 144),
              v17,
              &v16,
              4LL,
              0);
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          sub_1800DD668(v15[0], v11);
          break;
        }
        Thrd_yield();
      }
    }
    while ( !v16 );
  }
  result = sub_180010910((__int64)v15);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return result;
}
