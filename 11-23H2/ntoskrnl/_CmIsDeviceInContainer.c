/*
 * XREFs of _CmIsDeviceInContainer @ 0x14079B3F0
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1406CE898 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmIsDeviceInContainer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r15
  _BYTE *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  int Value; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const WCHAR *v15; // rdx
  HANDLE v16; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE v19; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v20[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v20[0] = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  LODWORD(v21) = 0;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 224);
  v11 = 224LL;
  if ( v10 )
    v11 = v10 + 224;
  Value = SysCtxRegOpenKey(a1, a2, a3, 0, 1u, (__int64)v20);
  if ( Value < 0 )
    goto LABEL_22;
  v13 = v10 ? *(_QWORD *)v11 : 0LL;
  Value = SysCtxRegOpenKey(v13, (__int64)v20[0], (__int64)L"BaseContainers", 0, 1u, (__int64)&v19);
  if ( Value < 0
    || (!v10 ? (v14 = 0LL) : (v14 = *(_QWORD *)v11),
        (Value = SysCtxRegOpenKey(v14, (__int64)v19, a4, 0, 1u, (__int64)&Handle), Value < 0)
     || (v15 = a5, v16 = Handle, *v7 = 1, Value = RegRtlQueryValue(v16, v15, 0LL, 0LL, (unsigned int *)&v21), Value < 0)) )
  {
LABEL_22:
    if ( Value == -1073741772 || Value == -1073741444 )
      Value = 0;
  }
  else
  {
    *v9 = 1;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ZwClose(v19);
  if ( v20[0] )
    ZwClose(v20[0]);
  return (unsigned int)Value;
}
