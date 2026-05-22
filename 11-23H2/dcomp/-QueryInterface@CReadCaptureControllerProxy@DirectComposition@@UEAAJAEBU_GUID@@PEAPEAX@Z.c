/*
 * XREFs of ?QueryInterface@CReadCaptureControllerProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FB340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CReadCaptureControllerProxy::QueryInterface(
        DirectComposition::CReadCaptureControllerProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = 0LL;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_89c99ebb_edec_405b_a4f3_f908639fe524.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_89c99ebb_edec_405b_a4f3_f908639fe524.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_89c99ebb_edec_405b_a4f3_f908639fe524.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_9:
    *a3 = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
  }
  return result;
}
