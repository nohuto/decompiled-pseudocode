/*
 * XREFs of std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Delete_this @ 0x180102620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1800C6760 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Delete_this(
        void *a1,
        __int64 a2)
{
  char v3; // bl

  v3 = a2;
  std::_Func_class<void,>::_Tidy((__int64)a1 + 8, a2);
  if ( v3 )
    std::_Deallocate<8,0>(a1, 0x48uLL);
}
