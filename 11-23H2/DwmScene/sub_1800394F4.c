/*
 * XREFs of sub_1800394F4 @ 0x1800394F4
 * Callers:
 *     sub_180097C50 @ 0x180097C50 (sub_180097C50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18009E2F8 @ 0x18009E2F8 (sub_18009E2F8.c)
 *     sub_18009F2D8 @ 0x18009F2D8 (sub_18009F2D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800394F4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned int i; // edi
  unsigned int v10; // eax
  __int64 result; // rax
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  sub_180011C50(a1 + 72, v12);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12[0] + 200LL))(v12[0], &v13);
  v8 = 0;
  if ( v12[1] )
    sub_180010530(v12[1]);
  *(_OWORD *)v12 = 0LL;
  sub_18009F2D8(*(_QWORD *)(a1 + 96) + 9256LL, v12);
  for ( i = 0; i < 6; ++i )
  {
    v10 = v13;
    if ( _bittest((const int *)&v10, i) )
    {
      *(_OWORD *)v12 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD))sub_18009E2F8)(
        *(_QWORD *)(a1 + 96) + 4632LL,
        i,
        v12,
        0LL);
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  result = sub_18009F2D8(*(_QWORD *)(a1 + 96) + 9256LL, a2);
  if ( a4 != -1 )
  {
    do
    {
      result = v13;
      if ( _bittest((const int *)&result, v8) )
        result = sub_18009E2F8(*(_QWORD *)(a1 + 96) + 4632LL, v8, a3, a4, v12[0], v12[1]);
      ++v8;
    }
    while ( v8 < 6 );
  }
  return result;
}
