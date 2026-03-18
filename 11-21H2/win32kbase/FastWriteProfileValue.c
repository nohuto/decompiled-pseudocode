/*
 * XREFs of FastWriteProfileValue @ 0x1C0149810
 * Callers:
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1C0165240 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0165450 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01657EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01659A0 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C00612C0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void *__fastcall FastWriteProfileValue(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        ULONG a4,
        PVOID Data,
        ULONG DataSize)
{
  unsigned int v6; // edi
  const WCHAR *v8; // rbx
  void *result; // rax
  void *v12; // rsi
  NTSTATUS v13; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-A8h] BYREF
  _WORD v15[40]; // [rsp+40h] [rbp-98h] BYREF

  v6 = 0;
  v8 = a3;
  DestinationString = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v15[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v15, 40, 0);
    v8 = v15;
  }
  result = OpenCacheKeyEx(a1, a2, 131078LL, 0LL);
  v12 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, v8);
    v13 = ZwSetValueKey(v12, &DestinationString, 0, a4, Data, DataSize);
    ZwClose(v12);
    LOBYTE(v6) = v13 >= 0;
    return (void *)v6;
  }
  return result;
}
