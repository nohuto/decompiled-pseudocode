/*
 * XREFs of ?CompareInternal@Light@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180043190
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z @ 0x180081340 (-CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::Light::CompareInternal(Spectre::Engine::Light *this, const struct Component *a2)
{
  __int64 v4; // rax
  bool result; // al

  result = Spectre::Engine::Component::CompareInternal(this, a2)
        && (v4 = _RTDynamicCast_0(
                   a2,
                   0LL,
                   &Spectre::Engine::Component `RTTI Type Descriptor',
                   &Spectre::Engine::Light `RTTI Type Descriptor',
                   1),
            *(_DWORD *)(v4 + 128) == *((_DWORD *)this + 32))
        && *(_DWORD *)(v4 + 120) == *((_DWORD *)this + 30)
        && *(_BYTE *)(v4 + 124) == *((_BYTE *)this + 124)
        && !_mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 88), *(__m128 *)((char *)this + 88)))
        && *(float *)(v4 + 104) == *((float *)this + 26)
        && *(float *)(v4 + 116) == *((float *)this + 29)
        && *(float *)(v4 + 112) == *((float *)this + 28)
        && *(_DWORD *)(v4 + 108) == *((_DWORD *)this + 27);
  return result;
}
