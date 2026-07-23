/*
 * XREFs of _CmRemovePanelDeviceWorker @ 0x140A66FB4
 * Callers:
 *     _CmRemovePanelDevice @ 0x140A66E70 (_CmRemovePanelDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041CC90 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407974E4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B4A8 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140877D4C (_PnpCtxRegQueryInfoKey.c)
 */

__int64 __fastcall CmRemovePanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int CachedContextBaseKey; // ebx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE v13; // rdx
  __int64 v14; // r8
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v19 = 0;
  *a4 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64)&DestinationString);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_25;
  if ( a1 )
    v9 = *(_QWORD *)(a1 + 224);
  else
    v9 = 0LL;
  v10 = 224LL;
  if ( a1 )
    v10 = a1 + 224;
  CachedContextBaseKey = SysCtxRegOpenKey(v9, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&Handle);
  if ( CachedContextBaseKey < 0
    || (a1 ? (v11 = *(_QWORD *)v10) : (v11 = 0LL),
        CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)Handle, (__int64)L"Devices", 0, 3u, (__int64)&KeyHandle),
        CachedContextBaseKey < 0) )
  {
LABEL_25:
    if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
      CachedContextBaseKey = 0;
    goto LABEL_28;
  }
  DestinationString = 0LL;
  CachedContextBaseKey = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( CachedContextBaseKey >= 0 )
    CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &DestinationString);
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 || CachedContextBaseKey >= 0 )
  {
    v13 = KeyHandle;
    *a4 = 1;
    CachedContextBaseKey = PnpCtxRegQueryInfoKey(v12, v13, 0LL, 0LL, &v19, 0LL, 0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( !v19 )
      {
        if ( a1 && *(_QWORD *)v10 )
          v14 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
        else
          v14 = 0LL;
        RegRtlDeleteTreeInternal(KeyHandle, 0LL, v14, 0);
      }
      PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
      goto LABEL_28;
    }
    goto LABEL_25;
  }
LABEL_28:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
