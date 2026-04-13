/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAUIInspectable@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIInspectable@@$00@123@IPEAPEAUIInspectable@@PEAI@Z @ 0x1800C6018
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@PEAI@Z @ 0x1800C8AA0 (-GetMany@-$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIIn.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??$_Cleanup@UIInspectable@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInspectable@@I@Z @ 0x1800C5FC8 (--$_Cleanup@UIInspectable@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInspectable@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<IInspectable *,1>,IInspectable *>(
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
    Windows::Foundation::Collections::Detail::_Cleanup<IInspectable,unsigned int>(a3, *a4);
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
