/*
 * XREFs of ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800CCEE4
 * Callers:
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800C7FB0 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180181778 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x1801820D4 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TrySetTrackingEnabled(GazeHidDevice *this, unsigned __int8 a2)
{
  int v2; // esi
  char *v4; // r14
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void *v11[2]; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v14; // [rsp+A0h] [rbp+30h] BYREF
  int v15; // [rsp+B0h] [rbp+40h] BYREF
  int v16; // [rsp+B8h] [rbp+48h] BYREF

  v2 = a2;
  v11[0] = 0LL;
  v14 = 0;
  v11[1] = v11;
  v12 = 1;
  v4 = (char *)this + 128;
  v6 = GazeHidParser::CreateReportForProperty((char *)this + 128, 1LL, v11, &v14);
  if ( v6 >= 0 )
  {
    v15 = v2;
    v7 = v14;
    v8 = GazeHidParser::SetPropertyValue(v4, v5, &v15);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v16 = 0;
      v9 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721297LL, v11[0], v7, 0LL, 0, &v16, 0);
      if ( v9 >= 0 )
        v6 = 0;
      else
        v6 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x110,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  if ( v11[0] )
    operator delete[](v11[0]);
  return (unsigned int)v6;
}
