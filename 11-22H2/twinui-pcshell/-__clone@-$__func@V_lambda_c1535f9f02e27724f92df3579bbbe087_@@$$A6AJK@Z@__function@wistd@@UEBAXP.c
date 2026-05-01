/*
 * XREFs of ?__clone@?$__func@V_lambda_c1535f9f02e27724f92df3579bbbe087_@@$$A6AJK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x180211F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_c1535f9f02e27724f92df3579bbbe087_,long (unsigned long)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_c1535f9f02e27724f92df3579bbbe087_,long (unsigned long)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  result = *(_QWORD *)(a1 + 16);
  v2[1] = result;
  return result;
}
