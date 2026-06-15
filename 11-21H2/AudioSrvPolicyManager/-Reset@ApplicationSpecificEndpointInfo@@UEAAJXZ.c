/*
 * XREFs of ?Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ @ 0x18003CE50
 * Callers:
 *     <none>
 * Callees:
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003CF44 (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::Reset(ApplicationSpecificEndpointInfo *this)
{
  char v2; // bp
  void **v3; // rdi
  __int64 v4; // r14
  void *v5; // rsi
  DWORD LastError; // ebx
  void *v7; // rsi
  DWORD v8; // ebx

  v2 = 0;
  v3 = (void **)((char *)this + 168);
  v4 = 9LL;
  do
  {
    v5 = *(v3 - 9);
    if ( v5 || *v3 )
    {
      v2 = 1;
      if ( v5 )
      {
        LastError = GetLastError();
        CoTaskMemFree(v5);
        SetLastError(LastError);
      }
    }
    *(v3 - 9) = 0LL;
    v7 = *v3;
    if ( *v3 )
    {
      v8 = GetLastError();
      CoTaskMemFree(v7);
      SetLastError(v8);
    }
    *v3++ = 0LL;
    --v4;
  }
  while ( v4 );
  if ( v2 )
    ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(this, 2LL, 0x7FFFLL);
  return 0LL;
}
