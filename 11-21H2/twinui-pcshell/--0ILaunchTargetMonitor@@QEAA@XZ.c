/*
 * XREFs of ??0ILaunchTargetMonitor@@QEAA@XZ @ 0x1800A4440
 * Callers:
 *     ??0CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAA@XZ @ 0x1800A40A8 (--0CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A4CA8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Mic.c)
 *     ??0CImmersiveWindowFactoryBase@@QEAA@XZ @ 0x1800A4DF4 (--0CImmersiveWindowFactoryBase@@QEAA@XZ.c)
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800B76AC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800D173C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800D2D8C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1800D2D8C.c)
 *     ??0CWRLExecuteCommandBase@@QEAA@XZ @ 0x180448A20 (--0CWRLExecuteCommandBase@@QEAA@XZ.c)
 *     ??0CLaunchToMonitor@@QEAA@XZ @ 0x1805EFE50 (--0CLaunchToMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800D2E88 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

ILaunchTargetMonitor *__fastcall ILaunchTargetMonitor::ILaunchTargetMonitor(ILaunchTargetMonitor *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  return this;
}
