/*
 * XREFs of LdrpParseForwarderDescription @ 0x18007A3C8
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8CA4 (LdrpEnclaveAddForwarderModules.c)
 * Callees:
 *     RtlCharToInteger @ 0x18007A470 (RtlCharToInteger.c)
 *     strrchr @ 0x180098E80 (strrchr.c)
 */

__int64 __fastcall LdrpParseForwarderDescription(const char *a1, __int64 a2, char **a3, ULONG *a4)
{
  char *v8; // rax
  char *v9; // rbx
  __int16 v10; // r10

  v8 = strrchr(a1, 46);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = (_WORD)v8 - (_WORD)a1;
    if ( (unsigned __int64)(v8 - a1) <= 0xFFFF )
    {
      *(_QWORD *)(a2 + 8) = a1;
      *(_WORD *)a2 = v10;
      *(_WORD *)(a2 + 2) = v10;
      if ( v8[1] != 35 )
      {
        v9 = v8 + 1;
LABEL_5:
        *a3 = v9;
        return 0LL;
      }
      if ( RtlCharToInteger(v8 + 2, 0, a4) >= 0 )
        goto LABEL_5;
    }
  }
  return 3221225595LL;
}
