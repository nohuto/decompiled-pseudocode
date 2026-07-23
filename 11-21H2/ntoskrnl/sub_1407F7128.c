/*
 * XREFs of sub_1407F7128 @ 0x1407F7128
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     sub_1406D2718 @ 0x1406D2718 (sub_1406D2718.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall sub_1407F7128(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // edi
  int v14; // edx

  result = *a2;
  if ( (result & 1) != 0 )
  {
    v12 = a2[2];
    if ( v12 < 4 )
    {
      if ( v12 <= 2 || (result = SeSinglePrivilegeCheck(stru_140D3CA68, a3) & 1, (_DWORD)result) )
      {
        LODWORD(result) = *(_DWORD *)(a1 + 1124);
        v13 = v12 << 27;
        do
        {
          v14 = result;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(a1 + 1124),
                                   v13 | result & 0xC7FFFFFF,
                                   result);
        }
        while ( (_DWORD)result != v14 );
      }
    }
  }
  v8 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    result = std::codecvt<wchar_t,char,int>::do_max_length();
    if ( v9 < (unsigned int)result )
    {
      LODWORD(result) = *(_DWORD *)(a1 + 1120);
      v10 = v9 << 12;
      do
      {
        v11 = result;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(a1 + 1120),
                                 v10 | result & 0xFFFF8FFF,
                                 result);
      }
      while ( (_DWORD)result != v11 );
      v8 = *a2;
    }
  }
  if ( (v8 & 4) != 0 && a2[4] <= 0xFF )
  {
    LOBYTE(a4) = a3;
    return sub_1406D2718(a1, *((_BYTE *)a2 + 16), 0LL, a4);
  }
  return result;
}
