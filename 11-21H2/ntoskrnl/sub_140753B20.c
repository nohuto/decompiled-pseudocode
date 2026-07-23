/*
 * XREFs of sub_140753B20 @ 0x140753B20
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     sub_14096CFE0 @ 0x14096CFE0 (sub_14096CFE0.c)
 * Callees:
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14031077C @ 0x14031077C (sub_14031077C.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14032E910 @ 0x14032E910 (sub_14032E910.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 */

__int64 __fastcall sub_140753B20(unsigned __int64 a1, __int128 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  __int64 v16; // r10
  unsigned int v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+90h] [rbp+8h]

  v17 = 0;
  v4 = 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 2 )
    {
      v18 = *a2;
      v8 = *((_QWORD *)&v18 + 1);
      v9 = v18;
      do
      {
        v10 = v9;
        v11 = sub_14030E7C0(v9, 0, (int *)&v17);
        v12 = v11;
        if ( !v11 )
          return v17;
        v19 = 0;
        v13 = *(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32);
        if ( ((v9 + v8 - 1) | 0xFFF) >> 12 > v13 )
        {
          v19 = 1;
          v16 = (v13 << 12) | 0xFFF;
          v8 = v9 - v16 + v8 - 1;
          v9 = v16 + 1;
        }
        if ( !sub_14032E910(v11) || (unsigned int)sub_14031077C(v12) )
        {
          v4 = 1073741849;
        }
        else if ( a3 == 1 )
        {
          sub_14033E5D0(v10, v14, v12, 2, a4);
        }
        else if ( (*(_DWORD *)(v12 + 48) & 0xA200000) == 0x8200000 )
        {
          v4 = -1073741637;
        }
        else
        {
          sub_14028E8E0(v10, v14, 0LL, 2);
        }
        sub_14032E700((char *)v12);
      }
      while ( v19 );
      ++v5;
      ++a2;
      if ( v5 < a1 )
        continue;
      break;
    }
  }
  return v4;
}
