/*
 * XREFs of sub_180030500 @ 0x180030500
 * Callers:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800DDFC0 @ 0x1800DDFC0 (sub_1800DDFC0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180030500(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rcx
  __int64 v16[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = sub_18001C190();
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::JsonConfigurationManager>::`vftable';
    v8 = sub_18001246C(v16, a3);
    sub_1800DDFC0(v7 + 16, *a2, v8);
  }
  else
  {
    v7 = 0LL;
  }
  v9 = v7 + 16;
  *a1 = v7 + 16;
  a1[1] = v7;
  if ( v7 != -16 )
  {
    v10 = *(_QWORD *)(v7 + 32);
    if ( !v10 || !*(_DWORD *)(v10 + 8) )
    {
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v11 = a1[1];
      v12 = 0LL;
      v13 = 0LL;
      if ( v11 )
      {
        v12 = v9;
        v13 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
      }
      *(_QWORD *)(v9 + 8) = v12;
      v14 = *(volatile signed __int32 **)(v9 + 16);
      *(_QWORD *)(v9 + 16) = v13;
      if ( v14 )
        sub_180010574(v14);
      if ( v11 )
        sub_180010530(v11);
    }
  }
  return a1;
}
