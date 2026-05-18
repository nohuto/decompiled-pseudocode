/*
 * XREFs of ?_Get_deleter@?$_Ref_count_resource@PEAXV_lambda_2bb65f39da56ce77b91824536c9c4563_@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x180088FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??8type_info@@QEBA_NAEBV0@@Z @ 0x180047D6C (--8type_info@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall std::_Ref_count_resource<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  if ( type_info::operator==(a2, (__int64)&_lambda_2bb65f39da56ce77b91824536c9c4563_ `RTTI Type Descriptor') )
    return a1 + 16;
  else
    return 0LL;
}
