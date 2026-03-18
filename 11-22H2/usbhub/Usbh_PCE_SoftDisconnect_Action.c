/*
 * XREFs of Usbh_PCE_SoftDisconnect_Action @ 0x1C0036144
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C001FF20 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_Disable @ 0x1C0034550 (UsbhPCE_Disable.c)
 *     UsbhPCE_SD_Resume @ 0x1C0034BD8 (UsbhPCE_SD_Resume.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003A19C (UsbhSoftDisconnectPdo.c)
 */

void __fastcall Usbh_PCE_SoftDisconnect_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  KIRQL v18; // r8
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rax
  KIRQL v28; // r8
  KIRQL v29; // [rsp+68h] [rbp+10h] BYREF

  v29 = 0;
  FdoExt(a1);
  v6 = (int)UsbhLockPcqWithTag(a1, a2, 8, &v29, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v7,
      0xDu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(unsigned __int16 *)(a2 + 4),
      a2);
  Log(a1, 512, 1597534256, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (int)v6 > 10 )
  {
    v19 = v6 - 11;
    if ( !v19 )
      goto LABEL_27;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_14;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_14;
    v22 = v21 - 1;
    if ( !v22 )
    {
LABEL_26:
      Log(a1, 512, 1597534259, v8, *(unsigned __int16 *)(a2 + 4));
      UsbhUnlockPcqWithTag(a1, a2, v29);
      UsbhPCE_Disable(a1, *(_WORD *)(a2 + 4), a3);
      Log(a1, 512, 1597534260, a3, *(unsigned __int16 *)(a2 + 4));
      UsbhSoftDisconnectPdo(a1, 22LL, a3);
      UsbhPCE_SD_Resume(a1, a2, a3);
      return;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_14;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_14;
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 2 )
        {
LABEL_25:
          v27 = *(unsigned int *)(a2 + 2400);
          v28 = v29;
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(32 * v27 + a2 + 1384) = 19;
          UsbhUnlockPcqWithTag(a1, a2, v28);
          return;
        }
      }
    }
LABEL_27:
    Log(a1, 512, 1597534258, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhUnlockPcqWithTag(a1, a2, v29);
    v16 = 21LL;
    goto LABEL_28;
  }
  if ( (_DWORD)v6 == 10 )
    goto LABEL_14;
  v9 = v6 - 1;
  if ( !v9 )
    goto LABEL_27;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_26;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_26;
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_26;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_14;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_27;
  v15 = v14 - 1;
  if ( !v15 )
  {
    Log(a1, 512, 1597534257, v8, *(unsigned __int16 *)(a2 + 4));
    v17 = *(unsigned int *)(a2 + 2400);
    v18 = v29;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(32 * v17 + a2 + 1384) = 1;
    UsbhUnlockPcqWithTag(a1, a2, v18);
    v16 = 20LL;
    goto LABEL_28;
  }
  if ( (unsigned int)(v15 - 1) > 1 )
    goto LABEL_25;
LABEL_14:
  Log(a1, 512, 1597534261, v8, *(unsigned __int16 *)(a2 + 4));
  UsbhFlushPortChangeQueue(a1, a2);
  UsbhUnlockPcqWithTag(a1, a2, v29);
  v16 = 23LL;
LABEL_28:
  UsbhSoftDisconnectPdo(a1, v16, a3);
}
