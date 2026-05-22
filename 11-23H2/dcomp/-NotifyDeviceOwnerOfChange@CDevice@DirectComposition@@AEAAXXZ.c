/*
 * XREFs of ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20
 * Callers:
 *     ?VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z @ 0x18000F564 (-VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z.c)
 *     ?VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z @ 0x180035648 (-VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z @ 0x180058BA0 (-ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z.c)
 *     ?CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@Z @ 0x180059C30 (-CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@.c)
 *     ?VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z @ 0x180061EB4 (-VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z.c)
 *     ?ResourceSetAnimationProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x180089008 (-ResourceSetAnimationProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z @ 0x1800F2170 (-InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z.c)
 *     ?ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z @ 0x1800F424C (-ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z.c)
 *     ?VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z @ 0x1800F6BCC (-VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z.c)
 *     ?VisualRemoveChild@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F6D60 (-VisualRemoveChild@CDevice@DirectComposition@@QEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDevice::NotifyDeviceOwnerOfChange(DirectComposition::CDevice *this)
{
  void (__fastcall ***v1)(_QWORD); // rcx

  v1 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  if ( v1 )
    (**v1)(v1);
}
