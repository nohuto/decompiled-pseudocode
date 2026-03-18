/*
 * XREFs of ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800588EC
 * Callers:
 *     ??1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ @ 0x180058880 (--1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ.c)
 * Callees:
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x180058960 (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B31D0 (--$move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInput@@@stde.c)
 */

__int64 __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v6 = *a1;
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - v6) >> 3);
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v4 = 104 * a3;
  v3 = v6 + 8 * ((a1[1] - v6) >> 3);
  if ( a3 != v7 )
  {
LABEL_5:
    v10 = 0LL;
    *(_QWORD *)&v9 = v6;
    *((_QWORD *)&v9 + 1) = v7;
    v12 = 0LL;
    v11 = v9;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
      &v9,
      v4 + v6,
      v3,
      &v11);
  }
  result = detail::destruct_range<EffectInput>(v3 - v4, v3);
  a1[1] -= v4;
  return result;
}
