/*
 * XREFs of sub_18003D66C @ 0x18003D66C
 * Callers:
 *     sub_1800A8588 @ 0x1800A8588 (sub_1800A8588.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800AFDE0 @ 0x1800AFDE0 (sub_1800AFDE0.c)
 *     sub_1800B127C @ 0x1800B127C (sub_1800B127C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D66C(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // r10
  unsigned int v9; // ebx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rcx
  unsigned int i; // esi
  unsigned int v14; // eax
  __int64 result; // rax
  __int128 v16; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v8 = a1[10];
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v10 + 1, v10);
      if ( v11 == v10 )
      {
        v12 = a1[9];
        v16 = *(_OWORD *)(a1 + 9);
        goto LABEL_6;
      }
    }
  }
  v12 = v16;
LABEL_6:
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 200LL))(v12, &v17);
  sub_180010910((__int64)&v16);
  v16 = 0LL;
  sub_1800B127C(a1[12] + 9256LL, &v16);
  sub_180010910((__int64)&v16);
  for ( i = 0; i < 6; ++i )
  {
    v14 = v17;
    if ( _bittest((const int *)&v14, i) )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))sub_1800AFDE0)(a1[12] + 4632LL, i, &v16, 0LL);
      sub_180010910((__int64)&v16);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[12] + 8LL))(a1[12], a1);
  result = sub_1800B127C(a1[12] + 9256LL, a2);
  if ( a4 != -1 )
  {
    do
    {
      result = v17;
      if ( _bittest((const int *)&result, v9) )
        result = sub_1800AFDE0(a1[12] + 4632LL, v9, a3, a4, v16, *((_QWORD *)&v16 + 1));
      ++v9;
    }
    while ( v9 < 6 );
  }
  return result;
}
