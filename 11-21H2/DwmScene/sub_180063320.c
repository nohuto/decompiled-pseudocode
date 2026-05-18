/*
 * XREFs of sub_180063320 @ 0x180063320
 * Callers:
 *     sub_18009D7E0 @ 0x18009D7E0 (sub_18009D7E0.c)
 *     sub_1800A22D0 @ 0x1800A22D0 (sub_1800A22D0.c)
 * Callees:
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18001DAC0 @ 0x18001DAC0 (sub_18001DAC0.c)
 *     sub_1800604F4 @ 0x1800604F4 (sub_1800604F4.c)
 *     sub_18006050C @ 0x18006050C (sub_18006050C.c)
 *     sub_180060528 @ 0x180060528 (sub_180060528.c)
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 *     sub_18008E6B0 @ 0x18008E6B0 (sub_18008E6B0.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

bool __fastcall sub_180063320(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  float v5; // xmm6_4
  char v6; // al
  bool v7; // zf

  if ( !(unsigned __int8)sub_18008E6B0() )
    return 0;
  v4 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         1);
  if ( sub_18006050C((__int64 *)(v4 + 104), (_QWORD *)(a1 + 104)) )
    return 0;
  if ( *(_DWORD *)(v4 + 128) != *(_DWORD *)(a1 + 128) )
    return 0;
  if ( sub_1800122D0((_QWORD *)(v4 + 136), (_QWORD *)(a1 + 136)) )
    return 0;
  if ( sub_1800122D0((_QWORD *)(v4 + 152), (_QWORD *)(a1 + 152)) )
    return 0;
  if ( *(_DWORD *)(v4 + 172) != *(_DWORD *)(a1 + 172) )
    return 0;
  if ( *(_DWORD *)(v4 + 176) != *(_DWORD *)(a1 + 176) )
    return 0;
  if ( sub_18001DAC0((_QWORD *)(v4 + 216), (_QWORD *)(a1 + 216)) )
    return 0;
  if ( sub_18001DAC0((_QWORD *)(v4 + 248), (_QWORD *)(a1 + 248)) )
    return 0;
  if ( *(_DWORD *)(v4 + 292) != *(_DWORD *)(a1 + 292) )
    return 0;
  if ( _mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 296), *(__m128 *)(a1 + 296))) )
    return 0;
  if ( *(float *)(v4 + 312) != *(float *)(a1 + 312) )
    return 0;
  if ( *(_DWORD *)(v4 + 316) != *(_DWORD *)(a1 + 316) )
    return 0;
  if ( *(float *)(v4 + 320) != *(float *)(a1 + 320) )
    return 0;
  if ( *(float *)(v4 + 324) != *(float *)(a1 + 324) )
    return 0;
  if ( *(float *)(v4 + 328) != *(float *)(a1 + 328) )
    return 0;
  sub_180065C7C(v4);
  v5 = *(float *)(v4 + 332);
  sub_180065C7C(a1);
  if ( v5 != *(float *)(a1 + 332)
    || *(_BYTE *)(v4 + 336) != *(_BYTE *)(a1 + 336)
    || *(float *)(v4 + 340) != *(float *)(a1 + 340)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)*(unsigned __int64 *)(v4 + 344))) & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 352), (__m128)*(unsigned __int64 *)(v4 + 352))) & 3) != 3
    || *(_DWORD *)(v4 + 360) != *(_DWORD *)(a1 + 360)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 364), (__m128)*(unsigned __int64 *)(v4 + 364))) & 3) != 3 )
  {
    return 0;
  }
  v6 = *(_BYTE *)(a1 + 388);
  if ( *(_BYTE *)(v4 + 388) )
  {
    if ( !v6
      || *(_DWORD *)(v4 + 372) != *(_DWORD *)(a1 + 372)
      || *(_DWORD *)(v4 + 376) != *(_DWORD *)(a1 + 376)
      || *(_DWORD *)(v4 + 380) != *(_DWORD *)(a1 + 380) )
    {
      return 0;
    }
    v7 = *(_DWORD *)(v4 + 384) == *(_DWORD *)(a1 + 384);
  }
  else
  {
    v7 = v6 == 0;
  }
  return v7
      && *(float *)(v4 + 392) == *(float *)(a1 + 392)
      && *(float *)(v4 + 396) == *(float *)(a1 + 396)
      && *(float *)(v4 + 400) == *(float *)(a1 + 400)
      && *(float *)(v4 + 404) == *(float *)(a1 + 404)
      && *(float *)(v4 + 408) == *(float *)(a1 + 408)
      && !sub_180060528((char **)(v4 + 416), (_QWORD *)(a1 + 416))
      && *(_DWORD *)(v4 + 440) == *(_DWORD *)(a1 + 440)
      && *(_BYTE *)(v4 + 464) == *(_BYTE *)(a1 + 464)
      && *(_BYTE *)(v4 + 465) == *(_BYTE *)(a1 + 465)
      && *(_QWORD *)(v4 + 480) == *(_QWORD *)(a1 + 480)
      && *(_QWORD *)(v4 + 472) == *(_QWORD *)(a1 + 472)
      && *(_QWORD *)(v4 + 496) == *(_QWORD *)(a1 + 496)
      && *(_QWORD *)(v4 + 488) == *(_QWORD *)(a1 + 488)
      && *(_QWORD *)(v4 + 512) == *(_QWORD *)(a1 + 512)
      && *(_QWORD *)(v4 + 504) == *(_QWORD *)(a1 + 504)
      && *(_QWORD *)(v4 + 528) == *(_QWORD *)(a1 + 528)
      && *(_QWORD *)(v4 + 520) == *(_QWORD *)(a1 + 520)
      && *(_QWORD *)(v4 + 536) == *(_QWORD *)(a1 + 536)
      && !sub_1800604F4((_QWORD *)(v4 + 1616), a1 + 1616)
      && !(unsigned int)_std_type_info_compare(*(_QWORD *)(v4 + 1696) + 8LL, *(_QWORD *)(a1 + 1696) + 8LL)
      && !*(_QWORD *)(v4 + 1760)
      && !*(_QWORD *)(a1 + 1760);
}
