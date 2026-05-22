/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CA@XZ @ 0x1800A6AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x1800596F0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
