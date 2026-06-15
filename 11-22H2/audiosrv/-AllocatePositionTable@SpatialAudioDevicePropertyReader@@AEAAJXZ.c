/*
 * XREFs of ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18001B214
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001AD30 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::AllocatePositionTable(SpatialAudioDevicePropertyReader *this)
{
  unsigned int v2; // esi
  void *v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // r14
  void *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF
  const CHAR *v17; // [rsp+80h] [rbp+18h] BYREF

  v2 = -2147024882;
  v3 = _aligned_malloc(0x110uLL, 0x10uLL);
  v4 = 0LL;
  *((_QWORD *)this + 6) = v3;
  v5 = (_QWORD *)((char *)this + 400);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v5 + 24LL))(
           *v5,
           (char *)this + 134,
           v3,
           272LL);
  v6 = _aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 7) = v6;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v5 + 24LL))(
           *v5,
           (char *)this + 280,
           v6,
           272LL);
    v2 = v7;
    if ( v7 < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v15 = v7;
        v16 = 443;
        v17 = "SpatialAudioDevicePropertyReader::AllocatePositionTable";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          (int)&dword_180195406,
          v9,
          v10,
          &v17,
          (__int64)&v16,
          (__int64)&v15);
      }
    }
    else
    {
      v11 = (__m128)*((unsigned int *)this + 71);
      v12 = (__m128)*((unsigned int *)this + 72);
      v11.m128_f32[0] = v11.m128_f32[0] * 0.5;
      v12.m128_f32[0] = v12.m128_f32[0] * 0.5;
      v13 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v12), (__m128)_xmm);
      do
      {
        *(__m128 *)(*((_QWORD *)this + 7) + v4) = _mm_add_ps(v13, *(__m128 *)(*((_QWORD *)this + 7) + v4));
        v4 += 16LL;
      }
      while ( v4 < 272 );
    }
  }
  return v2;
}
