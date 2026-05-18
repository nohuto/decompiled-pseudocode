/*
 * XREFs of sub_180093A10 @ 0x180093A10
 * Callers:
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_1800961E0 @ 0x1800961E0 (sub_1800961E0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180093AFC @ 0x180093AFC (sub_180093AFC.c)
 *     sub_18009BEC0 @ 0x18009BEC0 (sub_18009BEC0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180093A10(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_18009BEC0(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v6 = *a2;
  v11 = *a2;
  v7 = a2[1];
  v12 = v7;
  v8 = *(_QWORD **)(a1 + 160);
  if ( v8 == *(_QWORD **)(a1 + 168) )
  {
    sub_180093AFC(a1 + 152, v8, &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v6;
    v8[1] = v7;
    v9 = 0LL;
    *(_QWORD *)(a1 + 160) += 16LL;
  }
  if ( v9 )
    sub_180010530(v9);
  return a2;
}
