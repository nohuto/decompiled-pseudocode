/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CA@XZ @ 0x1800E2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180061E20 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = __std_init_once_begin_initialize(
             &`RawInputProvidersTracing::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
