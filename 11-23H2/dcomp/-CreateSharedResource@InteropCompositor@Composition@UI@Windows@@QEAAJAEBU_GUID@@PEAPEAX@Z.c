/*
 * XREFs of ?CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CA74
 * Callers:
 *     ?CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084260 (-CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x180085A44 (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVIntero_ea_180085A44.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x180089BC4 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015C228 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V12_ea_18015C228.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::CreateSharedResource(
        Windows::UI::Composition::InteropCompositor *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rax
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  Microsoft::WRL2::NestableRuntimeClass *v17; // rax
  int v18; // eax
  _QWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+50h] [rbp+20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v21; // [rsp+58h] [rbp+28h] BYREF

  if ( !a3 )
  {
    v9 = -2147024809;
    v13 = 282;
    v14 = -2147024809;
    goto LABEL_21;
  }
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data4;
        if ( !v7 )
        {
          v20 = 0LL;
          v21 = this;
          v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropCompositor *>(
                 &v20,
                 &v21);
          v9 = v8;
          if ( v8 < 0 )
          {
            DoStackCaptureDirect(v8, 0x134u);
            if ( v20 )
              Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v20);
          }
          else
          {
            *a3 = (void *)(((unsigned __int64)v20 + 184) & -(__int64)(v20 != 0LL));
          }
          return v9;
        }
        v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2f251908_7203_4e2a_b764_159606784992.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2f251908_7203_4e2a_b764_159606784992.Data1 )
          v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2f251908_7203_4e2a_b764_159606784992.Data4;
        if ( !v15 )
        {
          v21 = 0LL;
          v19[0] = this;
          LOBYTE(v20) = 1;
          v16 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualReferenceController,Windows::UI::Composition::InteropVisualReferenceController,Windows::UI::Composition::InteropCompositor *,bool>(
                  &v21,
                  v19,
                  &v20);
          v9 = v16;
          if ( v16 < 0 )
          {
            DoStackCaptureDirect(v16, 0x13Eu);
          }
          else
          {
            v17 = v21;
            v21 = 0LL;
            *a3 = (void *)(((unsigned __int64)v17 + 176) & -(__int64)(v17 != 0LL));
          }
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
          return v9;
        }
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 216LL))(*((_QWORD *)this + 57) + 16LL);
        v9 = v18;
        if ( v18 >= 0 )
          return v9;
        v13 = 324;
        v14 = v18;
LABEL_21:
        DoStackCaptureDirect(v14, v13);
        return v9;
      }
    }
  }
  v21 = 0LL;
  v19[0] = this;
  LOBYTE(v20) = 1;
  v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropCompositor *,bool>(
          &v21,
          v19,
          &v20);
  v9 = v11;
  if ( v11 < 0 )
  {
    DoStackCaptureDirect(v11, 0x127u);
  }
  else
  {
    v12 = v21;
    v21 = 0LL;
    *a3 = (void *)(((unsigned __int64)v12 + 296) & -(__int64)(v12 != 0LL));
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v21);
  return v9;
}
