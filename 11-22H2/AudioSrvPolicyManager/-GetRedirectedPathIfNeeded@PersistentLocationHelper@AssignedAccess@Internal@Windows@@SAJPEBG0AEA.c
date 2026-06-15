/*
 * XREFs of ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180013C50
 * Callers:
 *     _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x180048520 (_lambda_53a10622b8c115a42f3ae5bcca2992b2_--operator().c)
 * Callees:
 *     memcpy_s @ 0x18000D3C0 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18001028C (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015B50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180015D48 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003ACE4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
        void *Source,
        __int64 a2,
        LPVOID *a3,
        const char *a4)
{
  __int64 v6; // rcx
  char *v7; // rax
  rsize_t v8; // rdi
  _WORD *v9; // rax
  _WORD *v10; // rbx
  _WORD *v11; // r14
  void *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v16[4]; // [rsp+20h] [rbp-C8h]
  _BYTE v17[8]; // [rsp+30h] [rbp-B8h] BYREF
  void **v18; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-A8h]
  void ***v20; // [rsp+A0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  void *v22; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+108h] [rbp+20h] BYREF

  v23 = a2;
  v22 = Source;
  if ( !a2 )
  {
    if ( !Source )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xCCD,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        a4);
    v6 = 0x7FFFFFFFLL;
    v7 = (char *)Source;
    do
    {
      if ( !*(_WORD *)v7 )
        break;
      v7 += 2;
      --v6;
    }
    while ( v6 );
    v8 = 2 * ((v7 - (_BYTE *)Source) >> 1);
    v9 = CoTaskMemAlloc(v8 + 2);
    v10 = v9;
    if ( v9 )
    {
      v11 = &v9[v8 / 2];
      if ( Source )
      {
        memcpy_s(v9, v8 + 2, Source, v8);
        *v11 = 0;
      }
      else
      {
        *v9 = 0;
      }
      *v11 = 0;
    }
    if ( a3 != &pv )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a3,
        v10);
      v10 = 0LL;
    }
    if ( !v10 )
      return 0LL;
    v12 = v10;
    goto LABEL_21;
  }
  pv = 0LL;
  *(_QWORD *)v16 = &v22;
  *(_QWORD *)&v16[2] = &v23;
  v18 = &wistd::__function::__func<_lambda_6166c63e326ec22a386edc375e0b06c9_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v19 = *(_OWORD *)v16;
  v20 = &v18;
  v13 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
          (__int64)&pv,
          (__int64)v17);
  v14 = v13;
  if ( v13 >= 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a3,
      &pv);
    v12 = pv;
    if ( !pv )
      return 0LL;
LABEL_21:
    CoTaskMemFree(v12);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
    (const char *)(unsigned int)v13);
  if ( pv )
    CoTaskMemFree(pv);
  return v14;
}
