/*
 * XREFs of ?SetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x1803EE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentConfig@@@Z @ 0x1800588CC (--4-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentC.c)
 */

__int64 __fastcall ApplicationViewOperation::SetWindowingEnvironmentConfig(
        ApplicationViewOperation *this,
        struct IWindowingEnvironmentConfig *a2)
{
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::operator=((__int64 *)this + 23, (__int64)a2);
  return 0LL;
}
