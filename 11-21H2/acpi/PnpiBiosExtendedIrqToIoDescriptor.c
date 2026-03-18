/*
 * XREFs of PnpiBiosExtendedIrqToIoDescriptor @ 0x1C0096D6C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0096C54 (PnpiUpdateForceActiveBothInterrupts.c)
 *     PnpiUpdateResourceList @ 0x1C0098B40 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosExtendedIrqToIoDescriptor(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // ebp
  char v10; // r15
  char v11; // r14
  __int64 result; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int updated; // r8d
  _BYTE *v16; // rdx
  char v17; // al
  unsigned __int8 v18; // al
  int v19; // eax
  _BYTE *v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = 0LL;
  if ( a3 >= *(_BYTE *)(a2 + 4) )
    return 3221225485LL;
  v9 = *(_DWORD *)(a2 + 4LL * a3 + 5);
  if ( !v9 )
    return 0LL;
  v10 = 0;
  v11 = *(_BYTE *)(a2 + 3) & 2;
  if ( a1 )
  {
    result = PnpiUpdateForceActiveBothInterrupts(a1);
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD *)(a1 + 704);
    v14 = 0;
    if ( v13 )
    {
      while ( v9 != *(_DWORD *)(*(_QWORD *)(a1 + 696) + 4LL * v14) )
      {
        if ( ++v14 >= v13 )
          goto LABEL_6;
      }
      if ( v11 )
      {
        v10 = 1;
        goto LABEL_6;
      }
      return 3221225485LL;
    }
  }
LABEL_6:
  updated = PnpiUpdateResourceList(a4 + 8LL * a5, &v20);
  if ( updated >= 0 )
  {
    v16 = v20;
    *v20 = a3 != 0 ? 8 : 0;
    v16[1] = 2;
    *((_DWORD *)v16 + 2) = v9;
    *((_DWORD *)v16 + 3) = v9;
    *((_WORD *)v16 + 2) = 0;
    if ( v11 )
    {
      *((_WORD *)v16 + 2) = 1;
      if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
      {
        v16[2] = 1;
        goto LABEL_10;
      }
      v17 = (v10 != 0) + 2;
    }
    else
    {
      *((_WORD *)v16 + 2) = 0;
      v17 = (unsigned __int8)(*(_BYTE *)(a2 + 3) & 8 | 4) >> 2;
    }
    v16[2] = v17;
LABEL_10:
    v18 = *(_BYTE *)(a2 + 3);
    if ( (v18 & 0x10) != 0 )
    {
      *((_WORD *)v16 + 2) |= 0x20u;
      v18 = *(_BYTE *)(a2 + 3);
    }
    v19 = (v18 >> 1) & 2;
    *((_DWORD *)v16 + 4) = v19;
    if ( v10 )
      *((_DWORD *)v16 + 4) = v19 | 8;
  }
  return (unsigned int)updated;
}
