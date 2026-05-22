/*
 * XREFs of ?ProcessUpdateContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandUpdateContent@@@Z @ 0x1801ABBAC
 * Callers:
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIUnknown@@_KPEAI@Z @ 0x1801AB1AC (-GetBufferForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIUnknown@@_KPEAI@Z.c)
 *     ?GetContentCallbackForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIFlipContentCallback@@_KPEAI@Z @ 0x1801AB1F8 (-GetContentCallbackForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIFlipContentCallback@@_KPEAI@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ProcessUpdateContent(
        Flip::CFlipConsumer *this,
        unsigned __int8 **a2,
        struct FlipResourceUpdateCommandUpdateContent *a3)
{
  struct IFlipContentCallback *ContentCallbackForIdNoRef; // rax
  unsigned int *BufferForIdNoRef; // r8
  __int64 v8; // rdx
  struct IFlipContentCallback *v9; // r14
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  void **v14; // [rsp+20h] [rbp-28h] BYREF
  char *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  v14 = &Flip::CFlipPropertySet::`vftable';
  v16 = 0;
  v15 = 0LL;
  ContentCallbackForIdNoRef = Flip::CFlipConsumer::GetContentCallbackForIdNoRef(this, *((_QWORD *)a3 + 1), 0LL);
  v8 = *((_QWORD *)a3 + 2);
  v9 = ContentCallbackForIdNoRef;
  if ( v8 )
    BufferForIdNoRef = (unsigned int *)Flip::CFlipConsumer::GetBufferForIdNoRef(this, v8, BufferForIdNoRef);
  v10 = *((_DWORD *)a3 + 6);
  if ( v10 )
  {
    v16 = *((_DWORD *)a3 + 6);
    v15 = (char *)a3 + 32;
  }
  else
  {
    v10 = v16;
  }
  v11 = (*(__int64 (__fastcall **)(struct IFlipContentCallback *, unsigned __int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(
          v9,
          (unsigned __int64)&v14 & -(__int64)(v10 != 0),
          BufferForIdNoRef);
  v12 = v11;
  if ( v11 < 0 )
    DoStackCaptureDirect(v11, 0x21Cu);
  else
    *a2 = (unsigned __int8 *)a3 + *((unsigned int *)a3 + 6) + 32;
  return v12;
}
