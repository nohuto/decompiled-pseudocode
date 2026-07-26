/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C013AD44
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C013AF58 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a07_ea_1C013AF58.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B16B8 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B377C (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C012176C (--_V@YAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B90C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C013BDB4 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
        HANDLE *a1,
        _UNICODE_STRING *a2)
{
  HANDLE v4; // rcx
  _BYTE *v5; // rbx
  _BYTE *v6; // rsi
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rdi
  unsigned int v11; // r8d
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  _WORD *v15; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *Pool2; // [rsp+38h] [rbp-C8h] BYREF
  __int64 Atom; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  v5 = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  v6 = KeyValueInformation;
  v7 = ZwQueryValueKey(v4, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength, 2052287565);
    v5 = Pool2;
    if ( !Pool2 )
      goto LABEL_18;
    v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    if ( v8 >= 0 )
    {
      v6 = v5;
      goto LABEL_6;
    }
LABEL_16:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>((void **)&Pool2);
    return (unsigned int)v8;
  }
  if ( v7 < 0 )
    goto LABEL_16;
LABEL_6:
  if ( *((_DWORD *)v6 + 1) != 7 )
  {
    v8 = -1073741788;
    goto LABEL_16;
  }
  v9 = *((unsigned int *)v6 + 2);
  if ( (v9 & 1) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_16;
  }
  v10 = v6 + 12;
  v11 = 0;
  v12 = v6 + 12;
  v13 = (unsigned __int64)&v6[v9 + 12];
  if ( (unsigned __int64)(v6 + 12) >= v13 )
  {
LABEL_15:
    v8 = -1073741789;
    goto LABEL_16;
  }
LABEL_11:
  if ( *v12 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)++v12 >= v13 )
        goto LABEL_15;
      if ( !*v12 )
      {
        ++v11;
        if ( (unsigned __int64)++v12 < v13 )
          goto LABEL_11;
        goto LABEL_15;
      }
    }
  }
  if ( !Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((unsigned int *)qword_1C00F5730 + 18, v11 + 4LL) )
  {
LABEL_18:
    v8 = -1073741670;
    goto LABEL_16;
  }
  while ( 1 )
  {
    if ( !*v10 )
    {
      v8 = 0;
      goto LABEL_16;
    }
    v15 = v10;
    do
      ++v15;
    while ( *v15 );
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom(qword_1C00F5730, v10);
    if ( !Atom )
      break;
    Rtl::KArray<Rtl::_KStringAtom *,1>::append((char *)qword_1C00F5730 + 72, &Atom);
    v10 = v15 + 1;
  }
  if ( v5 )
    operator delete[](v5);
  return 3221225626LL;
}
