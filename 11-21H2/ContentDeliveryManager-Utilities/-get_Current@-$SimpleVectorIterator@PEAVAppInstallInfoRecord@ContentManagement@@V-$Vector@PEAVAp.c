/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180090C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::get_Current(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  _DWORD *v7; // r14
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9

  *a2 = 0LL;
  v5 = *(_DWORD *)(a1 + 80);
  v7 = *(_DWORD **)(a1 + 64);
  if ( v5 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)v7 + 48LL))(
           *(_QWORD *)(a1 + 64),
           *(unsigned int *)(a1 + 72),
           a2);
    v5 = v8;
    if ( *(_DWORD *)(a1 + 84) != v7[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL, v9, v10);
        if ( *a2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
        *a2 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v5, 0LL, a3, a4);
  }
  return (unsigned int)v5;
}
