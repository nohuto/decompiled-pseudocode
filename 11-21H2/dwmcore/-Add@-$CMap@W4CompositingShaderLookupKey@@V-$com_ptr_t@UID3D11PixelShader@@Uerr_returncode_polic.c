/*
 * XREFs of ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18027CC68
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18027E284 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18003AF88 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMap<enum CompositingShaderLookupKey,wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>,CMapEqualHelper<enum CompositingShaderLookupKey,wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>>>::Add(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  LPVOID v6; // rax
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r8
  char *v12; // rdx
  __int64 v13; // rcx

  v6 = DefaultHeap::Realloc(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = (char *)DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
  {
    *v11 = *a2;
    v9 = *(char **)(a1 + 8);
  }
  v12 = &v9[8 * v10];
  if ( v12 )
  {
    v13 = *a3;
    *(_QWORD *)v12 = *a3;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
