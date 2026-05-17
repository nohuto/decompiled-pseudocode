/*
 * XREFs of LdrpInitializeHotPatching @ 0x1800B092A
 * Callers:
 *     LdrpInitializeInternal @ 0x18007B218 (LdrpInitializeInternal.c)
 * Callees:
 *     ZwManageHotPatch @ 0x1800A6340 (ZwManageHotPatch.c)
 */

_UNKNOWN **LdrpInitializeHotPatching()
{
  _UNKNOWN **result; // rax
  char v1; // bl
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( LdrpIsSecureProcess
    || (v1 = 1, result = (_UNKNOWN **)ZwManageHotPatch(), (_DWORD)result == -1073741637)
    || (_DWORD)result == -1073741822 )
  {
    v1 = 0;
  }
  LdrpIsHotPatchingEnabled = v1;
  return result;
}
