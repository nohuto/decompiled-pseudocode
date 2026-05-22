/*
 * XREFs of ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88
 * Callers:
 *     _lambda_eee7116e10b79d37d834622fcd258a1d_::_lambda_invoker_cdecl_ @ 0x1800A3F10 (_lambda_eee7116e10b79d37d834622fcd258a1d_--_lambda_invoker_cdecl_.c)
 *     ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04 (-CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LU.c)
 *     ?DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1800A5CF4 (-DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV-$.c)
 *     ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C (-EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11D.c)
 *     ?OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Device@@@Z @ 0x1800A61E8 (-OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Dev.c)
 *     ?RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z @ 0x1800A6508 (-RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 *     ?ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x1800A666C (-ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??R?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEBAXPEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A5284 (--R-$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEB.c)
 */

__int64 __fastcall std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::operator()();
  return result;
}
