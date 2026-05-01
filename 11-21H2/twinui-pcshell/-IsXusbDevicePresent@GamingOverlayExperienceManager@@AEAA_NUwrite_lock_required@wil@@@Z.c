/*
 * XREFs of ?IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x18011EA8C
 * Callers:
 *     wistd::__function::__func__lambda_6091c0fdf23ade5747cc93b1c5a66275__void___cdecl(void)_::operator() @ 0x18017EB50 (wistd--__function--__func__lambda_6091c0fdf23ade5747cc93b1c5a66275__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801896C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 */

char __fastcall GamingOverlayExperienceManager::IsXusbDevicePresent(__int64 a1, char a2)
{
  int v2; // esi
  char v3; // di
  unsigned __int64 v4; // rax
  WCHAR *v5; // rax
  WCHAR *v6; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  ULONG pulLen; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(pulLen) = a2;
  v2 = 0;
  v3 = 1;
  while ( 1 )
  {
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, (LPGUID)&InterfaceClassGuid, 0LL, 0) )
      return 0;
    v4 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v4 = -1LL;
    v5 = (WCHAR *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
      return 0;
    Device_Interface_ListW = CM_Get_Device_Interface_ListW((LPGUID)&InterfaceClassGuid, 0LL, v5, pulLen, 0);
    if ( !Device_Interface_ListW )
      break;
    if ( Device_Interface_ListW != 26 )
    {
      operator delete[](v6);
      return 0;
    }
    operator delete[](v6);
    if ( ++v2 >= 4 )
      return 0;
  }
  if ( !pulLen || !*v6 )
    v3 = 0;
  operator delete[](v6);
  return v3;
}
