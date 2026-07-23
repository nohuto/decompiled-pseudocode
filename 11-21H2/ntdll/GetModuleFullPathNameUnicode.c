/*
 * XREFs of GetModuleFullPathNameUnicode @ 0x18000B19C
 * Callers:
 *     GetModuleFullPathName @ 0x18000B21C (GetModuleFullPathName.c)
 * Callees:
 *     LdrGetDllFullName @ 0x1800346C0 (LdrGetDllFullName.c)
 */

__int64 __fastcall GetModuleFullPathNameUnicode(void *a1, wchar_t *a2, unsigned int a3)
{
  int v3; // ebx
  NTSTATUS DllFullName; // eax
  __int64 v5; // r8
  _UNICODE_STRING FullDllName; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  FullDllName = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    return 0LL;
  if ( a3 > 0x7FFF )
  {
    v3 = 0x7FFF;
    goto LABEL_4;
  }
  if ( !a3 )
    return 0LL;
LABEL_4:
  FullDllName.Buffer = a2;
  FullDllName.MaximumLength = 2 * v3 - 2;
  DllFullName = LdrGetDllFullName(a1, &FullDllName);
  v5 = FullDllName.Length >> 1;
  FullDllName.Buffer[v5] = 0;
  if ( DllFullName == -1073741789 )
    LODWORD(v5) = v3;
  return (unsigned int)v5;
}
