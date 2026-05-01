/*
 * XREFs of AslRegistryEnumKey @ 0x180098A10
 * Callers:
 *     AslpProcessMatchRegNode @ 0x18009FA98 (AslpProcessMatchRegNode.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 */

__int64 __fastcall AslRegistryEnumKey(void *a1, __int64 a2, void *a3, ULONG a4)
{
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rbx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE KeyInformation[12]; // [rsp+40h] [rbp-238h] BYREF
  unsigned int Size; // [rsp+4Ch] [rbp-22Ch]
  size_t Size_4; // [rsp+50h] [rbp-228h] BYREF

  ResultLength[0] = 0;
  v5 = ZwEnumerateKey(a3, a4, KeyBasicInformation, KeyInformation, 0x20Cu, ResultLength);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int64)Size >> 1;
    if ( v6 + 1 < 0x104 )
    {
      memcpy_0(a1, &Size_4, Size);
      *((_WORD *)a1 + v6) = 0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v5;
}
