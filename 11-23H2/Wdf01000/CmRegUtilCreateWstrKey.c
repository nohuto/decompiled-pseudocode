/*
 * XREFs of CmRegUtilCreateWstrKey @ 0x1C00B1A4C
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C00B1280 (PiRegStateOpenClassKey.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00B1774 (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0087408 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateUcKey @ 0x1C00B19A4 (CmRegUtilCreateUcKey.c)
 */

__int64 __fastcall CmRegUtilCreateWstrKey(
        void *BaseHandle,
        wchar_t *KeyName,
        unsigned int SecurityDescriptor,
        unsigned int Disposition,
        void *Handle,
        unsigned int *BaseHandle_0,
        void **KeyName_0)
{
  __int64 result; // rax
  unsigned int v8; // r8d
  void *v9; // r9
  _UNICODE_STRING unicodeStringKeyName; // [rsp+40h] [rbp-18h] BYREF

  unicodeStringKeyName = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringKeyName, KeyName);
  if ( (int)result >= 0 )
    return CmRegUtilCreateUcKey(v9, &unicodeStringKeyName, v8, (unsigned int)v9, Handle, BaseHandle_0, KeyName_0);
  return result;
}
