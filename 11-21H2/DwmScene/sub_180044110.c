/*
 * XREFs of sub_180044110 @ 0x180044110
 * Callers:
 *     sub_180044110 @ 0x180044110 (sub_180044110.c)
 *     sub_180045F10 @ 0x180045F10 (sub_180045F10.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180044110 @ 0x180044110 (sub_180044110.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180044110(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 i; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 16LL))(v5, &v10);
  sub_180010910((__int64)&v10);
  v6 = *a2;
  result = sub_180043668(v6);
  v8 = *(_QWORD *)(v6 + 40);
  for ( i = *(_QWORD *)(v6 + 32); i != v8; i += 16LL )
    result = sub_180044110(a1, i);
  return result;
}
