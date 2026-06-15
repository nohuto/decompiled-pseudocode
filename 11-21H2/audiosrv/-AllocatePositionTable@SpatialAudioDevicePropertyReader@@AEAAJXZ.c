/*
 * XREFs of ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x1800127AC
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180012000 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::AllocatePositionTable(SpatialAudioDevicePropertyReader *this)
{
  unsigned int v2; // esi
  void *v3; // rax
  __int64 v4; // rbx
  void *v5; // rax
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF
  const char *v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = -2147024882;
  v3 = _aligned_malloc(0x110uLL, 0x10uLL);
  v4 = 0LL;
  *((_QWORD *)this + 6) = v3;
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
           *((_QWORD *)this + 50),
           (char *)this + 134,
           v3,
           272LL);
  v5 = _aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 7) = v5;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
           *((_QWORD *)this + 50),
           (char *)this + 280,
           v5,
           272LL);
    v2 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned int)dword_1801C0258 > 2 )
      {
        v14 = v6;
        v15 = 443;
        v16 = "SpatialAudioDevicePropertyReader::AllocatePositionTable";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          (unsigned int)&unk_18018C41C,
          v8,
          v9,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14);
      }
    }
    else
    {
      v10 = (__m128)*((unsigned int *)this + 71);
      v11 = (__m128)*((unsigned int *)this + 72);
      v10.m128_f32[0] = v10.m128_f32[0] * 0.5;
      v11.m128_f32[0] = v11.m128_f32[0] * 0.5;
      v12 = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, v11), (__m128)_xmm);
      do
      {
        *(__m128 *)(v4 + *((_QWORD *)this + 7)) = _mm_add_ps(v12, *(__m128 *)(v4 + *((_QWORD *)this + 7)));
        v4 += 16LL;
      }
      while ( v4 < 272 );
    }
  }
  return v2;
}
