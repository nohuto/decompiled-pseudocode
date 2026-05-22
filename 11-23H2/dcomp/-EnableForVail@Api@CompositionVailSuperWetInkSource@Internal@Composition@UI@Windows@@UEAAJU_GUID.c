/*
 * XREFs of ?EnableForVail@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJU_GUID@@III0III0@Z @ 0x180185AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC (-EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::Api::EnableForVail(
        Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::Api *this,
        struct _GUID *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _GUID *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct _GUID *a10)
{
  Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource *v10; // r14
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx

  v10 = (Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::Api *)((char *)this - 168);
  v11 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v11);
  if ( (*((_BYTE *)v10 + 32) & 2) != 0 )
  {
    if ( a5 && a9 && a3 && a7 && a4 == (a5 << 7) + 8 && a8 == 4096 )
    {
      v16 = Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::EnableForVail(
              v10,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              0x1000u,
              a9,
              a10);
      v15 = v16;
      if ( v16 >= 0 )
      {
        v15 = 0;
        goto LABEL_14;
      }
      v17 = 220;
      v18 = v16;
    }
    else
    {
      v15 = -2147024809;
      v17 = 208;
      v18 = -2147024809;
    }
    DoStackCaptureDirect(v18, v17);
    goto LABEL_14;
  }
  v15 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_14:
  Microsoft::WRL2::ContextSession::EndApiEntry(v11);
  return v15;
}
