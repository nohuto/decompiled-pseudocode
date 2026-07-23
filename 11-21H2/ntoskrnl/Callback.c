/*
 * XREFs of Callback @ 0x14054A150
 * Callers:
 *     <none>
 * Callees:
 *     sub_140549FDC @ 0x140549FDC (sub_140549FDC.c)
 */

__int64 __fastcall Callback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  HIDWORD(v5) = *Value;
  LODWORD(v5) = (_DWORD)Context;
  return sub_140549FDC(&v5);
}
