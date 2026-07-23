/*
 * XREFs of sub_14051C090 @ 0x14051C090
 * Callers:
 *     sub_14051C5C0 @ 0x14051C5C0 (sub_14051C5C0.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14051C1B8 @ 0x14051C1B8 (sub_14051C1B8.c)
 *     sub_14051C4E0 @ 0x14051C4E0 (sub_14051C4E0.c)
 */

__int64 __fastcall sub_14051C090(__int64 a1, _DWORD *a2)
{
  unsigned int *v2; // rbp
  unsigned int v5; // ebx
  int v6; // r14d
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdx
  _DWORD *v14; // rcx

  v2 = (unsigned int *)(a1 + 128);
  v5 = -1073741637;
  v6 = 0;
  if ( *(_WORD *)(a1 + 10) )
  {
    v7 = (_DWORD *)(a1 + 144);
    while ( 1 )
    {
      if ( (unsigned int)(v7[8] - 2) <= 1 )
        goto LABEL_17;
      if ( RtlCompareMemory(v7, &xmmword_14003A610, 0x10uLL) == 16 )
        break;
      if ( RtlCompareMemory(v7, qword_14003A690, 0x10uLL) == 16 )
      {
        v13 = *v2;
        if ( *(unsigned int *)(a1 + 20) < v13 + (unsigned __int64)(unsigned int)*(v7 - 3)
          || (v14 = (_DWORD *)(v13 + a1)) == 0LL
          || !v14[21] )
        {
          v5 = -1073741637;
          goto LABEL_15;
        }
        v12 = sub_14051C4E0(v14);
        goto LABEL_13;
      }
LABEL_15:
      if ( (v5 & 0x80000000) == 0 )
      {
        *a2 = 2;
        return v5;
      }
      v2 += 18;
      v7 += 18;
LABEL_17:
      if ( ++v6 >= (unsigned int)*(unsigned __int16 *)(a1 + 10) )
        return v5;
    }
    v8 = *v2;
    v9 = v8 + (unsigned int)*(v7 - 3);
    v10 = a1 + v8;
    v11 = 0LL;
    if ( *(unsigned int *)(a1 + 20) >= v9 )
      v11 = v10;
    v12 = sub_14051C1B8(v11);
LABEL_13:
    v5 = v12;
    goto LABEL_15;
  }
  return v5;
}
