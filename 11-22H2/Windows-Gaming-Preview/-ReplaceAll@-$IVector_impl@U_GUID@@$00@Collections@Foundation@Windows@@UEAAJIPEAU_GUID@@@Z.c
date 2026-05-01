/*
 * XREFs of ?ReplaceAll@?$IVector_impl@U_GUID@@$00@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x18003E040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IVector_impl<_GUID,1>::ReplaceAll(
        __int64 *a1,
        unsigned int a2,
        __int128 *a3)
{
  int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 120))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v8 = *a1;
        v10 = *a3;
        v6 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v8 + 104))(a1, &v10);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64 *))(*a1 + 120))(a1);
    }
  }
  return (unsigned int)v6;
}
