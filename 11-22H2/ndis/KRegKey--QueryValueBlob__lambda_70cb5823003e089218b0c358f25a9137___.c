/*
 * XREFs of KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x1C0139D00
 * Callers:
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C011D054 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // esi
  void *Pool2; // rax
  void *v11; // rcx
  unsigned int v13; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  void *v15; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v15 = 0LL;
  ResultLength = 0;
  v7 = KeyValueInformation;
  v8 = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
    v15 = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
LABEL_9:
      wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(&v15);
      return (unsigned int)v9;
    }
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v9 < 0 )
      goto LABEL_9;
    v11 = v7;
  }
  else
  {
    v11 = 0LL;
    if ( v8 < 0 )
      goto LABEL_9;
  }
  if ( *((_DWORD *)v7 + 1) != -65523 )
  {
    v9 = -1073741788;
    goto LABEL_9;
  }
  if ( *((_DWORD *)v7 + 2) == 16 )
  {
    *a3 = *(_OWORD *)(v7 + 12);
    v13 = 0;
  }
  else
  {
    v13 = -1073741762;
  }
  if ( v11 )
    operator delete[](v11);
  return v13;
}
