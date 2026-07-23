/*
 * XREFs of sub_140860698 @ 0x140860698
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140860698(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  const wchar_t *v5; // rdi
  size_t v6; // rbx
  _WORD *Pool2; // rax
  _WORD *v8; // rsi

  if ( a2 < 0 )
    return 3221225659LL;
  if ( a2 <= 1 )
  {
    switch ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 32LL) )
    {
      case 0x81:
        v5 = L"ACPI_HAL\\PNP0C08";
        v6 = 52LL;
        break;
      case 0x83:
        v5 = L"ACPI_HAL\\UEFI";
        v6 = 28LL;
        break;
      case 0x84:
        v5 = L"ACPI_HAL\\PRM";
        v6 = 26LL;
        break;
      default:
        return 3221225659LL;
    }
  }
  else
  {
    if ( a2 != 3 )
      return 3221225659LL;
    v5 = L"0";
    v6 = 4LL;
  }
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v6 + 2, 1886150984LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, v5, v6);
  result = 0LL;
  v8[v6 >> 1] = 0;
  *a3 = v8;
  return result;
}
