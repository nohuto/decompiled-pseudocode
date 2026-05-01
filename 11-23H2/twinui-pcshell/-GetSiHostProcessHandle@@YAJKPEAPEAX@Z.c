/*
 * XREFs of ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180165E58
 * Callers:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18003C9A0 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180165D90 (-v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1804CDD70 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x180165EF0 (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSiHostProcessHandle(unsigned int a1, void **a2)
{
  HRESULT Instance; // ebx
  int ServerProcessHandle; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *ppv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &GUID_6b3b8d23_fa8d_40b9_8dbd_b950333e2c52,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&ppv);
  if ( Instance >= 0 )
  {
    ServerProcessHandle = IUnknown_GetServerProcessHandle(ppv, a1, a2);
    Instance = ServerProcessHandle;
    if ( ServerProcessHandle < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE,
        (int)"desktop\\internal\\shell\\inc\\private\\ShellInfrastructureHelpers.h",
        (const char *)(unsigned int)ServerProcessHandle);
    else
      Instance = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
