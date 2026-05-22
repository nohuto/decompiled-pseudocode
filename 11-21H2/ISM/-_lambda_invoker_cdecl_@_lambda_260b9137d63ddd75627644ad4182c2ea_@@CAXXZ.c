/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CAXXZ @ 0x1800BAA20
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18007B8D0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
