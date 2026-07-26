/*
 * XREFs of _lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_ @ 0x1C01218C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D704 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C013AC08 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 */

void __fastcall lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx

  v3 = *(_QWORD *)(*a2 + 40);
  if ( v3 && *(int *)(v3 + 64) < 0 )
    Ndis::BindStack::CreateDynamicBinding(a1 + 5008, a2, a1, 8LL);
  v4 = *a2;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)v4);
      ExFreePoolWithTag((PVOID)v4, 0x44745042u);
    }
  }
}
