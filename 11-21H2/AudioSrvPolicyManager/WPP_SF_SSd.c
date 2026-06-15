/*
 * XREFs of WPP_SF_SSd @ 0x1800135B8
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180010D70 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001BBC4 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SSd(TRACEHANDLE a1, USHORT a2, const GUID *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a5;
  v6 = -1LL;
  v7 = 10LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  v10 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v7 = 2 * v6 + 2;
    v10 = a4 == 0LL;
  }
  if ( v10 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, a3, a2, a4, v7, v5, v9, va, 4LL, 0LL);
}
