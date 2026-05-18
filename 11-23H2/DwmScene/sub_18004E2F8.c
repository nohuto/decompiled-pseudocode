/*
 * XREFs of sub_18004E2F8 @ 0x18004E2F8
 * Callers:
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18005F884 @ 0x18005F884 (sub_18005F884.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18004E2F8(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rcx
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20[4]; // [rsp+60h] [rbp-38h] BYREF

  v8 = sub_18001C190();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::ShaderFamily>::`vftable';
    v10 = sub_18001246C(&v19, a4);
    v18[0] = *a3;
    v18[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v11 = sub_180017648(v20, a2);
    sub_18005F884(v9 + 16, v11, v18, v10);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v12 = *(_QWORD *)(v9 + 24);
    if ( !v12 || !*(_DWORD *)(v12 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v13 = a1[1];
      v14 = 0LL;
      v15 = 0LL;
      if ( v13 )
      {
        v14 = v9 + 16;
        v15 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
      }
      *(_QWORD *)(v9 + 16) = v14;
      v16 = *(volatile signed __int32 **)(v9 + 24);
      *(_QWORD *)(v9 + 24) = v15;
      if ( v16 )
        sub_180010574(v16);
      if ( v13 )
        sub_180010530(v13);
    }
  }
  return a1;
}
