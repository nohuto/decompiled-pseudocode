/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x180037A64
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180029F30 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyGains::IsStreamCategoryDucked(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        int a3)
{
  __int64 v4; // rsi
  _QWORD *i; // rbx
  __int64 v7; // rsi

  v4 = a2;
  EnterCriticalSection(lpCriticalSection);
  if ( (unsigned int)v4 < 0x18 )
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[1].DebugInfo + 8 * v4 + (a3 != 0 ? 0xC0 : 0));
          i;
          i = (_QWORD *)*i )
    {
      v7 = i[1];
      if ( (***(float (__fastcall ****)(_QWORD))(v7 + 56))(*(_QWORD *)(v7 + 56)) != 0.0
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 56) + 8LL))(*(_QWORD *)(v7 + 56)) )
      {
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return 1LL;
      }
    }
    if ( !lpCriticalSection )
      return 0LL;
    goto LABEL_13;
  }
  if ( lpCriticalSection )
LABEL_13:
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
