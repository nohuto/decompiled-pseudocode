/*
 * XREFs of ?BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@@Z @ 0x140039B2A
 * Callers:
 *     ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14000B010 (-Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAAEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x140039B02 (--A-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_PROP.c)
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAAEBQEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x140039BF4 (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAAEBQEAVCAPONode@@AEAPEAU__POSITION@.c)
 */

__int64 __fastcall CAudioProcessor::BubbleInputFramesToOutput(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD); // rbx
  __int64 v7; // rax
  int v8; // edi
  unsigned __int64 i; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v10 = *a2;
  result = v10;
  while ( v10 )
  {
    result = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(a1, &v10);
    v3 = *(_QWORD **)result;
    v4 = *(_QWORD *)(*(_QWORD *)result + 232LL);
    if ( v4 && v3[25] )
    {
      v5 = v3[2];
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL);
      v7 = ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::operator[](
             v3 + 24,
             0LL);
      v8 = v6(v5, *(unsigned int *)(*(_QWORD *)v7 + 8LL));
      for ( i = 0LL; i < v4; ++i )
      {
        result = ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::operator[](
                   v3 + 28,
                   i);
        a1 = *(_QWORD *)result;
        *(_DWORD *)(*(_QWORD *)result + 8LL) = v8;
      }
    }
  }
  return result;
}
