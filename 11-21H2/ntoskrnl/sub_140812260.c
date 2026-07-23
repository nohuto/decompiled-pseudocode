/*
 * XREFs of sub_140812260 @ 0x140812260
 * Callers:
 *     sub_140811FE0 @ 0x140811FE0 (sub_140811FE0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140A1CAC4 @ 0x140A1CAC4 (sub_140A1CAC4.c)
 * Callees:
 *     sub_140812318 @ 0x140812318 (sub_140812318.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140812260(__int64 a1, char a2)
{
  int v4; // ebx
  __int64 result; // rax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h]

  P[0] = 0LL;
  v7 = 0;
  if ( (int)sub_140812F84(a1, L"System", L"Description", 4LL, P, &v7) >= 0
    && (v4 = *(_DWORD *)P[0], ExFreePoolWithTag(P[0], 0x4B444342u), v4)
    && a2 )
  {
    v8 = 1;
    return sub_1408123B4(a1, L"TreatAsSystem", L"Description");
  }
  else
  {
    result = sub_140812318(a1, L"TreatAsSystem", L"Description");
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}
