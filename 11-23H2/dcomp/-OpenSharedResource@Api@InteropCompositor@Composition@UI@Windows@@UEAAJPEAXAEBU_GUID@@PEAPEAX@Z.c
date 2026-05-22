/*
 * XREFs of ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x18002B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAX@Z @ 0x18005DC8C (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@2.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x1800608A4 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NA.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReference@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x18015C080 (--$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropComposito.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::OpenSharedResource(
        Windows::UI::Composition::InteropCompositor::Api *this,
        void *a2,
        const struct _GUID *a3,
        void **a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rdi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  Microsoft::WRL2::NestableRuntimeClass *v22; // rax
  Microsoft::WRL2::NestableRuntimeClass *v23; // rcx
  int v24; // eax
  _QWORD v25[2]; // [rsp+30h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v26; // [rsp+70h] [rbp+30h] BYREF
  void *v27; // [rsp+78h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v28; // [rsp+88h] [rbp+48h] BYREF

  v27 = a2;
  *a4 = 0LL;
  v4 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (*((_BYTE *)v4 + 32) & 2) == 0 )
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_9;
  }
  v9 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1 )
    v9 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data4;
  if ( v9 )
  {
    v15 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1 )
      v15 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data4;
    if ( !v15 )
      goto LABEL_24;
    v16 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1 )
      v16 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data4;
    if ( !v16 )
      goto LABEL_24;
    v17 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1 )
      v17 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data4;
    if ( !v17 )
    {
LABEL_24:
      v28 = 0LL;
      LOBYTE(v26) = 1;
      v25[0] = v4;
      v21 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropCompositor *,bool,void * &>(
              &v28,
              v25,
              &v26,
              &v27);
      v11 = v21;
      if ( v21 < 0 )
      {
        DoStackCaptureDirect(v21, 0x333u);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v28);
        goto LABEL_9;
      }
      v22 = v28;
      v28 = 0LL;
      *a4 = (void *)(((unsigned __int64)v22 + 296) & -(__int64)(v22 != 0LL));
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v28);
      goto LABEL_8;
    }
    v18 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data1 )
      v18 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data4;
    if ( v18 )
    {
      v19 = (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL);
      v20 = (*(__int64 (__fastcall **)(__int64, void *, const struct _GUID *, void **))(*(_QWORD *)v19 + 232LL))(
              v19,
              a2,
              a3,
              a4);
      v11 = v20;
      if ( v20 < 0 )
      {
        DoStackCaptureDirect(v20, 0x34Cu);
        goto LABEL_9;
      }
      goto LABEL_8;
    }
    v28 = 0LL;
    LOBYTE(v26) = 1;
    v25[0] = v4;
    v24 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualReference,Windows::UI::Composition::InteropVisualReference,Windows::UI::Composition::InteropCompositor *,bool,void * &>(
            &v28,
            v25,
            &v26,
            &v27);
    v11 = v24;
    if ( v24 >= 0 )
    {
      v12 = v28;
      v13 = (unsigned __int64)v28 + 152;
      goto LABEL_7;
    }
    DoStackCaptureDirect(v24, 0x344u);
    v23 = v28;
  }
  else
  {
    v26 = 0LL;
    v28 = v4;
    v10 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropCompositor *,void * &>(
            &v26,
            &v28,
            &v27);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v26;
      v13 = (unsigned __int64)v26 + 184;
LABEL_7:
      *a4 = (void *)(v13 & -(__int64)(v12 != 0LL));
LABEL_8:
      v11 = 0;
      goto LABEL_9;
    }
    DoStackCaptureDirect(v10, 0x324u);
    v23 = v26;
  }
  if ( v23 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v23);
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v11;
}
