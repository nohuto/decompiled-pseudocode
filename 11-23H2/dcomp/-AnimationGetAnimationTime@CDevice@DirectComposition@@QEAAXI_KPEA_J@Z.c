/*
 * XREFs of ?AnimationGetAnimationTime@CDevice@DirectComposition@@QEAAXI_KPEA_J@Z @ 0x1800EDD28
 * Callers:
 *     ?GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z @ 0x1800E8BF0 (-GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 */

void __fastcall DirectComposition::CDevice::AnimationGetAnimationTime(
        DirectComposition::CDevice *this,
        int a2,
        __int64 a3,
        __int64 *a4)
{
  _DWORD *v8; // rbx
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  DirectComposition::CDevice::BeginKernelCommand(this, 0x18u, &v9, 1);
  v8 = v9;
  *(_DWORD *)v9 = 4;
  v8[1] = a2;
  *((_QWORD *)v8 + 1) = a3;
  DirectComposition::CDevice::FlushKernelCommands(this, 1);
  *a4 = *((_QWORD *)v8 + 2);
}
