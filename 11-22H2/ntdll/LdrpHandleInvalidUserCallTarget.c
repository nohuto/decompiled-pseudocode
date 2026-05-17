/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x18008EA20
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x18008EAF0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008EB40 (LdrpValidateUserCallTargetES.c)
 *     LdrpValidateUserCallTargetXFG @ 0x18008EB90 (LdrpValidateUserCallTargetXFG.c)
 *     LdrpDispatchUserCallTarget @ 0x18008EC30 (LdrpDispatchUserCallTarget.c)
 *     LdrpDispatchUserCallTargetES @ 0x18008EC90 (LdrpDispatchUserCallTargetES.c)
 *     LdrpDispatchUserCallTargetXFG @ 0x18008ECF0 (LdrpDispatchUserCallTargetXFG.c)
 *     LdrpTableDispatchUserCallTargetXFG @ 0x18008EE00 (LdrpTableDispatchUserCallTargetXFG.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A6B0 (RtlpHandleInvalidUserCallTarget.c)
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
