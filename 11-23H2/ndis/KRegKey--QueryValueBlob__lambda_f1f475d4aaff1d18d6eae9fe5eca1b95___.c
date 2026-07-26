/*
 * XREFs of KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C011DE98
 * Callers:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8B0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B16B8 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C011DF7C (_lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C012176C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  void *v9; // rsi
  unsigned int v10; // ebx
  void *Pool2; // rax
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
  if ( v7 != -2147483643 )
  {
    v9 = 0LL;
    if ( v7 >= 0 )
      goto LABEL_3;
LABEL_12:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>(&v14);
    return (unsigned int)v8;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
  v14 = Pool2;
  v6 = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    goto LABEL_12;
  }
  v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_12;
  v9 = v6;
LABEL_3:
  if ( *((_DWORD *)v6 + 1) != -65518 )
  {
    v8 = -1073741788;
    goto LABEL_12;
  }
  v10 = lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator()(&v16, v6 + 12, *((unsigned int *)v6 + 2));
  if ( v9 )
    operator delete[](v9);
  return v10;
}
