/*
 * XREFs of ?CompareInternal@Aimer@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180096890
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ?CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z @ 0x180081340 (-CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::Aimer::CompareInternal(Spectre::Engine::Aimer *this, const struct Component *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  bool result; // al

  result = 0;
  if ( Spectre::Engine::Component::CompareInternal(this, a2) )
  {
    v4 = _RTDynamicCast_0(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Aimer `RTTI Type Descriptor',
           1);
    if ( !std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)(v4 + 96), (_QWORD *)this + 12)
      && *(_DWORD *)(v5 + 88) == *((_DWORD *)this + 22)
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v5 + 112), (__m128)*(unsigned int *)(v5 + 120)),
              _mm_movelh_ps((__m128)*((unsigned __int64 *)this + 14), (__m128)*((unsigned int *)this + 30)))) & 7) == 7
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v5 + 124), (__m128)*(unsigned int *)(v5 + 132)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 124), (__m128)*((unsigned int *)this + 33)))) & 7) == 7
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v5 + 140), (__m128)*(unsigned int *)(v5 + 148)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 140), (__m128)*((unsigned int *)this + 37)))) & 7) == 7
      && *(float *)(v5 + 136) == *((float *)this + 34) )
    {
      return 1;
    }
  }
  return result;
}
