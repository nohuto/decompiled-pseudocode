/*
 * XREFs of ?CreateD2DDeviceContext@CDxDevice@DirectComposition@@QEAAJPEAPEAUID2D1DeviceContext@@@Z @ 0x180034E48
 * Callers:
 *     ?EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034C64 (-EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDxDevice::CreateD2DDeviceContext(
        DirectComposition::CDxDevice *this,
        struct ID2D1DeviceContext **a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1DeviceContext **))(*(_QWORD *)v3 + 32LL))(
             v3,
             0LL,
             a2);
  return result;
}
