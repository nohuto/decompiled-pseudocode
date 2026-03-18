/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0206EFC
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0206954 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x1C01B02B0 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(
        DXGMONITOR *this,
        struct _MONITOR_PACKED_ELD_INFORMATION *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // r12d
  unsigned __int16 *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  bool v11; // di
  NTSTATUS v12; // r14d
  unsigned __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  int CCDMonitorID; // eax
  NTSTATUS v16; // edi
  unsigned int Length; // edi
  unsigned __int64 v18; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  void (__fastcall ***HashValue)(_QWORD, __int64); // [rsp+60h] [rbp+30h] BYREF

  v6 = 130;
  v7 = 0LL;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v8 )
    goto LABEL_30;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, &HashValue);
  if ( !HashValue )
  {
    WdLogSingleEntry0(6LL);
    v20 = HashValue;
    HashValue = 0LL;
    if ( v20 )
      (**v20)(v20, 1LL);
    return (unsigned int)-1073741801;
  }
  v9 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), char *, char *))(*HashValue)[14])(
         HashValue,
         (char *)a2 + 8,
         (char *)a2 + 10);
  v10 = HashValue;
  v11 = v9 >= 0;
  HashValue = 0LL;
  if ( v10 )
    (**v10)(v10, 1LL);
  if ( !v11 )
LABEL_30:
    *((_DWORD *)a2 + 2) = 0;
  v12 = -1073741789;
  while ( 1 )
  {
    v6 *= 2;
    v13 = 2LL * v6;
    v14 = v7;
    if ( !is_mul_ok(v6, 2uLL) )
      v13 = -1LL;
    v7 = (unsigned __int16 *)operator new[](v13, 0x4D677844u, 256LL, a4);
    if ( v14 )
      operator delete[](v14);
    if ( !v7 )
      break;
    CCDMonitorID = DXGMONITOR::GetCCDMonitorID(this, 0, v6, v7);
    v16 = CCDMonitorID;
    if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
    {
      if ( CCDMonitorID < 0 )
      {
        WdLogSingleEntry2(2LL, this, CCDMonitorID);
      }
      else
      {
        LODWORD(HashValue) = 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v7);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        v12 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
        if ( v12 < 0 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = (unsigned int)HashValue;
        if ( Length <= 2 )
        {
LABEL_27:
          v16 = v12;
        }
        else
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v18 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v7[v18];
          v16 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
          if ( v16 < 0 )
            WdLogSingleEntry0(1LL);
          *(_QWORD *)a2 |= (unsigned __int64)(unsigned int)HashValue << 32;
        }
      }
      operator delete[](v7);
      return (unsigned int)v16;
    }
    if ( v6 >= 0x410 )
      goto LABEL_27;
  }
  WdLogSingleEntry0(6LL);
  return (unsigned int)-1073741801;
}
