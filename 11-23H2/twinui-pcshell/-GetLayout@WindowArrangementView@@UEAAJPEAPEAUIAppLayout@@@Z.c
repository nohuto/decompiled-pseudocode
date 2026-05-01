/*
 * XREFs of ?GetLayout@WindowArrangementView@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x1805D1E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall WindowArrangementView::GetLayout(WindowArrangementView *this, struct IAppLayout **a2)
{
  struct IAppLayout **v2; // rbx

  v2 = (struct IAppLayout **)((char *)this + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 9);
  *a2 = *v2;
  return 0LL;
}
