/*
 * XREFs of NtGdiGradientFill @ 0x1C00879F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGradientFill @ 0x1C0087BF0 (GreGradientFill.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  char *v7; // r9
  __int64 v8; // r12
  unsigned int v9; // eax
  int v10; // r15d
  unsigned int v11; // r15d
  unsigned int v12; // eax
  char *v13; // rbx
  ULONG64 v14; // rcx
  unsigned int v15; // r14d
  ULONG v17; // ecx

  v7 = a2;
  if ( (a6 & 0xFFFFFF00) != 0
    || !a2
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > 0x271000 )
  {
    goto LABEL_32;
  }
  v8 = 16 * a3;
  v9 = 40960000 - v8;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= v9 >> 3 )
    {
      v10 = 8;
      goto LABEL_13;
    }
LABEL_32:
    v17 = 87;
    goto LABEL_33;
  }
  if ( a5 > v9 / 0xCuLL )
    goto LABEL_32;
  v10 = 12;
LABEL_13:
  v11 = a5 * v10;
  v12 = v11 + v8;
  if ( v11 + (unsigned int)v8 >= 0x2710000 )
  {
    v17 = 8;
LABEL_33:
    EngSetLastError(v17);
    return 0LL;
  }
  if ( v12 )
  {
    v13 = (char *)Win32AllocPool(v12, 1886221383LL);
    v7 = a2;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    if ( (_DWORD)v8 && ((unsigned __int64)&v7[v8] > MmUserProbeAddress || &v7[v8] < v7) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, v7, (unsigned int)v8);
    if ( v11 )
    {
      v14 = (ULONG64)a4 + v11;
      if ( v14 > MmUserProbeAddress || v14 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v13[v8], a4, v11);
    v15 = GreGradientFill(a1, a5, a6);
    Win32FreePool(v13);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v15;
}
