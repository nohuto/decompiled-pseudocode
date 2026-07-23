/*
 * XREFs of LdrpValidateUserCallTargetES @ 0x180093BF0
 * Callers:
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpValidateUserCallTargetES(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_6:
    LdrpHandleInvalidUserCallTarget();
    return;
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_6;
}
