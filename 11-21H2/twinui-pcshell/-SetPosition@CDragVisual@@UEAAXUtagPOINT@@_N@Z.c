/*
 * XREFs of ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180533A80
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180534170 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180535948 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180535CEC (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::SetPosition(CDragVisual *this, struct tagPOINT a2, char a3)
{
  CDragVisual *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rcx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 39) != a2 )
  {
    v11.Ptr = (ULONGLONG)a2;
    v5 = (CDragVisual *)((char *)this - 24);
    v6 = *((unsigned int *)this + 31);
    *((_QWORD *)this + 39) = v11.Ptr;
    if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect((char *)this - 24, v6) )
    {
      if ( *((_BYTE *)this + 250) || *((_DWORD *)this + 31) == 6 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
        v8 = 1LL;
      else
        v8 = 5LL;
      CDragVisual::_UpdateThumbnail(v5, v8, 1LL);
    }
    v9 = *((_DWORD *)this + 31) == 6;
    *((_BYTE *)this + 250) = 0;
    if ( v9 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
    {
      CDragVisual::_ClearVisualFeedback(v5);
      *((_BYTE *)v5 + 326) = 1;
    }
    if ( *((_BYTE *)this + 256) && SetWindowRgn(*((HWND *)this + 16), 0LL, 1) )
      *((_BYTE *)this + 256) = 0;
    v10 = *((_QWORD *)this + 9);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9));
    }
    if ( a3 && *((_BYTE *)this + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        MICROSOFT_TWINUI_PUBLISHER_Context,
        &DragVisual_TargetChanged_Info,
        v7,
        1u,
        &v11);
  }
}
