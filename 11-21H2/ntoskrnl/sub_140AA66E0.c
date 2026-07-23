/*
 * XREFs of sub_140AA66E0 @ 0x140AA66E0
 * Callers:
 *     sub_140AA6270 @ 0x140AA6270 (sub_140AA6270.c)
 *     sub_140AA6400 @ 0x140AA6400 (sub_140AA6400.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14045BA00 (MmIsNonPagedSystemAddressValid.c)
 *     sub_1405FFA00 @ 0x1405FFA00 (sub_1405FFA00.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFBC8 @ 0x1405FFBC8 (sub_1405FFBC8.c)
 *     sub_140A92010 @ 0x140A92010 (sub_140A92010.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 */

char __fastcall sub_140AA66E0(__int64 a1, __int64 a2, int a3, int a4, const void *a5, int a6)
{
  int v6; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // rdi
  __int64 i; // rsi
  _QWORD *v12; // rbp
  _QWORD *v13; // r15
  unsigned int v14; // ecx

  LOBYTE(v6) = *(_BYTE *)(a2 + 1);
  if ( (unsigned __int8)v6 > 0xCu )
  {
    if ( (unsigned __int8)v6 < 0xFu )
      return v6;
    if ( (unsigned __int8)v6 > 0x12u )
    {
      if ( (_BYTE)v6 == 19 )
      {
        if ( *(_DWORD *)(a2 + 8) > 3u )
          return v6;
      }
      else if ( (_BYTE)v6 != 21 )
      {
        return v6;
      }
    }
    goto LABEL_41;
  }
  if ( (unsigned __int8)v6 >= 0xAu )
  {
LABEL_41:
    if ( !a3 || a4 != 2 )
      return v6;
    v14 = 536;
LABEL_44:
    LOBYTE(v6) = sub_1405FFB44(v14, a5, (const void *)a1);
    return v6;
  }
  if ( (unsigned __int8)v6 <= 1u )
    goto LABEL_32;
  if ( (_BYTE)v6 == 2 )
  {
    if ( a6 || a4 == 2 )
      return v6;
    v14 = 774;
    goto LABEL_44;
  }
  if ( (unsigned __int8)v6 <= 6u )
  {
LABEL_32:
    if ( a6 || a4 )
      return v6;
    v14 = 535;
    goto LABEL_44;
  }
  if ( (_BYTE)v6 != 7 )
    return v6;
  if ( *(_DWORD *)(a2 + 8) != 4 )
    goto LABEL_17;
  if ( a3 )
  {
    if ( a4 == 2 )
    {
      v9 = 536;
LABEL_16:
      sub_1405FFB44(v9, a5, (const void *)a1);
    }
  }
  else
  {
    if ( !a4 )
    {
      v9 = 554;
      goto LABEL_16;
    }
    if ( *(int *)(a1 + 48) >= 0 && !*(_QWORD *)(a1 + 56) )
    {
      v9 = 555;
      goto LABEL_16;
    }
  }
LABEL_17:
  LOBYTE(v6) = dword_140D4E000;
  if ( !dword_140D4E000 && *(int *)(a1 + 48) >= 0 )
  {
    v10 = *(_DWORD **)(a1 + 56);
    if ( v10 )
    {
      if ( *(_DWORD *)(a2 + 8) <= 4u )
      {
        LOBYTE(v6) = MmIsNonPagedSystemAddressValid(*(PVOID *)(a1 + 56));
        if ( (_BYTE)v6 )
        {
          for ( i = 0LL; (unsigned int)i < *v10; i = (unsigned int)(i + 1) )
          {
            v12 = *(_QWORD **)&v10[2 * i + 2];
            v6 = sub_140A92124((__int64)v12, 5);
            if ( !v6 )
            {
              v13 = sub_140A92010(v12);
              if ( v13 != v12 )
                sub_1405FFBC8(0x248u, a5, (const void *)a1, v12);
              sub_1405FFA00((__int64)v12, 5LL);
              LOBYTE(v6) = ObfDereferenceObjectWithTag(v13, 0x49667256u);
            }
          }
        }
      }
    }
  }
  return v6;
}
