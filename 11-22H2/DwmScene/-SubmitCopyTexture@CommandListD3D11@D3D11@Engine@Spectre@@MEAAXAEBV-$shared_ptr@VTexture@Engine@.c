/*
 * XREFs of ?SubmitCopyTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@0@Z @ 0x1800D0C60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ??$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x1800CF87C (--$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA-AV-$share.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitCopyTexture(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *DeviceTexture; // rax
  char v6; // di
  __int64 v7; // rcx
  std::_Ref_count_base *v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rcx
  char v11; // bl
  char v12; // bl
  std::_Ref_count_base *v13; // r12
  __int64 v14; // rbx
  __int64 *Texture; // rax
  __int64 *v16; // rax
  int v17; // r14d
  __int64 v18; // rsi
  void (__fastcall *v19)(__int64, __int64, _QWORD, __int64, _DWORD, int); // rdi
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rsi
  void (__fastcall *v24)(__int64, __int64, __int64); // rdi
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // [rsp+40h] [rbp-99h] BYREF
  __int64 v28; // [rsp+48h] [rbp-91h] BYREF
  std::_Ref_count_base *v29; // [rsp+50h] [rbp-89h]
  __int64 v30; // [rsp+58h] [rbp-81h] BYREF
  __int64 v31; // [rsp+60h] [rbp-79h] BYREF
  std::_Ref_count_base *v32; // [rsp+68h] [rbp-71h]
  _QWORD v33[2]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v35[16]; // [rsp+90h] [rbp-49h] BYREF
  int v36; // [rsp+A0h] [rbp-39h]
  unsigned int v37; // [rsp+A4h] [rbp-35h]
  _BYTE v38[16]; // [rsp+C0h] [rbp-19h] BYREF
  int v39; // [rsp+D0h] [rbp-9h]
  int v40; // [rsp+D4h] [rbp-5h]

  LODWORD(v27) = 0;
  if ( *a2 )
  {
    DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*a2, &v31, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *DeviceTexture;
  }
  else
  {
    v29 = 0LL;
    DeviceTexture = &v28;
    v6 = 2;
    v7 = 0LL;
  }
  v33[0] = v7;
  v8 = (std::_Ref_count_base *)DeviceTexture[1];
  v33[1] = v8;
  *DeviceTexture = 0LL;
  DeviceTexture[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
  }
  if ( (v6 & 1) != 0 )
  {
    v6 &= ~1u;
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
  }
  if ( *a3 )
  {
    v9 = Spectre::Engine::Texture::GetDeviceTexture(*a3, &v31, *(_DWORD *)(a1 + 88));
    v10 = *v9;
    v11 = 4;
  }
  else
  {
    v29 = 0LL;
    v9 = &v28;
    v10 = 0LL;
    v11 = 8;
  }
  v12 = v6 | v11;
  v34[0] = v10;
  v13 = (std::_Ref_count_base *)v9[1];
  v34[1] = v13;
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v12 & 8) != 0 )
  {
    v12 &= ~8u;
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
  }
  if ( (v12 & 4) != 0 && v32 )
    std::_Ref_count_base::_Decref(v32);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v28, v33);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v31, v34);
  v14 = v31;
  Texture = Spectre::Engine::D3D11::TextureD3D11::GetTexture(v31, &v27);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*Texture + 80LL))(*Texture, v35);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  v16 = Spectre::Engine::D3D11::TextureD3D11::GetTexture(v28, &v27);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*v16 + 80LL))(*v16, v38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  if ( v40 == 1 && v37 > 1 )
  {
    v17 = v36;
    if ( v36 == 39 )
      v17 = v39;
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, int))(*(_QWORD *)v18 + 456LL);
    v20 = *Spectre::Engine::D3D11::TextureD3D11::GetTexture(v14, &v30);
    v21 = Spectre::Engine::D3D11::TextureD3D11::GetTexture(v28, &v27);
    v19(v18, *v21, 0LL, v20, 0, v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    v22 = &v30;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 144);
    v24 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 376LL);
    v25 = *Spectre::Engine::D3D11::TextureD3D11::GetTexture(v14, &v27);
    v26 = Spectre::Engine::D3D11::TextureD3D11::GetTexture(v28, &v30);
    v24(v23, *v26, v25);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    v22 = &v27;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
