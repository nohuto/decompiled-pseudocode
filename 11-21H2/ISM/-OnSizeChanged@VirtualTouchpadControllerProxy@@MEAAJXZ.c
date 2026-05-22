/*
 * XREFs of ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0
 * Callers:
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A1B0 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x18012A410 (-OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18012992C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x180129FD0 (-GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x18012A070 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ?GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x18012A0A0 (-GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x18012AD30 (-RelativeRectToScreen@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUtagRECT@@@Z @ 0x18012B3A8 (-ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Inter.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x18019DDC4 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019DE54 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019E158 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnSizeChanged(VirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v1; // rdi
  const struct Windows::UI::Internal::Input::VirtualTouchpadSize *Size; // rax
  bool v4; // zf
  __int64 v5; // xmm0_8
  double v6; // xmm1_8
  float *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm0_4
  LONG v10; // ecx
  float v11; // xmm1_4
  bool IsActive; // al
  struct tagRECT v14; // xmm6
  VirtualTouchpadContextProvider *v15; // rax
  int v16; // edi
  __int64 v17; // rdx
  VirtualTouchpadContextProvider *Instance; // rax
  struct tagRECT v20; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v22; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v1 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  if ( BamoVirtualTouchpadControllerProxy::GetSizeValid((VirtualTouchpadControllerProxy *)((char *)this + 8))
    && *((_BYTE *)this + 208) )
  {
    Size = BamoVirtualTouchpadControllerProxy::GetSize(v1);
    v4 = *((_BYTE *)this + 208) == 0;
    v5 = *((_QWORD *)Size + 2);
    *(_OWORD *)v21 = *(_OWORD *)Size;
    *(_QWORD *)&v6 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)v21, *(__m128d *)v21);
    *(_QWORD *)&v21[16] = v5;
    if ( v4 )
      std::_Throw_bad_optional_access();
    v20.left = 0;
    v20.top = 0;
    *(float *)&v20.right = *(double *)v21;
    *(float *)&v20.bottom = v6;
    v22 = v20;
    v7 = (float *)CInputTransform::RelativeRectToScreen(v23, &v22);
    v8 = v7[1];
    v9 = *v7 + v7[2];
    v20.left = (int)*v7;
    v10 = (int)v8;
    v11 = v8 + v7[3];
    v20.top = v10;
    v20.right = (int)v9;
    v20.bottom = (int)v11;
    InputTraceLogging::VirtualTouchpad::ServerSizeChanged(
      this,
      (const struct Windows::UI::Internal::Input::VirtualTouchpadSize *)v21,
      &v20);
    *(_QWORD *)&v22.left = *(_QWORD *)&v21[16];
    LOBYTE(v22.right) = 1;
    *(struct tagRECT *)((char *)this + 232) = v22;
    if ( *((_BYTE *)this + 240) && *((double *)this + 29) == 0.0 )
      *((_BYTE *)this + 240) = 0;
    IsActive = BamoVirtualTouchpadControllerProxy::GetIsActive(v1);
    v14 = v20;
    if ( IsActive )
    {
      v4 = *((_BYTE *)this + 228) == 0;
      *(_QWORD *)v21 = this;
      *(struct tagRECT *)&v21[8] = v20;
      if ( v4 )
      {
        Instance = VirtualTouchpadContextProvider::GetInstance();
        v16 = VirtualTouchpadContextProvider::OnTouchpadAdded(Instance, (const struct VirtualTouchpadRect *)v21);
        if ( v16 < 0 )
        {
          v17 = 348LL;
          goto LABEL_15;
        }
      }
      else
      {
        v15 = VirtualTouchpadContextProvider::GetInstance();
        v16 = VirtualTouchpadContextProvider::OnTouchpadUpdated(v15, (const struct VirtualTouchpadRect *)v21);
        if ( v16 < 0 )
        {
          v17 = 339LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcon"
                 "troller\\server\\virtualtouchpadcontrollerproxy.cpp",
            (const char *)(unsigned int)v16);
          return (unsigned int)v16;
        }
      }
    }
    v4 = *((_BYTE *)this + 228) == 0;
    *(struct tagRECT *)((char *)this + 212) = v14;
    if ( v4 )
      *((_BYTE *)this + 228) = 1;
    VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  }
  return 0LL;
}
