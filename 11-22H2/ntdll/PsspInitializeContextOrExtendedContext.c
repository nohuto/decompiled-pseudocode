/*
 * XREFs of PsspInitializeContextOrExtendedContext @ 0x18012A2E4
 * Callers:
 *     PsspDumpThread @ 0x18012A030 (PsspDumpThread.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1800548E0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x180054950 (RtlGetExtendedContextLength.c)
 *     RtlLocateLegacyContext @ 0x180085E70 (RtlLocateLegacyContext.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

PCONTEXT __fastcall PsspInitializeContextOrExtendedContext(struct _CONTEXT *a1, size_t Size, ULONG ContextFlags)
{
  size_t v3; // rsi
  ULONG v4; // ebx
  NTSTATUS ExtendedContextLength; // eax
  ULONG v7; // ecx
  PCONTEXT result; // rax
  ULONG ContextLength; // [rsp+38h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  v4 = ContextFlags;
  if ( (_DWORD)Size == 1232 )
    goto LABEL_13;
  if ( RtlGetExtendedContextLength(ContextFlags, &ContextLength) < 0 || (unsigned int)v3 < ContextLength )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    ExtendedContextLength = RtlGetExtendedContextLength(v4, &ContextLength);
    v7 = ContextLength;
    if ( ExtendedContextLength < 0 )
      v7 = -1;
    if ( (unsigned int)v3 < v7 )
      goto LABEL_13;
  }
  if ( RtlInitializeExtendedContext(a1, v4, &ContextEx) < 0 || (result = RtlLocateLegacyContext(ContextEx, 0LL)) == 0LL )
  {
LABEL_13:
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    memset_thunk_772440563353939046(a1, 0, v3);
    result = a1;
    a1->ContextFlags = v4;
  }
  return result;
}
