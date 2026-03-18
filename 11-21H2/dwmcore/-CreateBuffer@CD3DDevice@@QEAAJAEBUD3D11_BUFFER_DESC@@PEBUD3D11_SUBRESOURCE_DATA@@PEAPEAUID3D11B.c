/*
 * XREFs of ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x18003B328
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003B108 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x18003B8BC (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18003C7E8 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateBuffer(
        CD3DDevice *this,
        const struct D3D11_BUFFER_DESC *a2,
        const struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Buffer **a4)
{
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 272);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0x640u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct D3D11_BUFFER_DESC *, const struct D3D11_SUBRESOURCE_DATA *))(**((_QWORD **)this + 69) + 24LL))(
           *((_QWORD *)this + 69),
           a2,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x644u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v5, 0LL);
}
