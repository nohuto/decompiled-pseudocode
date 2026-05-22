/*
 * XREFs of ??1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A51A0
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A4790 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A4F28 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_JUSharedDevice@SharedD3DDevi.c)
 *     ??R?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEBAXPEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A5284 (--R-$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@QEB.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A45C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_.c)
 *     ??1?$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4FA8 (--1-$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U-$default_delete@VDeviceR.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice::~SharedDevice(
        Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 3));
    std::_Deallocate<16,0>(
      *((void **)this + 2),
      (*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  std::unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::~unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>((_QWORD *)this + 1);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this);
}
