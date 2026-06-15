/*
 * XREFs of WPP_SF_SSd @ 0x180023800
 * Callers:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180009B90 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800218C0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x1800285B8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SSd(TRACEHANDLE a1, USHORT a2, const GUID *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r10
  __int64 v6; // rax
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r8
  bool v11; // zf
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a5;
  v6 = -1LL;
  v8 = 10LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  v11 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v8 = 2 * v6 + 2;
    v11 = a4 == 0LL;
  }
  if ( v11 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, a3, a2, a4, v8, v5, v10, va, 4LL, 0LL);
}
