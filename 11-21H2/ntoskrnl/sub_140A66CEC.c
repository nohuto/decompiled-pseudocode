/*
 * XREFs of sub_140A66CEC @ 0x140A66CEC
 * Callers:
 *     sub_14093C98C @ 0x14093C98C (sub_14093C98C.c)
 *     sub_140A6581C @ 0x140A6581C (sub_140A6581C.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 */

ULONG64 __fastcall sub_140A66CEC(
        PRTL_BITMAP_EX BitMapHeader,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6)
{
  ULONG64 result; // rax
  __int64 v7; // rdi
  ULONG64 v8; // rbp
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (ULONG64)&retaddr;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 48);
  *a5 = 0;
  if ( v8 != -1LL )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        result = RtlFindSetBitsEx(BitMapHeader, 1uLL, v8);
        if ( result < v8 || result == -1LL )
          break;
        v13 = (unsigned int)*a5;
        v8 = result + 1;
        *(_QWORD *)(a3 + 8 * v13) = result;
        v14 = v13 + 1;
        *a5 = v13 + 1;
        if ( (int)v13 + 1 >= a4 )
          goto LABEL_8;
      }
    }
    else
    {
      v14 = 0;
LABEL_8:
      result = (unsigned int)(v14 - 1);
      v7 = *(_QWORD *)(a3 + 8 * result) + 1LL;
    }
  }
  *(_QWORD *)(a2 + 48) = v7;
  if ( *a5 )
  {
    v15 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 40) = *a5;
    *a6 = v15;
    result = v15 + 1;
    *(_QWORD *)(a2 + 56) = v15 + 1;
  }
  return result;
}
