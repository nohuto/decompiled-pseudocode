/*
 * XREFs of sub_1800C3B3C @ 0x1800C3B3C
 * Callers:
 *     sub_1800C30C0 @ 0x1800C30C0 (sub_1800C30C0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800C8CF4 @ 0x1800C8CF4 (sub_1800C8CF4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800C3B3C(_QWORD *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v20[2]; // [rsp+50h] [rbp-38h] BYREF

  v8 = sub_18001C190();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow>::`vftable';
    v10 = sub_18001246C(&v19, a4);
    v18[0] = *a3;
    v18[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v20[0] = *a2;
    v20[1] = a2[1];
    sub_1800C8CF4(v9 + 16, v20, v18, v10);
  }
  else
  {
    v9 = 0LL;
  }
  v11 = v9 + 16;
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v12 = *(_QWORD *)(v9 + 88);
    if ( !v12 || !*(_DWORD *)(v12 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v13 = a1[1];
      v14 = 0LL;
      v15 = 0LL;
      if ( v13 )
      {
        v14 = v11;
        v15 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
      }
      *(_QWORD *)(v11 + 64) = v14;
      v16 = *(volatile signed __int32 **)(v11 + 72);
      *(_QWORD *)(v11 + 72) = v15;
      if ( v16 )
        sub_180010574(v16);
      if ( v13 )
        sub_180010530(v13);
    }
  }
  return a1;
}
