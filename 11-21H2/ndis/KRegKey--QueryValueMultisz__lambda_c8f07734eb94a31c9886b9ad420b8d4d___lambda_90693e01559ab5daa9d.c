/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C012E028
 * Callers:
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C012E334 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C012E2C0 (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C012E4C0 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbp
  void *Pool2; // rbx
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // esi
  __int64 v11; // rax
  _WORD *v12; // rsi
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v17; // ebp
  _WORD *v18; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-148h] BYREF
  va_list va; // [rsp+1A8h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  ResultLength[0] = 0;
  v7 = KeyValueInformation;
  Pool2 = 0LL;
  ValueKey = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v10 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength[0], 2052287565);
    if ( !Pool2 )
      goto LABEL_5;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength[0], ResultLength);
    if ( v10 < 0 )
      goto LABEL_17;
    v7 = Pool2;
  }
  else if ( ValueKey < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v7 + 1) != -57326 )
  {
    v10 = -1073741788;
    goto LABEL_17;
  }
  v11 = *((unsigned int *)v7 + 2);
  if ( (v11 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_17;
  }
  v12 = v7 + 12;
  v13 = v7 + 12;
  v14 = (unsigned __int64)&v7[v11 + 12];
  v15 = 0;
  if ( (unsigned __int64)(v7 + 12) >= v14 )
    goto LABEL_16;
LABEL_12:
  if ( *v13 )
  {
    while ( (unsigned __int64)++v13 < v14 )
    {
      if ( !*v13 )
      {
        ++v15;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v10 = -1073741789;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(
                           a3,
                           v15) )
  {
LABEL_5:
    v10 = -1073741670;
    goto LABEL_17;
  }
  v17 = 0;
  while ( *v12 )
  {
    v18 = v12;
    do
      ++v18;
    while ( *v18 );
    v10 = lambda_90693e01559ab5daa9d90de50bdb401e_::operator()((__int64 *)va, v12, v17);
    if ( v10 < 0 )
      goto LABEL_17;
    v12 = v18 + 1;
    ++v17;
  }
  v10 = 0;
LABEL_17:
  if ( Pool2 )
    operator delete[](Pool2);
  return (unsigned int)v10;
}
