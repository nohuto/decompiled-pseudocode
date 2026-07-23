/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x18008F220
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x18008F2F0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008F340 (LdrpValidateUserCallTargetES.c)
 *     LdrpValidateUserCallTargetXFG @ 0x18008F390 (LdrpValidateUserCallTargetXFG.c)
 *     LdrpDispatchUserCallTarget @ 0x18008F430 (LdrpDispatchUserCallTarget.c)
 *     LdrpDispatchUserCallTargetES @ 0x18008F490 (LdrpDispatchUserCallTargetES.c)
 *     LdrpDispatchUserCallTargetXFG @ 0x18008F4F0 (LdrpDispatchUserCallTargetXFG.c)
 *     LdrpTableDispatchUserCallTargetXFG @ 0x18008F600 (LdrpTableDispatchUserCallTargetXFG.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB20 (RtlpHandleInvalidUserCallTarget.c)
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
