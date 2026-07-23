/*
 * XREFs of sub_140AFAA68 @ 0x140AFAA68
 * Callers:
 *     sub_140AFA864 @ 0x140AFA864 (sub_140AFA864.c)
 *     sub_140AFAA0C @ 0x140AFAA0C (sub_140AFAA0C.c)
 * Callees:
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 */

__int64 __fastcall sub_140AFAA68(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  unsigned int v7; // ebx
  unsigned __int8 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  void *v12; // rax
  int v14; // ecx

  v5 = a1;
  v7 = 0;
  *(_DWORD *)(a4 + 24) = a2;
  v8 = *(_BYTE *)(a3 + 3);
  if ( v8 <= 1u )
  {
    v9 = 1;
  }
  else
  {
    v9 = 2;
    if ( v8 != 2 )
    {
      v9 = 4;
      if ( v8 != 3 )
      {
        if ( v8 != 4 )
          return (unsigned int)-1073741823;
        v9 = 8;
      }
    }
  }
  v10 = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)v10 )
    v11 = v10 >> 3;
  else
    v11 = v9;
  if ( v9 < a2 )
    return (unsigned int)-1073741823;
  *(_DWORD *)(a4 + 28) = v11;
  if ( !*(_QWORD *)(a3 + 4) )
    return (unsigned int)-1073741823;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
      *(_QWORD *)(a4 + 8) = sub_1403BE7F0(*(_QWORD *)(a3 + 4), v5, 0);
      *(_QWORD *)(a4 + 32) = sub_14051F910;
      v12 = sub_14051F960;
      goto LABEL_10;
    case 1:
      *(_QWORD *)(a4 + 8) = *(unsigned int *)(a3 + 4);
      *(_QWORD *)(a4 + 32) = sub_1403B4F10;
      v12 = sub_1403B4210;
LABEL_10:
      *(_QWORD *)(a4 + 40) = v12;
      goto LABEL_11;
    case 2:
      *(_DWORD *)(a4 + 16) = 0;
      v14 = *(_DWORD *)(a3 + 8) & 0x1F;
      *(_DWORD *)(a4 + 16) = v14;
      *(_DWORD *)(a4 + 16) = v14 | (*(_DWORD *)(a3 + 4) >> 11) & 0xE0;
      *(_WORD *)(a4 + 20) = *(_WORD *)(a3 + 4);
      *(_WORD *)(a4 + 22) = *(_WORD *)(a3 + 10);
      *(_QWORD *)(a4 + 32) = PsGetHostSilo;
      v12 = PsGetHostSilo;
      *(_QWORD *)(a4 + 8) = a4 + 16;
      goto LABEL_10;
  }
  v7 = -1073741637;
LABEL_11:
  if ( *(_QWORD *)(a4 + 8) )
    *(_BYTE *)a4 = 1;
  return v7;
}
