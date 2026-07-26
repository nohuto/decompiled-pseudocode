/*
 * XREFs of ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C011B46C
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0FC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D0C8 (ndisMiniportQueryInterfaceProperty.c)
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C011B4F8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

_QWORD *__fastcall Rtl::DuplicateUnicodeString(_QWORD *a1, const void **a2)
{
  PVOID v4; // rbx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int64)*((unsigned __int16 *)a2 + 1) + 16 < *((unsigned __int16 *)a2 + 1) )
  {
    *a1 = 0LL;
  }
  else
  {
    MakeSizedPoolPtr<_UNICODE_STRING>(&P, 1851868238LL);
    v4 = P;
    if ( P )
    {
      *((_QWORD *)P + 1) = (char *)P + 16;
      *(_WORD *)v4 = *(_WORD *)a2;
      *((_WORD *)v4 + 1) = *((_WORD *)a2 + 1);
      memmove(*((void **)v4 + 1), a2[1], *(unsigned __int16 *)a2);
      *a1 = v4;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
