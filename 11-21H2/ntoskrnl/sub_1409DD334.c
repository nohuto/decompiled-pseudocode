/*
 * XREFs of sub_1409DD334 @ 0x1409DD334
 * Callers:
 *     sub_1409DD22C @ 0x1409DD22C (sub_1409DD22C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409DD334(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r8d

  *(_QWORD *)(a1 + 16) = 2LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  result = *(_QWORD *)(a2 + 56);
  if ( result != a2 + 56 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(result + 16);
      if ( (v3 & 0x8000) != 0 )
      {
        *(_DWORD *)(a1 + 16) = 3;
        v3 = *(_DWORD *)(result + 16);
      }
      if ( (v3 & 0x6000) != 0 )
      {
        *(_BYTE *)(a1 + 32) = 1;
        v3 = *(_DWORD *)(result + 16);
      }
      if ( (v3 & 0x81000) == 0x81000 )
        break;
      result = *(_QWORD *)result;
      if ( result == a2 + 56 )
        goto LABEL_10;
    }
    *(_DWORD *)(a1 + 16) = 0;
  }
LABEL_10:
  if ( *(_QWORD *)(a2 + 112) == -1LL )
  {
    if ( *(_QWORD *)(a2 + 120) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 20) = *(unsigned __int16 *)(a2 + 120);
      *(_DWORD *)(a1 + 24) = *(unsigned __int8 *)(a2 + 122);
      result = *(unsigned int *)(a2 + 124);
      *(_DWORD *)(a1 + 28) = result;
    }
  }
  return result;
}
