/*
 * XREFs of FxVerifyAllocateDebugInfo @ 0x1C0044E50
 * Callers:
 *     FxVerifierReadObjectDebugInfo @ 0x1C0044CF0 (FxVerifierReadObjectDebugInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall FxVerifyAllocateDebugInfo(
        FxObjectDebugInfo **Info,
        wchar_t *HandleNameList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObjectDebugInfoFlags DebugFlag)
{
  __int64 Pool2; // rbx
  __int16 v5; // r13
  FxObjectDebugInfo **v7; // r15
  unsigned int v9; // esi
  wchar_t v10; // dx
  const char *v11; // rax
  const wchar_t *v12; // r12
  wchar_t v13; // [rsp+20h] [rbp-79h]
  _UNICODE_STRING objectName; // [rsp+28h] [rbp-71h] BYREF
  FxObjectDebugInfo **v15; // [rsp+38h] [rbp-61h]
  _UNICODE_STRING handleName; // [rsp+40h] [rbp-59h] BYREF
  _STRING string; // [rsp+50h] [rbp-49h] BYREF
  wchar_t ubuffer[40]; // [rsp+60h] [rbp-39h] BYREF

  Pool2 = (__int64)*Info;
  v5 = DebugFlag;
  v7 = Info;
  v15 = Info;
  if ( !*HandleNameList )
    return 3221225485LL;
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(64LL, 4 * FxObjectsInfoCount, FxDriverGlobals->Tag);
    if ( !Pool2 )
      return 3221225632LL;
  }
  v9 = 0;
  v10 = *HandleNameList;
  v13 = *HandleNameList;
  if ( FxObjectsInfoCount )
  {
    do
    {
      objectName = 0LL;
      *(_WORD *)(Pool2 + 4LL * v9) = FxObjectsInfo[v9].ObjectType;
      v11 = FxObjectsInfo[v9].HandleName;
      string = 0LL;
      if ( v11 )
      {
        if ( v10 == 42 )
        {
          *(_WORD *)(Pool2 + 4LL * v9 + 2) |= v5;
        }
        else
        {
          RtlInitAnsiString(&string, v11);
          memset(ubuffer, 0, sizeof(ubuffer));
          *(_DWORD *)&objectName.Length = 5242880;
          objectName.Buffer = ubuffer;
          if ( RtlAnsiStringToUnicodeString(&objectName, &string, 0) >= 0 )
          {
            v12 = HandleNameList;
            if ( *HandleNameList )
            {
              while ( 1 )
              {
                handleName = 0LL;
                RtlInitUnicodeString(&handleName, v12);
                v12 += ((unsigned __int64)handleName.Length >> 1) + 1;
                if ( !RtlCompareUnicodeString(&handleName, &objectName, 1u) )
                  break;
                if ( !*v12 )
                  goto LABEL_16;
              }
              *(_WORD *)(Pool2 + 4LL * v9 + 2) |= v5;
            }
          }
LABEL_16:
          v10 = v13;
        }
      }
      ++v9;
    }
    while ( v9 < FxObjectsInfoCount );
    v7 = v15;
  }
  if ( !*v7 )
    *v7 = (FxObjectDebugInfo *)Pool2;
  return 0LL;
}
