/*
 * XREFs of ?get_Size@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z @ 0x18018BD10
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneBoundingBox::Api::get_Size(
        Windows::UI::Composition::Scenes::SceneBoundingBox::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  float v6; // eax
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __int64 v10; // [rsp+20h] [rbp-18h]

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 112) & 2) != 0 )
  {
    v6 = *((float *)this + 9);
    v10 = *(_QWORD *)((char *)this + 28);
    v7 = (__m128)(unsigned int)v10;
    v8 = (__m128)HIDWORD(v10);
    v7.m128_f32[0] = *(float *)&v10 * 2.0;
    v8.m128_f32[0] = *((float *)&v10 + 1) * 2.0;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v7, v8).m128_u64[0];
    *((float *)a2 + 2) = v6 * 2.0;
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
