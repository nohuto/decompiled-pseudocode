/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x180093AD0
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x180093BA0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180093BF0 (LdrpValidateUserCallTargetES.c)
 *     LdrpValidateUserCallTargetXFG @ 0x180093C40 (LdrpValidateUserCallTargetXFG.c)
 *     LdrpDispatchUserCallTarget @ 0x180093CE0 (LdrpDispatchUserCallTarget.c)
 *     LdrpDispatchUserCallTargetES @ 0x180093D40 (LdrpDispatchUserCallTargetES.c)
 *     LdrpDispatchUserCallTargetXFG @ 0x180093DA0 (LdrpDispatchUserCallTargetXFG.c)
 *     LdrpTableDispatchUserCallTargetXFG @ 0x180093EB0 (LdrpTableDispatchUserCallTargetXFG.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 */

void __fastcall LdrpHandleInvalidUserCallTarget()
{
  __int64 v0; // rax
  __int64 v1; // r10
  __int64 v2; // r11
  void (__fastcall *v3)(__int64, __int64, __int64, __int64); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // zf
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = (void (__fastcall *)(__int64, __int64, __int64, __int64))RtlpHandleInvalidUserCallTarget(v0, retaddr, v1, v2);
  if ( !v8 )
    v3(v5, v4, v6, v7);
}
