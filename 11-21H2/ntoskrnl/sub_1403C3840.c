/*
 * XREFs of sub_1403C3840 @ 0x1403C3840
 * Callers:
 *     sub_1403C3548 @ 0x1403C3548 (sub_1403C3548.c)
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

__int64 __fastcall sub_1403C3840(PVOID BaseOfImage, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v7; // r15
  _DWORD *v10; // rax
  unsigned int v11; // ebx
  PVOID v12; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  ULONG Size[10]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a3;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  v10 = (_DWORD *)sub_14075AEA4(BaseOfImage);
  v11 = 0;
  if ( v10 && *v10 >= 0xC8u )
  {
    if ( *((_QWORD *)v10 + 15) )
      *(_DWORD *)(a6 + 4) = v10[30] - a2;
    v12 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xCu, Size);
    if ( v12 )
      *(_DWORD *)(a6 + 8) = (_DWORD)v12 - (_DWORD)BaseOfImage;
    if ( a4 )
    {
      v14 = a4 - a2;
      v15 = 16LL;
      v16 = a5[18];
      if ( v16 <= a5[17] )
        v16 = a5[17];
      v17 = a5[19];
      if ( v17 <= v16 )
        v17 = v16;
      LODWORD(v18) = a5[20];
      if ( (unsigned int)v18 <= v17 )
        LODWORD(v18) = v17;
      v19 = a5 + 1;
      do
      {
        v20 = v18;
        v18 = *v19++;
        if ( (unsigned int)v18 <= v20 )
          v18 = v20;
        --v15;
      }
      while ( v15 );
      v21 = v14 + v18;
      if ( v21 < v14 || v21 > 0x7FFFFFFF || v14 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *(_DWORD *)a6 = v14;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v11;
}
