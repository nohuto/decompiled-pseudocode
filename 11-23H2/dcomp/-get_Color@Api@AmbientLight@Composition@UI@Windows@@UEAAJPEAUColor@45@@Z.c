/*
 * XREFs of ?get_Color@Api@AmbientLight@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z @ 0x180175030
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AmbientLight::Api::get_Color(
        Windows::UI::Composition::AmbientLight::Api *this,
        struct Windows::UI::Color *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __m128 v6; // xmm0
  int v8; // [rsp+30h] [rbp+8h]

  *(_DWORD *)a2 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 30);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 232) & 2) != 0 )
  {
    v6 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 24));
    LOBYTE(v8) = (int)(float)((float)(_mm_shuffle_ps(v6, v6, 255).m128_f32[0] * 255.0) + 0.5);
    BYTE1(v8) = (int)(float)((float)(v6.m128_f32[0] * 255.0) + 0.5);
    BYTE2(v8) = (int)(float)((float)(_mm_shuffle_ps(v6, v6, 85).m128_f32[0] * 255.0) + 0.5);
    HIBYTE(v8) = (int)(float)((float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] * 255.0) + 0.5);
    *(_DWORD *)a2 = v8;
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
