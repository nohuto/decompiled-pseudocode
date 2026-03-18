/*
 * XREFs of DestroyMonitor @ 0x1C0050630
 * Callers:
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C004A840 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C004E70C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1C0050738 (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C005083C (ApiSetzzzUpdateCursorSizes.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C005201C (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0052044 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C017FAEC (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1)
{
  struct tagMONITOR *v2; // rcx
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  const struct tagDomLock *v5; // rcx
  __int64 result; // rax
  char **v7; // rcx
  struct tagMONITOR **i; // rcx
  struct tagMONITOR *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v13, a1);
  Handle = 0LL;
  if ( (int)CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle) >= 0 )
  {
    rimOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  if ( a1 == (struct tagMONITOR *)gpMonitorMouse )
    gpMonitorMouse = 0LL;
  v2 = (struct tagMONITOR *)*((_QWORD *)gpDispInfo + 13);
  if ( v2 )
  {
    if ( v2 == a1 )
    {
      tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
        (char *)gpDispInfo + 104,
        *((_QWORD *)a1 + 7));
    }
    else
    {
      for ( i = (struct tagMONITOR **)((char *)v2 + 56); ; i = (struct tagMONITOR **)((char *)v9 + 56) )
      {
        v9 = *i;
        if ( !*i )
          break;
        if ( v9 == a1 )
        {
          v10 = *((_QWORD *)a1 + 7);
          v11 = (__int64)*(i - 2);
          if ( v10 )
            *(_QWORD *)(v11 + 16) = *(_QWORD *)(v10 + 48);
          else
            *(_QWORD *)(v11 + 16) = 0LL;
          *i = (struct tagMONITOR *)v10;
          break;
        }
      }
    }
  }
  if ( a1 == *((struct tagMONITOR **)gpDispInfo + 12) )
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (char *)gpDispInfo + 96,
      *((_QWORD *)gpDispInfo + 13));
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  v3 = (_DWORD *)*((_QWORD *)a1 + 16);
  if ( v3 )
  {
    --*v3;
    v4 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( !*v4 && v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v4);
    *((_QWORD *)a1 + 16) = 0LL;
  }
  ApiSetzzzUpdateCursorSizes();
  _InterlockedOr(v12, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  LockRefactorStagingAssertOwned(v5);
  result = HMMarkObjectDestroyWorker(a1);
  if ( (_DWORD)result )
    result = HMFreeObject(v7);
  if ( v13 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
