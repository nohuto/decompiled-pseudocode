/*
 * XREFs of ?__abi_Platform_?$IBox@VSize@Foundation@Windows@@____abi_get_Value@?Q?$IBox@VSize@Foundation@Windows@@@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAJPEAVSize@Foundation@Windows@@@Z @ 0x18043B330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform___IBox_VSize_Foundation_Windows______abi_get_Value__Q__IBox_VSize_Foundation_Windows___Platform____CustomBox_VSize_Foundation_Windows___Details_2_UE_AAAJPEAVSize_Foundation_Windows___Z(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  memset_0(&v5, 0, sizeof(v5));
  try
  {
    *a2 = v5;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, &v5);
    *a2 = v5;
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
