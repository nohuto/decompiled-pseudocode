/*
 * XREFs of sub_140552800 @ 0x140552800
 * Callers:
 *     sub_140554BC4 @ 0x140554BC4 (sub_140554BC4.c)
 *     sub_140A659E0 @ 0x140A659E0 (sub_140A659E0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_140554D4C @ 0x140554D4C (sub_140554D4C.c)
 */

__int64 __fastcall sub_140552800(__int64 a1, char *a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  char *v5; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  PHYSICAL_ADDRESS v10; // rax
  int v11; // eax

  v4 = a3;
  v5 = a2;
  if ( a4 == 1 )
  {
    PhysicalAddress = MmGetPhysicalAddress(a2);
    v8 = sub_140554D4C(
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(a1 + 32),
           (unsigned __int64)PhysicalAddress.QuadPart >> 12,
           v4,
           *(_BYTE *)(a1 + 40) & 1);
LABEL_5:
    v9 = v8;
    goto LABEL_11;
  }
  if ( a4 == 2 )
  {
    v8 = sub_140554D4C(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (_DWORD)a2, a3, *(_BYTE *)(a1 + 40) & 1);
    goto LABEL_5;
  }
  v9 = 0;
  if ( !a3 )
    return v9;
  do
  {
    if ( sub_14028FBF0((__int64)v5) )
    {
      v10 = MmGetPhysicalAddress(v5);
      v11 = sub_140554D4C(
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 32),
              (unsigned __int64)v10.QuadPart >> 12,
              1,
              *(_BYTE *)(a1 + 40) & 1);
      if ( v11 < 0 )
        v9 = v11;
    }
    v5 += 4096;
    --v4;
  }
  while ( v4 );
LABEL_11:
  if ( v9 == -1073741503 && (*(_BYTE *)(a1 + 40) & 1) != 0 )
    return 0;
  return v9;
}
