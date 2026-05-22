/*
 * XREFs of wil::details::lambda_call__lambda_c9e730388755799910d9e6aba5840826___::_lambda_call__lambda_c9e730388755799910d9e6aba5840826___ @ 0x1800E3A9C
 * Callers:
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800E4688 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     _RIMDeviceCollection::OnReadEvent_::_1_::dtor$0 @ 0x1800E480C (_RIMDeviceCollection--OnReadEvent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_c9e730388755799910d9e6aba5840826___::_lambda_call__lambda_c9e730388755799910d9e6aba5840826___(
        __int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
    {
      v3 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v3 + 2696) )
      {
        RIMFreeInputBuffer(*(_QWORD *)(v3 + 80));
        result = *(_BYTE **)(a1 + 8);
        *((_QWORD *)result + 337) = 0LL;
      }
    }
  }
  return result;
}
