/*
 * XREFs of ??R?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEBAXPEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A5284
 * Callers:
 *     ??$?4U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A3FB4 (--$-4U-$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@.c)
 *     ??1?$out_param_t@V?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800A4F58 (--1-$out_param_t@V-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A51A0 (--1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::operator()(
        __int64 a1,
        Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *a2)
{
  if ( a2 )
  {
    Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice::~SharedDevice(a2);
    operator delete(a2);
  }
}
