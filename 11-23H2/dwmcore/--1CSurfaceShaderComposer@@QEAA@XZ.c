/*
 * XREFs of ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180104F4C
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1801033E0 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18010488C (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EA6A4 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 */

void __fastcall CSurfaceShaderComposer::~CSurfaceShaderComposer(CSurfaceShaderComposer *this)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  `vector destructor iterator'(
    (char *)this,
    8LL,
    6LL,
    (void (__fastcall *)(char *))CSurfaceShaderComposer::SurfaceShader::~SurfaceShader);
}
