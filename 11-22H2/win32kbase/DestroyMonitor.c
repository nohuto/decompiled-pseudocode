/*
 * XREFs of DestroyMonitor @ 0x1C00A04C0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C00628DC (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C00640F8 (ApiSetzzzUpdateCursorSizes.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0064C78 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00786D0 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     HMMarkObjectDestroy @ 0x1C0096FE0 (HMMarkObjectDestroy.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C00A0634 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0174734 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  struct tagMONITOR *v7; // rcx
  void **i; // rcx
  struct tagMONITOR *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // rax
  char *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  signed __int32 v21[10]; // [rsp+0h] [rbp-28h] BYREF
  char v22; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v22, a1);
  Handle = 0LL;
  v6 = SGDGetUserSessionState(v3, v2, v4, v5);
  if ( (int)CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(v6 + 16840), &Handle) >= 0 )
  {
    rimOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  v7 = (struct tagMONITOR *)*((_QWORD *)gpDispInfo + 13);
  if ( v7 )
  {
    if ( v7 == a1 )
    {
      tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
        (char *)gpDispInfo + 104,
        *((_QWORD *)a1 + 7));
    }
    else
    {
      for ( i = (void **)((char *)v7 + 56); ; i = (void **)((char *)v9 + 56) )
      {
        v9 = (struct tagMONITOR *)*i;
        if ( !*i )
          break;
        if ( v9 == a1 )
        {
          v10 = (_QWORD *)*((_QWORD *)a1 + 7);
          if ( v10 )
            v11 = v10[6];
          else
            v11 = 0LL;
          *((_QWORD *)*(i - 2) + 2) = v11;
          *i = v10;
          break;
        }
      }
    }
  }
  if ( a1 == *((struct tagMONITOR **)gpDispInfo + 12) )
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)gpDispInfo + 12,
      *((_QWORD *)gpDispInfo + 13));
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  v12 = (_DWORD *)*((_QWORD *)a1 + 16);
  if ( v12 )
  {
    --*v12;
    v13 = (char *)*((_QWORD *)a1 + 16);
    if ( !*(_DWORD *)v13 && v13 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
    *((_QWORD *)a1 + 16) = 0LL;
  }
  ApiSetzzzUpdateCursorSizes();
  _InterlockedOr(v21, 0);
  if ( qword_1C0296488 && (int)qword_1C0296488() >= 0 && qword_1C0296490 )
    qword_1C0296490(a1);
  result = HMMarkObjectDestroy(a1, v14, v15, v16);
  if ( (_DWORD)result )
    result = HMFreeObject((unsigned int *)a1, v18, v19, v20);
  if ( v22 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
