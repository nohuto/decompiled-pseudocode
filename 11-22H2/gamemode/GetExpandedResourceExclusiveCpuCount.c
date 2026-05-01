/*
 * XREFs of GetExpandedResourceExclusiveCpuCount @ 0x180005D40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001008 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 */

HRESULT __stdcall GetExpandedResourceExclusiveCpuCount(ULONG *exclusiveCpuCount)
{
  int LargestValidResourceRequest; // ebx
  HRESULT v3; // ebx
  ULONG v4; // eax
  int v6; // [rsp+30h] [rbp-39h] BYREF
  ULONG v7; // [rsp+34h] [rbp-35h] BYREF
  HRESULT v8; // [rsp+38h] [rbp-31h] BYREF
  char v9[4]; // [rsp+40h] [rbp-29h] BYREF
  ULONG v10; // [rsp+44h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+70h] [rbp+7h] BYREF
  HRESULT *v12; // [rsp+90h] [rbp+27h]
  int v13; // [rsp+98h] [rbp+2Fh]
  int v14; // [rsp+9Ch] [rbp+33h]
  ULONG *v15; // [rsp+A0h] [rbp+37h]
  int v16; // [rsp+A8h] [rbp+3Fh]
  int v17; // [rsp+ACh] [rbp+43h]

  *exclusiveCpuCount = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v6, 0LL);
  if ( v6 == 5 )
  {
    *exclusiveCpuCount = 6;
  }
  else
  {
    LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v9);
    if ( LargestValidResourceRequest < 0 )
    {
      v3 = LargestValidResourceRequest | 0x10000000;
      goto LABEL_7;
    }
    *exclusiveCpuCount = v10;
  }
  v3 = 0;
LABEL_7:
  if ( (unsigned int)dword_18000D000 > 4 )
  {
    v4 = *exclusiveCpuCount;
    v17 = 0;
    v14 = 0;
    v7 = v4;
    v15 = &v7;
    v12 = &v8;
    v16 = 4;
    v13 = 4;
    v8 = v3;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18000D000,
      (unsigned __int8 *)dword_18000A09C,
      0LL,
      0LL,
      4u,
      &v11);
  }
  return v3;
}
