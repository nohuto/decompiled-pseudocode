/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0139E48
 * Callers:
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C013A180 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B16B8 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3404 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 *     ??_V@YAXPEAX@Z @ 0x1C012176C (--_V@YAXPEAX@Z.c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C013A10C (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbx
  _BYTE *v8; // r14
  NTSTATUS v9; // eax
  NTSTATUS v10; // esi
  __int64 v11; // rax
  _WORD *v12; // rsi
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int i; // r14d
  _WORD *v18; // rdi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *Pool2; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  va_list va; // [rsp+1A8h] [rbp+A8h] BYREF

  va_start(va, a3);
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  v8 = KeyValueInformation;
  v9 = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 == -2147483643 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength, 2052287565);
    v7 = Pool2;
    if ( !Pool2 )
      goto LABEL_19;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v10 >= 0 )
    {
      v8 = v7;
      goto LABEL_6;
    }
LABEL_16:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>((void **)&Pool2);
    return (unsigned int)v10;
  }
  if ( v9 < 0 )
    goto LABEL_16;
LABEL_6:
  if ( *((_DWORD *)v8 + 1) != -57326 )
  {
    v10 = -1073741788;
    goto LABEL_16;
  }
  v11 = *((unsigned int *)v8 + 2);
  if ( (v11 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_16;
  }
  v12 = v8 + 12;
  v13 = v8 + 12;
  v14 = (unsigned __int64)&v8[v11 + 12];
  v15 = 0;
  if ( (unsigned __int64)(v8 + 12) >= v14 )
  {
LABEL_15:
    v10 = -1073741789;
    goto LABEL_16;
  }
LABEL_11:
  if ( *v13 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)++v13 >= v14 )
        goto LABEL_15;
      if ( !*v13 )
      {
        ++v15;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_11;
        goto LABEL_15;
      }
    }
  }
  if ( !Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, v15) )
  {
LABEL_19:
    v10 = -1073741670;
    goto LABEL_16;
  }
  for ( i = 0; ; ++i )
  {
    if ( !*v12 )
    {
      v10 = 0;
      goto LABEL_16;
    }
    v18 = v12;
    do
      ++v18;
    while ( *v18 );
    v10 = lambda_90693e01559ab5daa9d90de50bdb401e_::operator()((__int64 *)va, v12, i);
    if ( v10 < 0 )
      break;
    v12 = v18 + 1;
  }
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v10;
}
