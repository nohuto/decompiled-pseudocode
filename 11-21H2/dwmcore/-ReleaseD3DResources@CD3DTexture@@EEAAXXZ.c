/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1802B39D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UID2D1Bitmap1@@@@YAXAEAPEAUID2D1Bitmap1@@@Z @ 0x18028C054 (--$ReleaseInterface@UID2D1Bitmap1@@@@YAXAEAPEAUID2D1Bitmap1@@@Z.c)
 *     ??$ReleaseInterface@UID3D11RenderTargetView@@@@YAXAEAPEAUID3D11RenderTargetView@@@Z @ 0x18028C090 (--$ReleaseInterface@UID3D11RenderTargetView@@@@YAXAEAPEAUID3D11RenderTargetView@@@Z.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x18028C0CC (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 i; // rdi
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  ReleaseInterface<ID3D11Texture2D>((__int64 *)this + 12);
  if ( *((_QWORD *)this + 21) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 21);
      v4 = *(_QWORD *)(v3 + 8 * i);
      if ( v4 )
      {
        v5 = v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        *(_QWORD *)(v3 + 8 * i) = 0LL;
      }
    }
  }
  v6 = *((_QWORD *)this + 22);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 22) = 0LL;
  }
  ReleaseInterface<ID3D11RenderTargetView>((__int64 *)this + 24);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  ReleaseInterface<ID2D1Bitmap1>((__int64 *)this + 25);
  ReleaseInterface<ID2D1Bitmap1>((__int64 *)this + 26);
}
