/*
 * XREFs of sub_1C0032504 @ 0x1C0032504
 * Callers:
 *     sub_1C0058E18 @ 0x1C0058E18 (sub_1C0058E18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0032504(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 224);
  if ( result )
    return (unsigned __int8)BYTE2(*(_DWORD *)(result + 96)) | ((((unsigned __int8)*(_DWORD *)(result + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(result + 96))) << 8);
  return result;
}
