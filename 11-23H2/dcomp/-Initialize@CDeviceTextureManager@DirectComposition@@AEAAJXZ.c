/*
 * XREFs of ?Initialize@CDeviceTextureManager@DirectComposition@@AEAAJXZ @ 0x180098A88
 * Callers:
 *     ?Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@Z @ 0x180098700 (-Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AD4D0 (-Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DirectComposition::CDeviceTextureManager::Initialize(DirectComposition::CDeviceTextureManager *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct IUnknown *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct CPresentationManager *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(struct CPresentationManager *, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  struct CPresentationManager *v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 296LL))(
         *((_QWORD *)this + 2) + 8LL,
         *((_QWORD *)this + 5),
         &v15);
  if ( (v2 & 0x80000000) == 0 )
  {
    if ( !v15 )
    {
      v2 = -2147024809;
      v3 = 38LL;
      goto LABEL_3;
    }
    v4 = (struct IUnknown *)*((_QWORD *)this + 5);
    v16 = 0LL;
    v5 = CPresentationManager::Create(v4, &v16);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v7 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v8 = v16;
      (**(void (__fastcall ***)(struct CPresentationManager *, GUID *, char *))v16)(
        v16,
        &GUID_fb562f82_6292_470a_88b1_843661e7f20c,
        (char *)this + 24);
      v9 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
        *((_QWORD *)this + 3),
        &GUID_d6ae97ae_0d90_401a_af03_2ee8c6f858ee,
        (char *)this + 32);
      v10 = *(_QWORD *)v8;
      v11 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      v12 = *(__int64 (__fastcall **)(struct CPresentationManager *, GUID *, char *))(v10 + 80);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v5 = v12(v8, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, (char *)this + 48);
      v2 = v5;
      if ( v5 >= 0 )
      {
        v2 = 0;
        goto LABEL_18;
      }
      v6 = 47LL;
    }
    else
    {
      v6 = 42LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_18:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v16);
    return v2;
  }
  v3 = 37LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
    (const char *)v2);
  return v2;
}
