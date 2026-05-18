/*
 * XREFs of sub_1800F26AC @ 0x1800F26AC
 * Callers:
 *     sub_1800F29D0 @ 0x1800F29D0 (sub_1800F29D0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800F161C @ 0x1800F161C (sub_1800F161C.c)
 *     sub_1800F19C8 @ 0x1800F19C8 (sub_1800F19C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800F26AC(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rdi
  __int64 *v3; // r8
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (__int64 *)(a1 + 552);
  v3 = *(__int64 **)(a1 + 552);
  v4 = (__int64 *)v3[1];
  v5 = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v5 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( !*((_BYTE *)v5 + 25) && a2 >= *((_DWORD *)v5 + 8) && v5 != v3 )
    return v5 + 5;
  v7 = sub_18001D684();
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`vftable';
    sub_1800F161C((void *)(v7 + 16));
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (_QWORD *)sub_1800F19C8(v2, &v12);
  v10 = 0LL;
  v11[0] = *v9;
  *v9 = v8 + 16;
  v11[1] = v9[1];
  v9[1] = v8;
  sub_180010910((__int64)v11);
  sub_180010910((__int64)&v10);
  return v9;
}
