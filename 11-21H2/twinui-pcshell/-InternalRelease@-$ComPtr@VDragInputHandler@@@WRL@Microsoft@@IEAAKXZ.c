/*
 * XREFs of ?InternalRelease@?$ComPtr@VDragInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1804D0170
 * Callers:
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x1804CFDDC (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??1?$ComPtr@VDragInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1804CFF14 (--1-$ComPtr@VDragInputHandler@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D006C (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804D0400 (-s_WndProcBase@-$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UITaskbarLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D8D00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1802D8D00.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DragInputHandler>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,ITaskbarLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
