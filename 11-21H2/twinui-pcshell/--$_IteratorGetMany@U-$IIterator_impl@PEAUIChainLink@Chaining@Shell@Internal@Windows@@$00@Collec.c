/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIChainLink@Chaining@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@123@IPEAPEAUIChainLink@Chaining@Shell@Internal@3@PEAI@Z @ 0x1803029D4
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@Internal@4@PEAI@Z @ 0x180304D10 (-GetMany@-$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Founda.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Cleanup@UIChainLink@Chaining@Shell@Internal@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIChainLink@Chaining@Shell@Internal@3@I@Z @ 0x180302830 (--$_Cleanup@UIChainLink@Chaining@Shell@Internal@Windows@@I@Detail@Collections@Foundation@Windows.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Internal::Shell::Chaining::IChainLink *,1>,Windows::Internal::Shell::Chaining::IChainLink *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
  {
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Internal::Shell::Chaining::IChainLink,unsigned int>(
      a3,
      *a4);
  }
  else
  {
    while ( v11 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
        if ( v9 < 0 )
          goto LABEL_8;
        v8 = (unsigned int)(v8 + 1);
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
        if ( v9 >= 0 )
          continue;
      }
      if ( v9 < 0 )
        goto LABEL_8;
      break;
    }
    *a4 = v8;
  }
  return (unsigned int)v9;
}
