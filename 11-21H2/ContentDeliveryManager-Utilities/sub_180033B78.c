/*
 * XREFs of sub_180033B78 @ 0x180033B78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180033B78(__int64 a1, __int64 a2)
{
  char v2; // of
  _BYTE *v3; // rdi
  _BYTE *v4; // rsi
  double v5; // st7

  if ( !v2 )
    JUMPOUT(0x180033BECLL);
  *(_QWORD *)(v4 - 58) = (__int64)v5;
  BYTE1(a2) = 108;
  *v3 = *v4;
  return Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
           a1,
           a2);
}
