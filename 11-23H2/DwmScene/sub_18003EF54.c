/*
 * XREFs of sub_18003EF54 @ 0x18003EF54
 * Callers:
 *     sub_180040814 @ 0x180040814 (sub_180040814.c)
 *     sub_1800408A8 @ 0x1800408A8 (sub_1800408A8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002A6F0 @ 0x18002A6F0 (sub_18002A6F0.c)
 *     sub_18003FEB0 @ 0x18003FEB0 (sub_18003FEB0.c)
 */

__int64 **__fastcall sub_18003EF54(__int64 **a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001C190();
  v5 = 1LL;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::Scene>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = (__int64 *)v4;
  if ( a2 )
  {
    v6 = a2[1];
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v10 = (__int64)a1[1];
      v7 = v10;
      v9 = a2;
      sub_18002A6F0(a2, &v9);
      if ( v7 )
        sub_180010530(v7);
    }
  }
  v11 = 0LL;
  sub_18003FEB0(&v11, v5);
  return a1;
}
