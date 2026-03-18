/*
 * XREFs of ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C001F4E4
 * Callers:
 *     imp_WdfControlDeviceInitAllocate @ 0x1C001F460 (imp_WdfControlDeviceInitAllocate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C001F62C (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C001FA58 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::_AllocateControlDeviceInit(
        FxDriver *Driver,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *v3; // rax
  FX_POOL **v6; // rax
  __int64 v7; // rax
  WDFDEVICE_INIT *v8; // rbx
  FxString *v9; // rax
  FxString *v10; // rax
  unsigned int v11; // edx
  __m128i v13; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = Driver->m_Globals;
  v13.m128i_i64[0] = 0LL;
  v13.m128i_i64[1] = 64LL;
  v3 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v3 = 0LL;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v13, 0x3B0uLL, m_Globals->Tag, v3);
  if ( v6 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v6, Driver);
    v8 = (WDFDEVICE_INIT *)v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 56) |= 0x80u;
      v13.m128i_i64[0] = 0LL;
      v13.m128i_i64[1] = 64LL;
      *(_DWORD *)(v7 + 36) = 2;
      v9 = (FxString *)FxObjectHandleAllocCommon(
                         m_Globals,
                         (FxPoolTypeOrPoolFlags *)&v13,
                         0x78uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeExternal);
      if ( v9 )
        FxString::FxString(v9, m_Globals);
      else
        v10 = 0LL;
      v8->Security.Sddl = v10;
      if ( v10 )
      {
        if ( FxDuplicateUnicodeString(v10->m_Globals, SDDLString, &v10->m_UnicodeString) >= 0 )
          return v8;
      }
      else
      {
        WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceInit_cpp_Traceguids, Driver, 0xC000009A);
      }
      WDFDEVICE_INIT::`scalar deleting destructor'(v8, v11);
      return 0LL;
    }
  }
  WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceInit_cpp_Traceguids, Driver);
  return 0LL;
}
