/*
 * XREFs of KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C011E2A8
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D598 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _WORD *a3)
{
  HANDLE v6; // rcx
  _DWORD *v7; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // esi
  void *v10; // rbp
  unsigned int v12; // eax
  unsigned int v13; // ebx
  void *Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  void *v16; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v16 = 0LL;
  ResultLength = 0;
  v7 = KeyValueInformation;
  v8 = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
    v16 = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_3;
    }
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v9 < 0 )
      goto LABEL_3;
    v10 = v7;
  }
  else
  {
    v10 = 0LL;
    if ( v8 < 0 )
    {
LABEL_3:
      wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(&v16);
      return (unsigned int)v9;
    }
  }
  if ( v7[1] != 3 )
  {
    v9 = -1073741788;
    goto LABEL_3;
  }
  v12 = v7[2];
  if ( v12 > 0x20 )
  {
    v13 = -1073741811;
  }
  else
  {
    *a3 = v12;
    memmove(a3 + 1, v7 + 3, v12);
    v13 = 0;
  }
  if ( v10 )
    operator delete[](v10);
  return v13;
}
