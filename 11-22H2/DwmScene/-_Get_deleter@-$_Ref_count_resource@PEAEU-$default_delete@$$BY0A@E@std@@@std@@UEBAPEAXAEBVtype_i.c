/*
 * XREFs of ?_Get_deleter@?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x1800D8980
 * Callers:
 *     <none>
 * Callees:
 *     ??8type_info@@QEBA_NAEBV0@@Z @ 0x180047D6C (--8type_info@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  if ( type_info::operator==(a2, (__int64)&std::default_delete<unsigned char [0]> `RTTI Type Descriptor') )
    return a1 + 16;
  else
    return 0LL;
}
