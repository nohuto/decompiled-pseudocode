/*
 * XREFs of ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800F52B4
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F0550 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UGazeInputInfo@@@@QEAA@_K@Z @ 0x1800F4F90 (--0-$VariableSizedPayloadStorage@UGazeInputInfo@@@@QEAA@_K@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800F55A4 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800F56EC (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1801AF204 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801AF2E8 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::Initialize(GazeHidDevice *this, struct GazeDeviceInfo *a2)
{
  char *v4; // rbp
  int v5; // eax
  unsigned int v6; // edi
  NTSTATUS Caps; // eax
  int v9; // edi
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rax
  void **v13; // rdi
  int updated; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v17; // [rsp+30h] [rbp+8h]

  *((_QWORD *)this + 4) = a2;
  v4 = (char *)this + 128;
  v5 = GazeHidParser::Initialize((PHIDP_CAPS)this + 2, *((PHIDP_PREPARSED_DATA *)this + 6));
  v6 = v5;
  if ( v5 >= 0 )
  {
    Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 6), (PHIDP_CAPS)((char *)this + 60));
    if ( Caps >= 0 )
    {
      *((_DWORD *)a2 + 392) = 0;
      v9 = 0;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 6LL) )
      {
        v9 = 1;
        *((_DWORD *)a2 + 392) = 1;
      }
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 10LL) )
        *((_DWORD *)a2 + 392) = v9 | 2;
      *((_DWORD *)a2 + 396) = *((_DWORD *)this + 14);
      memcpy_0((char *)a2 + 1588, *((const void **)this + 6), *((unsigned int *)this + 14));
      *((_DWORD *)this + 58) = *((unsigned __int16 *)this + 32) + 96;
      v17 = operator new(0x10uLL);
      v12 = VariableSizedPayloadStorage<GazeInputInfo>::VariableSizedPayloadStorage<GazeInputInfo>(
              (__int64)v17,
              *((unsigned int *)this + 58),
              v10,
              v11);
      v13 = (void **)*((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = v12;
      if ( v13 )
      {
        if ( *v13 )
          operator delete[](*v13);
        operator delete(v13);
      }
      updated = GazeHidDevice::TryUpdateDisplayMapping(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)updated);
      v15 = GazeHidDevice::TryUpdateCalibrationState(this);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)v15);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1C,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)Caps);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
