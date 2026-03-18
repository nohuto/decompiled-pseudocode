/*
 * XREFs of ExpCheckIRTimerAccess @ 0x1407EBA64
 * Callers:
 *     NtCreateTimer2 @ 0x140786180 (NtCreateTimer2.c)
 * Callees:
 *     ExCheckValidIRTimerId @ 0x14036F64C (ExCheckValidIRTimerId.c)
 *     RtlCheckTokenMembership @ 0x140370090 (RtlCheckTokenMembership.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EB8C8 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpCheckIRTimerAccess(int a1, char a2)
{
  unsigned __int16 v2; // bx
  void *v3; // rax
  unsigned int v4; // edi
  char v5; // al
  unsigned __int16 v7; // [rsp+32h] [rbp+Ah]
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = HIWORD(a1);
  v2 = a1;
  if ( (unsigned int)(unsigned __int16)a1 - 1 > 0xF
    || (unsigned int)HIWORD(a1) > LOBYTE((&ExpIRTimerDescs)[3 * (unsigned __int16)a1 + 1]) )
  {
    return 3221225485LL;
  }
  v3 = *(&ExpIRTimerDescs + 3 * (unsigned __int16)a1 + 1);
  v4 = 0;
  if ( a2 )
  {
    v8 = 0;
    if ( v3 )
    {
      if ( (int)RtlCheckTokenMembership(0LL, v3, &v8) < 0 )
        v5 = 0;
      else
        v5 = v8;
    }
    else
    {
      if ( (int)ExpCheckWakeTimerAccess(a2) < 0 || !ExCheckValidIRTimerId(v2, v7) )
        return (unsigned int)-1073741790;
      v5 = 1;
    }
    if ( v5 )
      return v4;
    return (unsigned int)-1073741790;
  }
  if ( v3 || !ExCheckValidIRTimerId(a1, HIWORD(a1)) )
    __fastfail(5u);
  return 0LL;
}
