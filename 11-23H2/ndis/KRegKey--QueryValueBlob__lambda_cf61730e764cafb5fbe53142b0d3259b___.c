/*
 * XREFs of KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x1C011B99C
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C011B8C4 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B16B8 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C011CAAC (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C012176C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___(
        HANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  HANDLE v4; // rcx
  _BYTE *v5; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  void *v8; // rsi
  unsigned int v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *Pool2; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+180h] [rbp+80h] BYREF

  v14 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  Pool2 = 0LL;
  ResultLength = 0;
  v5 = KeyValueInformation;
  v6 = ZwQueryValueKey(
         v4,
         (PUNICODE_STRING)&Ndis::FilterListValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x100u,
         &ResultLength);
  v7 = v6;
  if ( v6 != -2147483643 )
  {
    v8 = 0LL;
    if ( v6 >= 0 )
      goto LABEL_3;
LABEL_12:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>((void **)&Pool2);
    return (unsigned int)v7;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength, 1852392018);
  v5 = Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
    goto LABEL_12;
  }
  v7 = ZwQueryValueKey(
         *a1,
         (PUNICODE_STRING)&Ndis::FilterListValueName,
         KeyValuePartialInformation,
         Pool2,
         ResultLength,
         &ResultLength);
  if ( v7 < 0 )
    goto LABEL_12;
  v8 = v5;
LABEL_3:
  if ( *((_DWORD *)v5 + 1) != 3 )
  {
    v7 = -1073741788;
    goto LABEL_12;
  }
  v9 = lambda_cf61730e764cafb5fbe53142b0d3259b_::operator()(&v14, v5 + 12, *((unsigned int *)v5 + 2));
  if ( v8 )
    operator delete[](v8);
  return v9;
}
