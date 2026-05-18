/*
 * XREFs of sub_18004E210 @ 0x18004E210
 * Callers:
 *     sub_18004D364 @ 0x18004D364 (sub_18004D364.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18008A8AC @ 0x18008A8AC (sub_18008A8AC.c)
 */

_QWORD *__fastcall sub_18004E210(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::PixelShader>::`vftable';
    sub_18008A8AC(v2 + 16, 5LL);
    *(_QWORD *)(v3 + 16) = &Spectre::Engine::PixelShader::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v4 = *(_QWORD *)(v3 + 120);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v5 = a1[1];
      v6 = 0LL;
      v7 = 0LL;
      if ( v5 )
      {
        v6 = v3 + 16;
        v7 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
      }
      *(_QWORD *)(v3 + 112) = v6;
      v8 = *(volatile signed __int32 **)(v3 + 120);
      *(_QWORD *)(v3 + 120) = v7;
      if ( v8 )
        sub_180010574(v8);
      if ( v5 )
        sub_180010530(v5);
    }
  }
  return a1;
}
