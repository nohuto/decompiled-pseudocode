/*
 * XREFs of ?GetOldAppLayout@CAppLayoutOperation@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x180791F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetOldAppLayout(CAppLayoutOperation *this, struct IAppLayout **a2)
{
  struct IAppLayout **v2; // rbx

  v2 = (struct IAppLayout **)((char *)this + 24);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 3);
  *a2 = *v2;
  return 0LL;
}
