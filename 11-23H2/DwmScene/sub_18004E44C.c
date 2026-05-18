/*
 * XREFs of sub_18004E44C @ 0x18004E44C
 * Callers:
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_18004E44C(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = sub_18001C190();
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderProgram>::`vftable';
    v6 = a2[2];
    a2[2] = 0LL;
    v7 = a2[1];
    a2[1] = 0LL;
    v8 = *a2;
    *a2 = 0LL;
    v5[2] = v8;
    v5[3] = v7;
    v5[4] = v6;
    v5[5] = a2[3];
    v5[6] = a2[4];
    a2[3] = 0LL;
    a2[4] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 2;
  return a1;
}
