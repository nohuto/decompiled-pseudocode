/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180008790
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180008740 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x180008818 (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  unsigned int v1; // edi
  int v3; // eax
  volatile signed __int32 *v4; // rbx
  CThumbnailVisual *v5; // rcx
  int updated; // eax
  CBaseObject *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( *((_QWORD *)this + 11) )
    return v1;
  v3 = CThumbnailVisual::Create(&v8);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x105u, 0LL);
    goto LABEL_5;
  }
  v4 = (volatile signed __int32 *)v8;
  v5 = v8;
  *((_QWORD *)v8 + 47) = this;
  updated = CThumbnailVisual::UpdateProperties(v5, *((_DWORD *)this + 9));
  v1 = updated;
  if ( updated >= 0 )
  {
    *((_QWORD *)this + 11) = v4;
    _InterlockedIncrement(v4 + 2);
LABEL_5:
    v4 = (volatile signed __int32 *)v8;
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x109u, 0LL);
LABEL_6:
  if ( v4 )
    CBaseObject::Release((CBaseObject *)v4);
  return v1;
}
