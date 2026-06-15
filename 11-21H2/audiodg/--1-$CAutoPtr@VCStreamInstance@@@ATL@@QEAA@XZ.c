/*
 * XREFs of ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x14005F3EC
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$5 @ 0x140038C7A (_CSubmixImpl--CreateStream_--_1_--dtor$5.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$4 @ 0x14005F94D (_CStreamGroup--CreateBridgeStream_--_1_--dtor$4.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14005FBC5 (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
 * Callees:
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140053D58 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 */

CStreamInstance *__fastcall ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(CStreamInstance **a1)
{
  CStreamInstance *v2; // rcx
  CStreamInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CStreamInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
