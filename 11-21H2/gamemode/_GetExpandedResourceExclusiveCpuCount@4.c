/*
 * XREFs of _GetExpandedResourceExclusiveCpuCount@4 @ 0x10005B60
 * Callers:
 *     <none>
 * Callees:
 *     __tlgWriteTransfer_EventWriteTransfer@24 @ 0x10001EBE (__tlgWriteTransfer_EventWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

HRESULT __stdcall GetExpandedResourceExclusiveCpuCount(ULONG *exclusiveCpuCount)
{
  int LargestValidResourceRequest; // eax
  HRESULT v2; // esi
  HRESULT v4; // [esp+Ch] [ebp-80h] BYREF
  ULONG v5; // [esp+10h] [ebp-7Ch] BYREF
  int v6; // [esp+14h] [ebp-78h] BYREF
  char v7[4]; // [esp+18h] [ebp-74h] BYREF
  ULONG v8; // [esp+1Ch] [ebp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+40h] [ebp-4Ch] BYREF
  HRESULT *v10; // [esp+60h] [ebp-2Ch]
  int v11; // [esp+64h] [ebp-28h]
  int v12; // [esp+68h] [ebp-24h]
  int v13; // [esp+6Ch] [ebp-20h]
  ULONG *v14; // [esp+70h] [ebp-1Ch]
  int v15; // [esp+74h] [ebp-18h]
  int v16; // [esp+78h] [ebp-14h]
  int v17; // [esp+7Ch] [ebp-10h]

  *exclusiveCpuCount = 0;
  RtlGetDeviceFamilyInfoEnum(0, &v6, 0);
  if ( v6 == 5 )
  {
    *exclusiveCpuCount = 6;
  }
  else
  {
    LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v7);
    if ( LargestValidResourceRequest < 0 )
    {
      v2 = (unsigned int)&_ImageBase | LargestValidResourceRequest;
      goto LABEL_7;
    }
    *exclusiveCpuCount = v8;
  }
  v2 = 0;
LABEL_7:
  if ( (unsigned int)dword_10008000 > 4 )
  {
    v5 = *exclusiveCpuCount;
    v14 = &v5;
    v10 = &v4;
    v4 = v2;
    v15 = 0;
    v16 = 4;
    v17 = 0;
    v11 = 0;
    v12 = 4;
    v13 = 0;
    _tlgWriteTransfer_EventWriteTransfer((int)&dword_10008000, (unsigned __int8 *)dword_10001A64, 0, 0, 4u, &UserData);
  }
  return v2;
}
