/*
 * XREFs of ?GetHandoffContext@TabletModePositionerHandoffContext@@UEAAJPEAPEAUIAppLayout@@PEAH@Z @ 0x1805C6410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall TabletModePositionerHandoffContext::GetHandoffContext(
        TabletModePositionerHandoffContext *this,
        struct IAppLayout **a2,
        int *a3)
{
  struct IAppLayout **v3; // rbx

  v3 = (struct IAppLayout **)((char *)this + 16);
  *a3 = *((unsigned __int8 *)this + 24);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 2);
  *a2 = *v3;
  return 0LL;
}
