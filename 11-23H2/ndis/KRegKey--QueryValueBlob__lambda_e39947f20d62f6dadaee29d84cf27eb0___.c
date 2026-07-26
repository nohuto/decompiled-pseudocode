/*
 * XREFs of KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x1C011D460
 * Callers:
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C011D264 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B16B8 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C012176C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // esi
  void *v10; // rcx
  unsigned int v11; // ebx
  void *Pool2; // rax
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
  if ( v8 != -2147483643 )
  {
    v10 = 0LL;
    if ( v8 >= 0 )
      goto LABEL_3;
LABEL_15:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(&v15);
    return (unsigned int)v9;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
  v15 = Pool2;
  v7 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_15;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_15;
  v10 = v7;
LABEL_3:
  if ( *((_DWORD *)v7 + 1) != 3 )
  {
    v9 = -1073741788;
    goto LABEL_15;
  }
  if ( *((_DWORD *)v7 + 2) == 16 )
  {
    *a3 = *(_OWORD *)(v7 + 12);
    v11 = 0;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v10 )
    operator delete[](v10);
  return v11;
}
