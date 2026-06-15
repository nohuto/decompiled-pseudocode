/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800469D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(CBaseStreamGroupProxy *this, struct ISaDeviceProxy **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((_QWORD *)this + 11) )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((char *)this + 88);
    *a2 = (struct ISaDeviceProxy *)*((_QWORD *)this + 11);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
