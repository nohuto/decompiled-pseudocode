/*
 * XREFs of sub_180034924 @ 0x180034924
 * Callers:
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 *     sub_180093310 @ 0x180093310 (sub_180093310.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002DFDC @ 0x18002DFDC (sub_18002DFDC.c)
 *     sub_18002E12C @ 0x18002E12C (sub_18002E12C.c)
 */

_QWORD *__fastcall sub_180034924(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = (_QWORD *)(sub_18002DFDC(*a3) + 8);
  if ( sub_180011DD0(v4) )
  {
    v5 = sub_18001C190();
    v6 = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::TweenManager>::`vftable';
      sub_18002E12C(v5 + 16);
    }
    else
    {
      v6 = 0LL;
    }
    *v4 = v6 + 16;
    v7 = v4[1];
    v4[1] = v6;
    if ( v7 )
      sub_180010530(v7);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = v4[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a2 = *v4;
  a2[1] = v4[1];
  return a2;
}
