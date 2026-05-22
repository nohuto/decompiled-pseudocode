/*
 * XREFs of ??$?4U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A3FB4
 * Callers:
 *     ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C (-EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11D.c)
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 * Callees:
 *     ??R?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEBAXPEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A5284 (--R-$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEB.c)
 */

__int64 *__fastcall std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::operator=<std::default_delete<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::operator()();
  }
  return a1;
}
