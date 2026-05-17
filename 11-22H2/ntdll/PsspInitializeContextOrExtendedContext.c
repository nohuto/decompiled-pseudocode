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

char *__fastcall PsspInitializeContextOrExtendedContext(void *a1, size_t Size, unsigned int a3)
{
  size_t v3; // rsi
  unsigned int v4; // ebx
  int ExtendedContextLength; // eax
  unsigned int v7; // ecx
  char *result; // rax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  v4 = a3;
  if ( (_DWORD)Size == 1232 )
    goto LABEL_13;
  if ( (int)RtlGetExtendedContextLength(a3, (__int64)&v9) < 0 || (unsigned int)v3 < v9 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    ExtendedContextLength = RtlGetExtendedContextLength(v4, (__int64)&v9);
    v7 = v9;
    if ( ExtendedContextLength < 0 )
      v7 = -1;
    if ( (unsigned int)v3 < v7 )
      goto LABEL_13;
  }
  if ( (int)RtlInitializeExtendedContext((__int64)a1, v4, (__int64)&v10) < 0
    || (result = RtlLocateLegacyContext(v10, 0LL)) == 0LL )
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
    result = (char *)a1;
    *((_DWORD *)a1 + 12) = v4;
  }
  return result;
}
