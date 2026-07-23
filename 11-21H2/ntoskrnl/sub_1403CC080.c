/*
 * XREFs of sub_1403CC080 @ 0x1403CC080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

unsigned __int64 __fastcall sub_1403CC080(__int64 a1)
{
  int v1; // r9d
  int v2; // r9d
  char v3; // dl
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r9d

  v1 = *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a1 + 88) = a1 + 28;
  v2 = v1 - 1;
  v3 = *(_BYTE *)(a1 + 137);
  if ( !v3 )
    v2 = (unsigned __int16)v2;
  *(_DWORD *)(a1 + 120) = v3 != 0 ? 3 : 1;
  result = (unsigned __int64)sub_1403A2E60(a1, v2);
  if ( (*(_DWORD *)(v5 + 112) & 3) == 0 )
  {
    result = (unsigned int)~(*(_DWORD *)(v5 + 16) >> 6);
LABEL_8:
    if ( (result & 1) == 0 )
      return result;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(v5 + 112) & 3) == 1 )
  {
    result = *(_DWORD *)(v5 + 16) >> 6;
    goto LABEL_8;
  }
LABEL_5:
  if ( v6 )
  {
    result = *(unsigned __int16 *)(v5 + 104);
    *(_DWORD *)(v5 + 20) = result;
  }
  return result;
}
