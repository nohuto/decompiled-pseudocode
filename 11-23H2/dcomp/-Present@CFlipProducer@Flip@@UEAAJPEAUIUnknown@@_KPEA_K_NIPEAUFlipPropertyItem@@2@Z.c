/*
 * XREFs of ?Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z @ 0x1801AA7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?Present@CSynchronizationContext@Flip@@QEAAJPEAUIUnknown@@_KPEAX@Z @ 0x1801AC3E4 (-Present@CSynchronizationContext@Flip@@QEAAJPEAUIUnknown@@_KPEAX@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::Present(
        Flip::CFlipProducer *this,
        struct IUnknown *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        bool a5,
        unsigned int a6,
        struct FlipPropertyItem *a7,
        unsigned __int64 *a8)
{
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  HANDLE v18; // rcx
  HANDLE hObject; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-58h] BYREF

  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x100) != 0 )
    McGenEventWrite_EventWriteTransfer((__int64)this, (const EVENT_DESCRIPTOR *)"@", a3, 1u, &v22);
  hObject = 0LL;
  v21 = 0LL;
  v12 = (_QWORD *)*((_QWORD *)this + 11);
  if ( !v12 )
  {
    v13 = -2147467259;
    v14 = 205;
    v15 = -2147467259;
LABEL_14:
    DoStackCaptureDirect(v15, v14);
    goto LABEL_15;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 312LL))(*v12);
  v13 = v16;
  if ( v16 < 0 )
  {
    v14 = 209;
    goto LABEL_13;
  }
  v17 = NtTokenManagerCreateFlipObjectTokenHandle(*((_QWORD *)this + 3), a4, a5, a6, a7, &hObject, &v21, 0LL);
  v16 = HRESULTFromNTSTATUS(v17);
  v13 = v16;
  if ( v16 < 0 )
  {
    v14 = 220;
    goto LABEL_13;
  }
  v16 = Flip::CSynchronizationContext::Present(*((Flip::CSynchronizationContext **)this + 11), a2, a3, hObject);
  v13 = v16;
  if ( v16 < 0 )
  {
    v14 = 226;
LABEL_13:
    v15 = v16;
    goto LABEL_14;
  }
  if ( a8 )
    *a8 = v21;
LABEL_15:
  v18 = hObject;
  if ( hObject )
    CloseHandle(hObject);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x100) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)v18, &FLIP_PRODUCE_PRESENT_Stop, v21, v13);
  return v13;
}
