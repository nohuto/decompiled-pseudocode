/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B2FD0
 * Callers:
 *     ?Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18012FB40 (-Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x1801B2C88 (--4-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801B3254 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  unsigned int v3; // ebx
  struct ID2D1Factory **v4; // r14
  struct ID2D1Factory *v6; // r15
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct ID2D1Factory *, struct ID2D1Geometry **); // rbx
  signed int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct ID2D1GeometrySink **); // rdi
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  struct ID2D1Geometry *v16; // rax
  struct ID2D1GeometrySink *v18; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Geometry *v19; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = (struct ID2D1Factory **)((char *)this + 40);
  v19 = 0LL;
  v6 = a2;
  if ( !a2 )
    v6 = *v4;
  if ( !*((_QWORD *)this + 8) || v6 != *v4 )
  {
    v8 = *(_QWORD *)v6;
    v18 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct ID2D1Factory *, struct ID2D1Geometry **))(v8 + 80);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
    v10 = v9(v6, &v19);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x67u, 0LL);
    }
    else
    {
      v11 = (__int64)v19;
      v12 = *(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v19 + 136LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
      v13 = v12(v11, &v18);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x68u, 0LL);
      }
      else
      {
        v14 = CPathData::PushIntoSink(this, v18);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x6Au, 0LL);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v18 + 72LL))(v18);
          v3 = v15;
          if ( v15 >= 0 )
          {
            if ( v6 == *v4 )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, (signed __int64)v19, 0LL) )
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=((__int64 *)&v19, *((_QWORD *)this + 8));
              else
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
            goto LABEL_15;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x6Cu, 0LL);
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=((__int64 *)&v19, *((_QWORD *)this + 8));
LABEL_15:
  v16 = v19;
  v19 = 0LL;
  *a3 = v16;
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
  return v3;
}
