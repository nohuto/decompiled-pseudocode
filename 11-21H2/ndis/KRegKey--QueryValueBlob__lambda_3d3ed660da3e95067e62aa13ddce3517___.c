/*
 * XREFs of KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C0110638
 * Callers:
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _DWORD *a3)
{
  HANDLE v6; // rcx
  _DWORD *v7; // rbx
  _DWORD *v8; // rbp
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // esi
  _DWORD *Pool2; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  ResultLength[0] = 0;
  v8 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v10 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_6;
    goto LABEL_3;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength[0], 1852392018);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_6;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength[0], ResultLength);
  if ( v10 >= 0 )
  {
    v8 = v7;
LABEL_3:
    if ( v8[1] == -65529 )
    {
      if ( v8[2] == 4 )
      {
        v10 = 0;
        *a3 = v8[3];
      }
      else
      {
        v10 = -1073741762;
      }
    }
    else
    {
      v10 = -1073741788;
    }
  }
LABEL_6:
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v10;
}
