/*
 * XREFs of sub_18005B3E0 @ 0x18005B3E0
 * Callers:
 *     sub_18008E060 @ 0x18008E060 (sub_18008E060.c)
 *     sub_180092590 @ 0x180092590 (sub_180092590.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18001C5B8 @ 0x18001C5B8 (sub_18001C5B8.c)
 *     sub_180047DEC @ 0x180047DEC (sub_180047DEC.c)
 *     sub_1800586CC @ 0x1800586CC (sub_1800586CC.c)
 *     sub_1800586E4 @ 0x1800586E4 (sub_1800586E4.c)
 *     sub_180058724 @ 0x180058724 (sub_180058724.c)
 *     sub_180059D64 @ 0x180059D64 (sub_180059D64.c)
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 *     sub_1800813C0 @ 0x1800813C0 (sub_1800813C0.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

bool __fastcall sub_18005B3E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  float v5; // xmm6_4
  char v6; // al
  bool v7; // al

  if ( !(unsigned __int8)sub_1800813C0() )
    return 0;
  v4 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         1);
  if ( sub_1800586E4((_QWORD *)(v4 + 104), (_QWORD *)(a1 + 104)) )
    return 0;
  if ( *(_DWORD *)(v4 + 128) != *(_DWORD *)(a1 + 128) )
    return 0;
  if ( sub_180011DF0((_QWORD *)(v4 + 136), (_QWORD *)(a1 + 136)) )
    return 0;
  if ( sub_180011DF0((_QWORD *)(v4 + 152), (_QWORD *)(a1 + 152)) )
    return 0;
  if ( *(_DWORD *)(v4 + 172) != *(_DWORD *)(a1 + 172) )
    return 0;
  if ( *(_DWORD *)(v4 + 176) != *(_DWORD *)(a1 + 176) )
    return 0;
  if ( sub_18001C5B8((_QWORD *)(v4 + 216), (_QWORD *)(a1 + 216)) )
    return 0;
  if ( sub_18001C5B8((_QWORD *)(v4 + 248), (_QWORD *)(a1 + 248)) )
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
  sub_18005D90C(v4);
  v5 = *(float *)(v4 + 332);
  sub_18005D90C(a1);
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
    if ( !v6 )
      return 0;
    v7 = sub_180059D64((_DWORD *)(v4 + 372), (_DWORD *)(a1 + 372));
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
      && !sub_180058724((__int64 **)(v4 + 416), (_QWORD *)(a1 + 416))
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
      && !sub_1800586CC((_QWORD *)(v4 + 1616), a1 + 1616)
      && sub_180047DEC(*(_QWORD *)(v4 + 1696), *(_QWORD *)(a1 + 1696))
      && !*(_QWORD *)(v4 + 1760)
      && !*(_QWORD *)(a1 + 1760);
}
