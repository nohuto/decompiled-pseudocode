/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801DFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020678 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800207A4 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801DFA94 (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(CaptureBitsResponse *this)
{
  int SectionBitmap; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int Bits; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  SectionBitmap = CaptureBitsResponse::CreateSectionBitmap(this);
  v4 = SectionBitmap;
  if ( SectionBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, SectionBitmap, 0x50u, 0LL);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x52u, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bits, 0x56u, 0LL);
    }
  }
  v9 = (*(__int64 (__fastcall **)(CaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 56LL))(this, v4);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x59u, 0LL);
  return v11;
}
