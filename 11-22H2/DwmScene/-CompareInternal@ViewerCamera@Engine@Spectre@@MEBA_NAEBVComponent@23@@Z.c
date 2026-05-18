/*
 * XREFs of ?CompareInternal@ViewerCamera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180092510
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::ViewerCamera::CompareInternal(
        Spectre::Engine::ViewerCamera *this,
        const struct Component *a2)
{
  __int64 v4; // rdx
  bool result; // al

  result = 0;
  if ( Spectre::Engine::Camera::CompareInternal(this, a2) )
  {
    v4 = _RTDynamicCast_0(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
           1);
    if ( (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v4 + 1800), (__m128)*(unsigned int *)(v4 + 1808)),
              _mm_movelh_ps((__m128)*((unsigned __int64 *)this + 225), (__m128)*((unsigned int *)this + 452)))) & 7) == 7
      && *(float *)(v4 + 1812) == *((float *)this + 453)
      && *(_DWORD *)(v4 + 1816) == *((_DWORD *)this + 454)
      && *(float *)(v4 + 1820) == *((float *)this + 455)
      && *(float *)(v4 + 1824) == *((float *)this + 456)
      && *(float *)(v4 + 1828) == *((float *)this + 457)
      && *(float *)(v4 + 1832) == *((float *)this + 458)
      && *(float *)(v4 + 1836) == *((float *)this + 459)
      && *(float *)(v4 + 1840) == *((float *)this + 460)
      && *(float *)(v4 + 1844) == *((float *)this + 461)
      && *(float *)(v4 + 1848) == *((float *)this + 462)
      && *(float *)(v4 + 1852) == *((float *)this + 463)
      && *(float *)(v4 + 1856) == *((float *)this + 464)
      && *(float *)(v4 + 1860) == *((float *)this + 465)
      && *(_BYTE *)(v4 + 1864) == *((_BYTE *)this + 1864)
      && *(_DWORD *)(v4 + 1868) == *((_DWORD *)this + 467)
      && *(float *)(v4 + 1872) == *((float *)this + 468)
      && *(float *)(v4 + 1876) == *((float *)this + 469)
      && *(float *)(v4 + 1880) == *((float *)this + 470)
      && *(float *)(v4 + 1884) == *((float *)this + 471)
      && *(float *)(v4 + 1888) == *((float *)this + 472)
      && *(float *)(v4 + 1892) == *((float *)this + 473)
      && *(_BYTE *)(v4 + 1896) == *((_BYTE *)this + 1896)
      && *(_BYTE *)(v4 + 1897) == *((_BYTE *)this + 1897)
      && *(_BYTE *)(v4 + 1898) == *((_BYTE *)this + 1898)
      && *(float *)(v4 + 1900) == *((float *)this + 475) )
    {
      return 1;
    }
  }
  return result;
}
