/*
 * XREFs of ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B65B8
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180006890 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800031B4 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B66D0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B6818 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B6898 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 */

__int64 __fastcall CDesktopThumbnail::FreezeDesktopThumbnail(struct CWindowData *a1, bool a2)
{
  int DesktopThumbnail; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  CDesktopThumbnail *v7; // rdi
  CDesktopThumbnailBase *v8; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  CBaseObject *v11; // rdi
  int v12; // eax
  struct tagRECT v14; // [rsp+30h] [rbp-28h] BYREF
  CDesktopThumbnail *v15; // [rsp+70h] [rbp+18h] BYREF
  CBaseObject *v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
  v5 = DesktopThumbnail;
  if ( DesktopThumbnail >= 0 )
  {
    v6 = *((_QWORD *)a1 + 17);
    v7 = v15;
    v8 = v15;
    *((_QWORD *)v15 + 35) = v6;
    updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
    v5 = updated;
    if ( updated >= 0 )
    {
      v14 = 0LL;
      PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v7, &v14, &v16);
      v11 = v16;
      v5 = PerMonitorDesktopThumbnail;
      if ( PerMonitorDesktopThumbnail >= 0 )
      {
        v12 = CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(v16, a2);
        v5 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xFCu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0xFBu);
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xF9u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopThumbnail, 0xF8u);
  }
  return v5;
}
