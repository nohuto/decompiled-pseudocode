/*
 * XREFs of KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C011E024
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB6C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        char *a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbx
  _BYTE *v8; // rbp
  NTSTATUS v9; // eax
  NTSTATUS v10; // esi
  char v11; // dl
  unsigned int v12; // edi
  void *Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  void *v16; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  ResultLength = 0;
  v16 = 0LL;
  v8 = KeyValueInformation;
  v9 = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 != -2147483643 )
  {
    if ( v9 >= 0 )
      goto LABEL_3;
LABEL_18:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(&v16);
    return (unsigned int)v10;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
  v16 = Pool2;
  v7 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_18;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
  if ( v10 < 0 )
    goto LABEL_18;
  v8 = v7;
LABEL_3:
  if ( *((_DWORD *)v8 + 1) != -65519 )
  {
    v10 = -1073741788;
    goto LABEL_18;
  }
  v11 = 1;
  if ( *((_DWORD *)v8 + 2) != 1 )
    goto LABEL_11;
  if ( !v8[12] )
  {
    v11 = 0;
    goto LABEL_7;
  }
  if ( v8[12] != 1 )
  {
LABEL_11:
    v12 = -1073741762;
    goto LABEL_8;
  }
LABEL_7:
  *a3 = v11;
  v12 = 0;
LABEL_8:
  if ( v7 )
    operator delete[](v7);
  return v12;
}
