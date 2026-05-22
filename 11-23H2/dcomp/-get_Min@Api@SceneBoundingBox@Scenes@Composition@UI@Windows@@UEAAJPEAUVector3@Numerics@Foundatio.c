/*
 * XREFs of ?get_Min@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z @ 0x18018BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneBoundingBox::Api::get_Min(
        Windows::UI::Composition::Scenes::SceneBoundingBox::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  float v8; // xmm0_4
  __int64 v10; // [rsp+20h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 112) & 2) != 0 )
  {
    v10 = *(_QWORD *)((char *)this + 28);
    v11 = *((_QWORD *)this + 2);
    v6 = (__m128)(unsigned int)v11;
    v7 = (__m128)HIDWORD(v11);
    v6.m128_f32[0] = *(float *)&v11 - *(float *)&v10;
    v7.m128_f32[0] = *((float *)&v11 + 1) - *((float *)&v10 + 1);
    v8 = *((float *)this + 6) - *((float *)this + 9);
    *(_QWORD *)a2 = _mm_unpacklo_ps(v6, v7).m128_u64[0];
    *((float *)a2 + 2) = v8;
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
