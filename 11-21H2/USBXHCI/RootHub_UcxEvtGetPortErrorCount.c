/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C003E1D0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003ECA4 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  int v11; // edx
  unsigned int v12; // esi
  __int64 v13; // r8
  int v14; // edx
  unsigned __int16 Ulong; // bx
  int v16; // r9d
  int v17; // edx
  int v18; // r8d
  __int64 v20; // [rsp+20h] [rbp-B8h]
  _OWORD v21[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+90h] [rbp-48h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( *(_BYTE *)(v5 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v8,
        v9,
        v20,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
        154,
        "Code Path Requires Passive Level");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v21);
  v10 = *((_QWORD *)&v21[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v11,
        11,
        181,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    }
    *(_DWORD *)(v10 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v12 = *(unsigned __int16 *)(v10 + 132);
  if ( *(_WORD *)(v10 + 128) != 3491
    || *(_WORD *)(v10 + 130)
    || !*(_WORD *)(v10 + 132)
    || v12 > *(_DWORD *)(v4 + 16)
    || *(_WORD *)(v10 + 134) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = *(unsigned __int8 *)(v10 + 134);
      v16 = 182;
      v18 = *(unsigned __int8 *)(v10 + 133);
      goto LABEL_27;
    }
LABEL_28:
    v3 = -1073741823;
    *(_DWORD *)(v10 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v13 = v12 - 1;
  if ( *(_BYTE *)(112 * v13 + *(_QWORD *)(v4 + 48) + 13) != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 185;
      v17 = *(unsigned __int8 *)(v10 + 134);
      v18 = *(unsigned __int8 *)(v10 + 133);
LABEL_27:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v17, v18, v16);
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(16 * v13 + 8 + *(_QWORD *)(v4 + 40)));
  **(_WORD **)(v10 + 40) = Ulong;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v14,
      11,
      183,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
      v12,
      Ulong);
  }
  if ( Ulong > 0xAu && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v14,
      11,
      184,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
      v12,
      Ulong);
  }
  *(_DWORD *)(v10 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
