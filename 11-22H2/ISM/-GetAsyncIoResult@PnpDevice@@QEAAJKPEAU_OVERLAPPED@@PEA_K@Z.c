/*
 * XREFs of ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800F9AA8
 * Callers:
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800F9DE0 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E9DF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x1800F9A18 (-CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z.c)
 */

signed int __fastcall PnpDevice::GetAsyncIoResult(HANDLE *this, DWORD a2, struct _OVERLAPPED *a3, unsigned __int64 *a4)
{
  signed int LastError; // ebx
  signed int result; // eax
  DWORD v9; // eax
  DWORD v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD NumberOfBytesTransferred; // [rsp+38h] [rbp+10h] BYREF

  NumberOfBytesTransferred = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( GetOverlappedResult(this[5], a3, &NumberOfBytesTransferred, 0) )
    goto LABEL_18;
  LastError = GetLastError();
  if ( LastError != 996 )
  {
    PnpDevice::CancelAsyncIo(this, a3);
    if ( LastError )
    {
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      return LastError;
    }
  }
  v9 = WaitForSingleObject(a3->hEvent, 0xFFFFFFFF);
  v10 = v9;
  if ( v9 )
  {
    if ( v9 == 1460 )
    {
      v11 = 158LL;
    }
    else
    {
      PnpDevice::CancelAsyncIo(this, a3);
      v11 = 162LL;
    }
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             v11,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
             (const char *)v10);
  }
  if ( GetOverlappedResult(this[5], a3, &NumberOfBytesTransferred, 0)
    || (PnpDevice::CancelAsyncIo(this, a3), (result = GetLastError()) == 0) )
  {
LABEL_18:
    if ( a4 )
      *a4 = NumberOfBytesTransferred;
    return 0;
  }
  else if ( result > 0 )
  {
    return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
