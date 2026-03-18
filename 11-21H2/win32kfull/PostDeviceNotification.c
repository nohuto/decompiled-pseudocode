/*
 * XREFs of PostDeviceNotification @ 0x1C0102FA4
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102A40 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0102D4C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01CD100 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0003AF8 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00AE29C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     PostPointerEventMessage @ 0x1C01E8F50 (PostPointerEventMessage.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C0207D08 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // r8d
  __int16 v9; // bp
  __int16 v10; // r14
  struct tagPROCESS_HID_TABLE *v11; // rsi
  int v12; // r15d
  struct tagPROCESS_HID_REQUEST *v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax

  v5 = *((unsigned __int8 *)a2 + 48);
  v9 = 0;
  v10 = 0;
  v11 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  if ( *((_BYTE *)a2 + 48) )
  {
    if ( --v5 )
    {
      if ( v5 == 1 )
      {
        v15 = *((_QWORD *)a2 + 57);
        v9 = *(_WORD *)(v15 + 42);
        v10 = *(_WORD *)(v15 + 40);
      }
    }
    else
    {
      v9 = 1;
      v10 = 6;
    }
  }
  else
  {
    v9 = 1;
    v10 = 2;
  }
  v12 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)1);
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 59), 568LL, a4, 1LL);
      if ( a4 == 1 )
      {
        v12 = 712;
      }
      else if ( a4 == 2 )
      {
        v12 = 713;
      }
      PostMessage(-1, v12, a5, 0);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v10 && *((_WORD *)a1 + 8) == v9 )
      PostHidNotification(a1, a2, v5);
  }
  else
  {
    while ( v11 != (struct tagPROCESS_HID_TABLE *)&RawInputManagerObject::gHidRequestTable[4] )
    {
      v13 = InProcessDeviceTypeRequestTable(v11, v9, v10);
      if ( v13 )
        PostHidNotification(v13, a2, v14);
      v11 = *(struct tagPROCESS_HID_TABLE **)v11;
    }
  }
}
