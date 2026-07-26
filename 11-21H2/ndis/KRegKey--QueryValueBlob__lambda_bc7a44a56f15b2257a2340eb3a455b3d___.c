/*
 * XREFs of KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C0110864
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        char *a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbx
  _BYTE *v8; // rbp
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // esi
  char v11; // dl
  _BYTE *Pool2; // rax
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
      goto LABEL_8;
LABEL_3:
    if ( *((_DWORD *)v8 + 1) == -65519 )
    {
      v11 = 1;
      if ( *((_DWORD *)v8 + 2) == 1 )
      {
        if ( !v8[12] )
        {
          v11 = 0;
          goto LABEL_7;
        }
        if ( v8[12] == 1 )
        {
LABEL_7:
          *a3 = v11;
          v10 = 0;
          goto LABEL_8;
        }
      }
      v10 = -1073741762;
    }
    else
    {
      v10 = -1073741788;
    }
    goto LABEL_8;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength[0], 1852392018);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_8;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength[0], ResultLength);
  if ( v10 >= 0 )
  {
    v8 = v7;
    goto LABEL_3;
  }
LABEL_8:
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v10;
}
