/*
 * XREFs of sub_1C00A0844 @ 0x1C00A0844
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C00A0844(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rbp
  PVOID *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rax
  PVOID *v10; // rdi

  v1 = dword_1C0093AE0;
  v3 = (unsigned int)dword_1C0093AE0;
  v4 = (PVOID *)sub_1C0007CF4(72LL, 8LL * (unsigned int)dword_1C0093AE0, 1297375570LL, *(_QWORD *)(a1 + 8));
  if ( v4 )
  {
    v6 = 0LL;
    if ( v1 )
    {
      while ( 1 )
      {
        v7 = sub_1C0007CF4(72LL, 8LL, 1297375570LL, *(_QWORD *)(a1 + 8));
        v4[v6] = (PVOID)v7;
        if ( !v7 )
          break;
        *(_WORD *)(v7 + 4) = v6;
        v8 = v4[v6];
        v6 = (unsigned int)(v6 + 1);
        *v8 |= 0xFFFFFFFFuLL;
        if ( (unsigned int)v6 >= v1 )
          goto LABEL_6;
      }
      v5 = -1073741670;
      v10 = v4;
      do
      {
        if ( *v10 )
        {
          ExFreePoolWithTag(*v10, 0x4D546152u);
          *v10 = 0LL;
        }
        ++v10;
        --v3;
      }
      while ( v3 );
      ExFreePoolWithTag(v4, 0x4D546152u);
    }
    else
    {
LABEL_6:
      *(_BYTE *)(a1 + 111) |= 0x80u;
      *(_QWORD *)(a1 + 6080) = v4;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
