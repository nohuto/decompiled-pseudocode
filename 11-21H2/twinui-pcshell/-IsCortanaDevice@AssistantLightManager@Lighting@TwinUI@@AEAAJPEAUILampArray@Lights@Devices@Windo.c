/*
 * XREFs of ?IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windows@@PEA_N@Z @ 0x18055EDDC
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055E718 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::IsCortanaDevice(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Lights::ILampArray *a2,
        bool *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  char v8; // di
  int v9; // esi
  __int64 (__fastcall *v10)(struct Windows::Devices::Lights::ILampArray *, _QWORD, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  TwinUI::Lighting::AssistantLightManager *v18; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF
  char v20; // [rsp+90h] [rbp+50h] BYREF
  int v21; // [rsp+98h] [rbp+58h] BYREF

  v18 = this;
  *a3 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, int *))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v19);
  if ( v5 < 0 )
  {
    v6 = 98LL;
    goto LABEL_3;
  }
  if ( v19 != 6 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, __int64 *))(*(_QWORD *)a2 + 96LL))(
         a2,
         &v16);
  if ( v5 < 0 )
  {
    v6 = 106LL;
    goto LABEL_3;
  }
  if ( v16 > 500000 )
    return 0LL;
  LODWORD(v18) = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, TwinUI::Lighting::AssistantLightManager **))(*(_QWORD *)a2 + 88LL))(
         a2,
         &v18);
  if ( v5 < 0 )
  {
    v6 = 115LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = 0;
  v9 = 0;
  if ( (int)v18 <= 0 )
    return 0LL;
  do
  {
    v15 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, _QWORD, __int64 *))(*(_QWORD *)a2 + 160LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v11 = v10(a2, (unsigned int)v9, &v15);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 122LL;
      goto LABEL_31;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 56LL))(v15, &v20);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 125LL;
      goto LABEL_31;
    }
    if ( (v20 & 8) == 0 )
      goto LABEL_22;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 72LL))(v15, &v21);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 133LL;
      goto LABEL_31;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 88LL))(v15, &v13);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 134LL;
      goto LABEL_31;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 80LL))(v15, &v14);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 135LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
      return (unsigned int)v5;
    }
    if ( v21 >= 48 && v13 >= 48 && v14 >= 48 )
      v8 = 1;
LABEL_22:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    ++v9;
  }
  while ( v9 < (int)v18 );
  if ( v8 )
    *a3 = 1;
  return 0LL;
}
