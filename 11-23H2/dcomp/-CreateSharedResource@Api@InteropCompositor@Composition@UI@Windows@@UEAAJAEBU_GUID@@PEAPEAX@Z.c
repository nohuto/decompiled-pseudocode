/*
 * XREFs of ?CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084260
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CA74 (-CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F640 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F7E8 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@A_ea_18015F7E8.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSharedResource(
        Windows::UI::Composition::InteropCompositor::Api *this,
        const struct _GUID *a2,
        void **a3)
{
  Windows::UI::Composition::InteropCompositor *v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  int SharedResource; // eax
  unsigned int v9; // ebx
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  _QWORD v15[2]; // [rsp+20h] [rbp-10h] BYREF
  char v16; // [rsp+50h] [rbp+20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+68h] [rbp+38h] BYREF

  v3 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216);
  v15[0] = (char *)this - 1216;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_11;
  }
  if ( !a3 )
  {
    v9 = -2147024809;
    v11 = 33;
    v12 = -2147024809;
    goto LABEL_22;
  }
  *a3 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_adbab0af_769d_40da_a180_540472cbcc34.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adbab0af_769d_40da_a180_540472cbcc34.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_adbab0af_769d_40da_a180_540472cbcc34.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data4;
    if ( v7 )
    {
      SharedResource = Windows::UI::Composition::InteropCompositor::CreateSharedResource(v3, a2, a3);
      v9 = SharedResource;
      if ( SharedResource >= 0 )
      {
LABEL_10:
        v9 = 0;
        goto LABEL_11;
      }
      v11 = 58;
      v12 = SharedResource;
LABEL_22:
      DoStackCaptureDirect(v12, v11);
      goto LABEL_11;
    }
    v17 = 0LL;
    v16 = 1;
    v13 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropCompositor * &,bool>(
            &v17,
            v15,
            &v16);
    v9 = v13;
    if ( v13 >= 0 )
    {
LABEL_20:
      *a3 = (void *)(((unsigned __int64)v17 + 136) & -(__int64)(v17 != 0LL));
      goto LABEL_10;
    }
    v14 = 52;
  }
  else
  {
    v17 = 0LL;
    v16 = 1;
    v13 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropCompositor * &,bool>(
            &v17,
            v15,
            &v16);
    v9 = v13;
    if ( v13 >= 0 )
      goto LABEL_20;
    v14 = 42;
  }
  DoStackCaptureDirect(v13, v14);
  if ( v17 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v17);
LABEL_11:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v9;
}
