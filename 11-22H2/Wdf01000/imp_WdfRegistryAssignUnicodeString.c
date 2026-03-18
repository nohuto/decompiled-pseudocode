/*
 * XREFs of imp_WdfRegistryAssignUnicodeString @ 0x1C004A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004E4D4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        const _UNICODE_STRING *Value)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  ULONG Tag; // ecx
  ULONG DataSize; // esi
  void *v11; // rax
  FX_POOL **v12; // rax
  FX_POOL_TRACKER *Data; // r14
  NTSTATUS _a2; // edi
  unsigned __int16 v15; // r9
  __m128i v16; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxRegKey *pKey; // [rsp+80h] [rbp+8h] BYREF

  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Value )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, Value);
      if ( (int)result >= 0 )
      {
        Tag = m_Globals->Tag;
        DataSize = Value->Length + 2;
        v11 = (void *)retaddr;
        v16.m128i_i64[0] = 0LL;
        v16.m128i_i64[1] = 256LL;
        if ( !m_Globals->FxPoolTrackingOn )
          v11 = 0LL;
        v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, DataSize, Tag, v11);
        Data = (FX_POOL_TRACKER *)v12;
        if ( v12 )
        {
          memmove(v12, Value->Buffer, Value->Length);
          *((_WORD *)&Data->Link.Flink + ((unsigned __int64)Value->Length >> 1)) = 0;
          _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 1u, Data, DataSize);
          FxPoolFree(Data);
          if ( _a2 >= 0 )
          {
            FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
            return (unsigned int)_a2;
          }
          v15 = 38;
        }
        else
        {
          _a2 = -1073741670;
          v15 = 37;
        }
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, v15, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
        return (unsigned int)_a2;
      }
    }
  }
  return result;
}
