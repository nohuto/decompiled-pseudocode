/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C012F068
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C012F258 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a07_ea_1C012F258.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C012FAF8 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C012FFA0 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0131610 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
        HANDLE *a1,
        _UNICODE_STRING *a2)
{
  HANDLE v4; // rcx
  _BYTE *v5; // rsi
  void *Pool2; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rdi
  unsigned int v11; // r8d
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  _WORD *v15; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 Atom; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  ResultLength = 0;
  v5 = KeyValueInformation;
  Pool2 = 0LL;
  v7 = ZwQueryValueKey(v4, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 2052287565);
    if ( !Pool2 )
      goto LABEL_5;
    v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_17;
    v5 = Pool2;
  }
  else if ( v7 < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v5 + 1) != 7 )
  {
    v8 = -1073741788;
    goto LABEL_17;
  }
  v9 = *((unsigned int *)v5 + 2);
  if ( (v9 & 1) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  v10 = v5 + 12;
  v11 = 0;
  v12 = v5 + 12;
  v13 = (unsigned __int64)&v5[v9 + 12];
  if ( (unsigned __int64)(v5 + 12) >= v13 )
    goto LABEL_16;
LABEL_12:
  if ( *v12 )
  {
    while ( (unsigned __int64)++v12 < v13 )
    {
      if ( !*v12 )
      {
        ++v11;
        if ( (unsigned __int64)++v12 < v13 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v8 = -1073741789;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((char *)qword_1C00EC738 + 72, v11 + 4LL) )
  {
LABEL_5:
    v8 = -1073741670;
    goto LABEL_17;
  }
  while ( *v10 )
  {
    v15 = v10;
    do
      ++v15;
    while ( *v15 );
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom(qword_1C00EC738, v10);
    if ( !Atom )
      goto LABEL_5;
    Rtl::KArray<Rtl::_KStringAtom *,1>::append((char *)qword_1C00EC738 + 72, &Atom);
    v10 = v15 + 1;
  }
  v8 = 0;
LABEL_17:
  if ( Pool2 )
    operator delete[](Pool2);
  return (unsigned int)v8;
}
