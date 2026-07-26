/*
 * XREFs of KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x1C0139BAC
 * Callers:
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C012BF90 (ndisLWMBuildConfigurationKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 *     _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1C013A064 (_lambda_4865fb945cd28a177f845da523c8204e_--operator().c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  void *Pool2; // rax
  void *v10; // rsi
  unsigned int v12; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+190h] [rbp+90h] BYREF

  v16 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v5 = *a1;
  v14 = 0LL;
  ResultLength = 0;
  v6 = KeyValueInformation;
  v7 = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
    v14 = Pool2;
    v6 = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
LABEL_9:
      wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(&v14);
      return (unsigned int)v8;
    }
    v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_9;
    v10 = v6;
  }
  else
  {
    v10 = 0LL;
    if ( v7 < 0 )
      goto LABEL_9;
  }
  if ( *((_DWORD *)v6 + 1) != -65406 )
  {
    v8 = -1073741788;
    goto LABEL_9;
  }
  v12 = lambda_4865fb945cd28a177f845da523c8204e_::operator()(&v16, v6 + 12, *((unsigned int *)v6 + 2));
  if ( v10 )
    operator delete[](v10);
  return v12;
}
