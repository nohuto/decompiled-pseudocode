/*
 * XREFs of ?OnAnimatedPropertyChanged@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18013A090
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXMMM_N0@Z @ 0x18013C480 (-UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXMMM_N0@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        bool a5,
        bool a6,
        float *a7,
        __int16 a8)
{
  float v9; // xmm6_4
  float v10; // xmm6_4
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  float v13; // xmm6_4
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // r8d
  __int64 v18; // [rsp+40h] [rbp-28h]
  float v19; // [rsp+48h] [rbp-20h]

  switch ( a3 )
  {
    case 3u:
      Windows::UI::Composition::Interactions::InteractionTracker::UpdateScrollValues(
        (Windows::UI::Composition::Interactions::InteractionTracker *)a1,
        *a7,
        a7[1],
        a7[3],
        a6,
        a5);
      return 0;
    case 0x17u:
      if ( a6 )
      {
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          24,
          *a7);
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          25,
          a7[1]);
      }
      if ( a5 )
      {
        *(_QWORD *)(a1 + 268) = *(_QWORD *)a7;
        *(float *)(a1 + 276) = a7[2];
      }
      return 0;
    case 0x1Au:
      if ( a6 )
      {
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          27,
          *a7);
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          28,
          a7[1]);
      }
      if ( a5 )
      {
        *(_QWORD *)(a1 + 280) = *(_QWORD *)a7;
        *(float *)(a1 + 288) = a7[2];
      }
      return 0;
    case 0x1Du:
      v9 = *a7;
      if ( a6 )
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          29,
          *a7);
      if ( a5 )
        *(float *)(a1 + 296) = v9;
      return 0;
    case 0x1Eu:
      v10 = *a7;
      if ( a6 )
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          30,
          *a7);
      if ( a5 )
        *(float *)(a1 + 300) = v10;
      return 0;
    case 0x3Du:
      if ( a6 )
      {
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          62,
          *a7);
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          63,
          a7[1]);
      }
      if ( a5 )
      {
        v18 = *(_QWORD *)a7;
        v11 = (__m128)LODWORD(FLOAT_1_0);
        v19 = a7[2];
        v11.m128_f32[0] = 1.0 - COERCE_FLOAT(*(_QWORD *)a7);
        v12 = (__m128)LODWORD(FLOAT_1_0);
        *(_BYTE *)(a1 + 316) = 1;
        v12.m128_f32[0] = 1.0 - *((float *)&v18 + 1);
        *(_QWORD *)(a1 + 304) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        *(float *)(a1 + 312) = 1.0 - v19;
      }
      return 0;
    case 0x40u:
      v13 = *a7;
      if ( a6 )
        DirectComposition::CDevice::ResourceSetFloatProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          64,
          *a7);
      if ( a5 )
      {
        *(_BYTE *)(a1 + 324) = 1;
        *(float *)(a1 + 320) = 1.0 - v13;
      }
      return 0;
  }
  if ( a3 - 1 <= 1 )
  {
    if ( a6 )
    {
      if ( a3 == 1 )
      {
        v16 = 18;
      }
      else
      {
        if ( a3 != 2 )
          return 0;
        v16 = 33;
      }
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        v16,
        0);
    }
    return 0;
  }
  if ( a3 - 56 <= 4 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  v14 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, (__int64)a7, a8);
  v15 = v14;
  if ( v14 >= 0 )
    return 0;
  DoStackCaptureDirect(v14, 0x518u);
  return v15;
}
