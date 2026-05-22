/*
 * XREFs of ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC
 * Callers:
 *     ?DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z @ 0x1801AAD80 (-DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     ?ProcessAddBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddBuffer@@@Z @ 0x1801AB438 (-ProcessAddBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpda.c)
 *     ?ProcessAddContent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddContent@@@Z @ 0x1801AB660 (-ProcessAddContent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpd.c)
 *     ?ProcessRemoveBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandRemoveBuffer@@@Z @ 0x1801AB9AC (-ProcessRemoveBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceU.c)
 *     ?ProcessRemoveContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandRemoveContent@@@Z @ 0x1801ABAC4 (-ProcessRemoveContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandRemoveContent.c)
 *     ?ProcessUpdateContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandUpdateContent@@@Z @ 0x1801ABBAC (-ProcessUpdateContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandUpdateContent.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1801ABED0 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ProcessPresent(
        Flip::CFlipConsumer *this,
        struct IFlipPresentCallback *a2,
        __int64 a3,
        struct FlipResourceUpdateCommandRemoveContent *Ptr,
        struct Flip::CFlipPropertySet *a5)
{
  __int64 v7; // r14
  int updated; // eax
  unsigned int v10; // ebx
  unsigned __int8 *v11; // r14
  unsigned int v12; // edx
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-20h] BYREF

  v7 = (unsigned int)a3;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x100) != 0 )
    McGenEventWrite_EventWriteTransfer((__int64)this, (const EVENT_DESCRIPTOR *)">", a3, 1u, &v15);
  updated = (**(__int64 (__fastcall ***)(struct IFlipPresentCallback *, _QWORD, unsigned __int64))a2)(
              a2,
              0LL,
              (unsigned __int64)a5 & -(__int64)(*((_DWORD *)a5 + 4) != 0));
  v10 = updated;
  if ( updated < 0 )
  {
    v12 = 274;
    goto LABEL_25;
  }
  v15.Ptr = (ULONGLONG)Ptr;
  v11 = (unsigned __int8 *)Ptr + v7;
  while ( Ptr < (struct FlipResourceUpdateCommandRemoveContent *)v11 )
  {
    if ( *(_DWORD *)Ptr )
    {
      switch ( *(_DWORD *)Ptr )
      {
        case 1:
          updated = Flip::CFlipConsumer::ProcessRemoveContent(this, (unsigned __int8 **)&v15, Ptr);
          v10 = updated;
          if ( updated < 0 )
          {
            v12 = 312;
            goto LABEL_25;
          }
          goto LABEL_19;
        case 2:
          updated = Flip::CFlipConsumer::ProcessAddBuffer(this, a2, (unsigned __int8 **)&v15, Ptr);
          v10 = updated;
          if ( updated < 0 )
          {
            v12 = 292;
            goto LABEL_25;
          }
          goto LABEL_19;
        case 3:
          updated = Flip::CFlipConsumer::ProcessAddContent(this, a2, (unsigned __int8 **)&v15, Ptr);
          v10 = updated;
          if ( updated < 0 )
          {
            v12 = 299;
            goto LABEL_25;
          }
          goto LABEL_19;
        case 4:
          updated = Flip::CFlipConsumer::ProcessUpdateContent(this, (unsigned __int8 **)&v15, Ptr);
          v10 = updated;
          if ( updated < 0 )
          {
            v12 = 318;
            goto LABEL_25;
          }
          goto LABEL_19;
      }
    }
    else
    {
      updated = Flip::CFlipConsumer::ProcessRemoveBuffer(this, a2, (unsigned __int8 **)&v15, Ptr);
      v10 = updated;
      if ( updated < 0 )
      {
        v12 = 306;
        goto LABEL_25;
      }
LABEL_19:
      Ptr = (struct FlipResourceUpdateCommandRemoveContent *)v15.Ptr;
    }
  }
  updated = (*(__int64 (__fastcall **)(struct IFlipPresentCallback *))(*(_QWORD *)a2 + 32LL))(a2);
  v10 = updated;
  if ( updated >= 0 )
    goto LABEL_26;
  v12 = 328;
LABEL_25:
  DoStackCaptureDirect(updated, v12);
LABEL_26:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x100) != 0 )
    McTemplateU0q_EventWriteTransfer(v13, "?", v10);
  return v10;
}
