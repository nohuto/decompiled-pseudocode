/*
 * XREFs of sub_14038217C @ 0x14038217C
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_14038F8FC @ 0x14038F8FC (sub_14038F8FC.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 * Callees:
 *     sub_14038230C @ 0x14038230C (sub_14038230C.c)
 */

__int64 __fastcall sub_14038217C(__int64 a1, char a2)
{
  int v2; // ebp
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edi
  _BYTE *v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rax
  BOOL v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 1904) & 3;
  v5 = 2;
  if ( (a2 & 3) != 0 || v2 != 2 )
  {
    v6 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    if ( v6 )
    {
      v16 = *(_DWORD *)(a1 + 856);
      v7 = v16 >> 2;
      if ( v2 == 3 )
      {
        if ( v7 >= v16 - 256 )
          v7 = v16 - 256;
      }
      else
      {
        v17 = 3 * v7;
        v7 = v16 - 128;
        if ( v17 < v16 - 128 )
          v7 = v17;
      }
      v8 = &unk_140C0D8AC;
      if ( v7 < 2 )
        v7 = 2;
    }
    else
    {
      v7 = 3;
      v8 = &unk_140C0BB20;
    }
    v20 = 0;
    v18 = 0;
    v9 = 0;
    v19 = 0;
    v10 = v6 != 0 ? 1 : 8;
    do
      sub_14038230C(a1, v9++, (unsigned int)&v19, (unsigned int)&v20, (__int64)&v18);
    while ( v9 < v10 );
    v11 = *(_QWORD *)(a1 + 800);
    if ( (a2 & 2) != 0 )
    {
      if ( !*(_BYTE *)(v11 + 6022) && v19 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) > *(_QWORD *)(a1 + 8) )
        return v5;
    }
    else if ( !*(_QWORD *)(v11 + 6568) && v19 >= v7 )
    {
      v12 = (a2 & 1) == 0
         && (v2 == 1
          || (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL) >> 8)
           + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6592LL)
           + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL));
      v13 = v20 >> v8[2 * v12];
      if ( v2 == 3 )
        v13 -= v20 >> v8[2 * v12 + 1];
      if ( v18 <= v13 )
      {
        if ( v2 != 1 && v12 )
          return v18 > v20 >> *v8;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 776) )
          return v5;
        v14 = *(_QWORD *)(a1 + 800);
        if ( *(_BYTE *)(v14 + 6022) || !(*(_DWORD *)(v14 + 6100) + *(_DWORD *)(v14 + 6592) + *(_DWORD *)(v14 + 6096)) )
          return v5;
        if ( !v2 || v2 == 3 )
          return 1;
      }
      return 0;
    }
  }
  return 0LL;
}
