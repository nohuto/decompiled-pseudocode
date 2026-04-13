/*
 * XREFs of ?PositionAppOnScreen@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@I@Z @ 0x18003BC10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::LaunchManager::PositionAppOnScreen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  LPVOID v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  LPVOID v12; // rcx
  __int64 v13; // rcx
  LPVOID v14; // rdx
  int v15; // eax
  int v17; // [rsp+20h] [rbp-20h]
  int v18; // [rsp+20h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPVOID v22; // [rsp+60h] [rbp+20h] BYREF

  v22 = 0LL;
  v7 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      v17);
    v9 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v8,
      v18);
    return v8;
  }
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v22 + 96LL))(
          v22,
          &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
          &GUID_ae8be46e_c53f_4d3c_bca2_52b917ba6d04,
          &v20);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10,
      v17);
    v11 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_10;
  }
  v13 = v20;
  v20 = 0LL;
  v19 = v13;
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
    v13 = v19;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, a2, a3, a4);
  v8 = v15;
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v15,
      v17);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v8;
}
