/*
 * XREFs of sub_1407607D8 @ 0x1407607D8
 * Callers:
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

__int64 __fastcall sub_1407607D8(__int64 a1)
{
  void *v1; // r15
  __int64 v2; // rsi
  int v3; // ebx
  __int64 result; // rax
  int v5; // edi
  PIMAGE_NT_HEADERS v6; // rbx
  __int64 v7; // r14
  int NumberOfSections; // ebp
  _RTL_BITMAP *v9; // r12
  _DWORD *v10; // rbx
  BOOL v11; // eax
  int v12; // edx
  unsigned int v13; // ecx

  v1 = *(void **)(a1 + 48);
  v2 = a1 + 160;
  v3 = 0;
  if ( (dword_140D06880 & 0x8000) != 0 && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 196) & 2) != 0) )
    v3 = 2;
  result = sub_14027B080(*(_QWORD *)(a1 + 48));
  v5 = v3 | 1;
  if ( (_DWORD)result == 1 )
    v5 = v3;
  if ( v5 )
  {
    v6 = RtlImageNtHeader(v1);
    v7 = v6->FileHeader.SizeOfOptionalHeader + 60LL;
    sub_1402D96AC(v2, 0LL);
    NumberOfSections = v6->FileHeader.NumberOfSections;
    v9 = *(_RTL_BITMAP **)(v2 + 112);
    if ( v6->FileHeader.NumberOfSections )
    {
      v10 = (DWORD *)((char *)&v6->Signature + v7);
      do
      {
        v11 = 0;
        if ( *(v10 - 9) == 1987011374 )
          v11 = *((_WORD *)v10 - 16) == 29285;
        v12 = v11 | 2;
        if ( (*v10 & 0x20000000) == 0 )
          v12 = v11;
        if ( (v12 & v5) != 0 )
        {
          v13 = *(v10 - 5);
          if ( v13 < *(v10 - 7) )
            v13 = *(v10 - 7);
          RtlSetBits(
            v9,
            *(v10 - 6) >> 12,
            ((((unsigned __int64)v1 + *(v10 - 6) + v13 + 4095) & 0xFFFFFFFFFFFFF000uLL)
           - ((unsigned __int64)v1
            + (unsigned int)*(v10 - 6))) >> 12);
        }
        --NumberOfSections;
        v10 += 10;
      }
      while ( NumberOfSections > 0 );
    }
    return sub_1402D94D8(v2, 0);
  }
  return result;
}
