/*
 * XREFs of sub_18007BF3C @ 0x18007BF3C
 * Callers:
 *     sub_18007C218 @ 0x18007C218 (sub_18007C218.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18007BFD8 @ 0x18007BFD8 (sub_18007BFD8.c)
 *     sub_1800982FC @ 0x1800982FC (sub_1800982FC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007BF3C(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rcx

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    sub_1800982FC(v4 + 16, *a2);
    *v6 = &Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
    sub_18007BFD8(v6 + 2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 16;
  a1[1] = v5;
  return a1;
}
