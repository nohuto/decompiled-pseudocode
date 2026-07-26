/*
 * XREFs of _lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_ @ 0x1C012EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C0121C44 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C012EE98 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 */

void __fastcall lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_(
        _NDIS_MINIPORT_BLOCK *a1,
        NDIS_BIND_LINK_BASE *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  wchar_t *Buffer; // rax

  Miniport = a2->BindState.Miniport;
  Buffer = a2->BindState.Miniport->Reserved4.Buffer;
  if ( Buffer && *((int *)Buffer + 16) < 0 )
  {
    Ndis::BindStack::CreateDynamicBinding((__int64)&a1->Bindings, a2, a1, TapiProxy);
    Miniport = a2->BindState.Miniport;
  }
  if ( Miniport )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Miniport->48, 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)Miniport);
      ExFreePoolWithTag(Miniport, 0x44745042u);
    }
  }
}
