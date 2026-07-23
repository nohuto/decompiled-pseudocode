/*
 * XREFs of sub_1406C59F0 @ 0x1406C59F0
 * Callers:
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_140782BB0 @ 0x140782BB0 (sub_140782BB0.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 *     sub_140A30510 @ 0x140A30510 (sub_140A30510.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406C59F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  NTSTATUS v3; // ebx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // r14d
  HANDLE *v10; // rsi

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  if ( v2 )
  {
    v6 = sub_14042A5E0(a1, *(_QWORD *)(a2 + 24));
    if ( v6 == -1073741822 )
    {
      v2 = 0LL;
    }
    else if ( v6 < 0 )
    {
      v3 = v6;
LABEL_6:
      v7 = sub_14042A5E0(a1, *(_QWORD *)(a2 + 24));
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741822 && !v3 )
        return v7;
      return (unsigned int)v3;
    }
  }
  if ( *(_QWORD *)(a2 + 96) )
  {
    if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
    {
      v9 = 0;
      v10 = (HANDLE *)(a2 + 104);
      do
      {
        if ( *v10 )
        {
          v3 = ZwClose(*v10);
          if ( v3 < 0 )
            goto LABEL_5;
          *v10 = 0LL;
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 6 );
    }
    v3 = ZwClose(*(HANDLE *)(a2 + 96));
    if ( v3 >= 0 )
      *(_QWORD *)(a2 + 96) = 0LL;
  }
LABEL_5:
  if ( v2 )
    goto LABEL_6;
  return (unsigned int)v3;
}
