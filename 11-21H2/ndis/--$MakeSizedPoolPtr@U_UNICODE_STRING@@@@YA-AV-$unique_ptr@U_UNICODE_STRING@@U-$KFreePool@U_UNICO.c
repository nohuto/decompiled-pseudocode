/*
 * XREFs of ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C0113830
 * Callers:
 *     ndisMiniportQueryDeviceProperty @ 0x1C0113688 (ndisMiniportQueryDeviceProperty.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C01137A4 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C01206CC (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     BuildServicePath @ 0x1C01351E0 (BuildServicePath.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MakeSizedPoolPtr<_UNICODE_STRING>(_QWORD *a1, int a2, __int64 a3)
{
  _OWORD *Pool2; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(64LL, a3, a2);
  if ( Pool2 )
  {
    *a1 = Pool2;
    *Pool2 = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
