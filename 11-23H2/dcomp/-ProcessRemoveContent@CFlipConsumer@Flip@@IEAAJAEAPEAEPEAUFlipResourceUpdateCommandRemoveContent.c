/*
 * XREFs of ?ProcessRemoveContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandRemoveContent@@@Z @ 0x1801ABAC4
 * Callers:
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetContentCallbackForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIFlipContentCallback@@_KPEAI@Z @ 0x1801AB1F8 (-GetContentCallbackForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIFlipContentCallback@@_KPEAI@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ProcessRemoveContent(
        Flip::CFlipConsumer *this,
        unsigned __int8 **a2,
        struct FlipResourceUpdateCommandRemoveContent *a3)
{
  struct IFlipContentCallback *ContentCallbackForIdNoRef; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF

  ContentCallbackForIdNoRef = Flip::CFlipConsumer::GetContentCallbackForIdNoRef(this, *((_QWORD *)a3 + 1), &v16);
  v7 = (*(__int64 (__fastcall **)(struct IFlipContentCallback *))(*(_QWORD *)ContentCallbackForIdNoRef + 32LL))(ContentCallbackForIdNoRef);
  v8 = v7;
  if ( v7 < 0 )
  {
    v13 = 495;
    v14 = v7;
    goto LABEL_8;
  }
  v9 = 2LL * v16;
  v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * v16 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_DWORD *)this + 22);
  if ( v16 >= v11 )
  {
    v8 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x21Fu);
    v13 = 499;
    v14 = -2147024809;
LABEL_8:
    DoStackCaptureDirect(v14, v13);
    return v8;
  }
  v12 = v11 - 1;
  if ( v16 < (unsigned int)v12 )
    *(_OWORD *)(*((_QWORD *)this + 8) + 8 * v9) = *(_OWORD *)(*((_QWORD *)this + 8) + 16 * v12);
  --*((_DWORD *)this + 22);
  v8 = 0;
  *a2 = (unsigned __int8 *)a3 + 16;
  return v8;
}
