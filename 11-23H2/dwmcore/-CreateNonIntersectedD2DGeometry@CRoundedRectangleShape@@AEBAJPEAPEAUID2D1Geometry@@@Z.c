/*
 * XREFs of ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180035DC4
 * Callers:
 *     ?EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ @ 0x1800362A8 (-EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180035D28 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x18003C2D0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18003CF20 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18003CF70 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  __int64 v2; // r11
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CRoundedRectangleGeometryData *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct ID2D1GeometrySink **); // rdi
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v22; // r11
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  struct ID2D1GeometrySink *v28; // rcx
  struct ID2D1GeometrySink *v29; // [rsp+30h] [rbp-40h] BYREF
  __int128 v30; // [rsp+38h] [rbp-38h] BYREF
  __int128 v31; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v32[16]; // [rsp+58h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 2);
  v5 = 0;
  if ( *(float *)(v2 + 64) > 0.0 )
    goto LABEL_4;
  if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v2 + 16)) )
  {
    v29 = 0LL;
    v31 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect(v7, v32, v8, v9);
    v25 = *g_DeviceManager;
    v30 = v31;
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct ID2D1GeometrySink **))(v25 + 40))(
            g_DeviceManager,
            &v31,
            &v29);
    v5 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x175u, 0LL);
      goto LABEL_18;
    }
    *a2 = v29;
LABEL_4:
    if ( !*a2 )
    {
      *(_QWORD *)&v30 = 0LL;
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v30);
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v30);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x18Du, 0LL);
      }
      else
      {
        v15 = v30;
        v29 = 0LL;
        v16 = *(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v30 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
        v17 = v16(v15, &v29);
        v5 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x190u, 0LL);
        }
        else
        {
          CRoundedRectangleShape::AddNonIntersectedD2DGeometry(this, v29);
          v19 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v29 + 72LL))(v29);
          v5 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x192u, 0LL);
          }
          else
          {
            *a2 = (struct ID2D1Geometry *)v30;
            *(_QWORD *)&v30 = 0LL;
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v30);
    }
    return v5;
  }
  if ( !CRoundedRectangleGeometryData::IsEllipse(v7, v6, v8, v9) )
    goto LABEL_4;
  CRoundedRectangleGeometryData::GetBaseRect(v12, &v30, v10, v11);
  *((float *)&v31 + 1) = (float)(*((float *)&v30 + 1) + *((float *)&v30 + 3)) * 0.5;
  *(float *)&v31 = (float)(*(float *)&v30 + *((float *)&v30 + 2)) * 0.5;
  *((_QWORD *)&v31 + 1) = *(_QWORD *)(v22 + 32);
  v29 = 0LL;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct ID2D1GeometrySink **))(*g_DeviceManager + 56LL))(
          g_DeviceManager,
          &v31,
          &v29);
  v5 = v23;
  if ( v23 >= 0 )
  {
    *a2 = v29;
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x184u, 0LL);
LABEL_18:
  v28 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return v5;
}
