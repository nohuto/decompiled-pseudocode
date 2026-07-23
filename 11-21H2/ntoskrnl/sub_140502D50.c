/*
 * XREFs of sub_140502D50 @ 0x140502D50
 * Callers:
 *     sub_140502C58 @ 0x140502C58 (sub_140502C58.c)
 * Callees:
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 *     sub_140907F90 @ 0x140907F90 (sub_140907F90.c)
 */

__int64 __fastcall sub_140502D50(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  bool v5; // cf
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 *v10; // rdi
  __int64 v11; // rax
  char v12; // al
  bool v13; // zf
  int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 20) == 2;
  v13 = *(_BYTE *)(a1 + 20) == 3;
  *a2 = 1;
  v17 = 0LL;
  v16 = 0LL;
  HIDWORD(v18) = 0;
  v6 = -(int)sub_140907F90(&v16, v3, v5 | (unsigned __int8)v13, 0LL);
  if ( ((32 * ((unsigned __int8)v16 & (unsigned __int8)-(v6 != 0) & 3)) & 0x60) != 0 )
  {
    v7 = 0;
    if ( (_DWORD)v16 == 2 )
      v7 = 16;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0;
  }
  v8 = v7 | ((_DWORD)v17 != 0 ? 0x100 : 0) | (HIDWORD(v17) != 0 ? 0x200 : 0) | (32
                                                                              * ((unsigned __int8)v16 & (unsigned __int8)-(v6 != 0) & 3));
  v9 = v8 | (v8 >> 1) & 8;
  LODWORD(v18) = v9;
  if ( v8 & 8 | (v8 >> 1) & 8 )
  {
    v10 = *(__int64 **)(a1 + 24);
    if ( v10 )
    {
      do
      {
        v11 = *v10;
        if ( !*v10 )
          return v18;
        if ( *(_BYTE *)(v11 + 22) || *(_BYTE *)(v11 + 21) )
        {
          if ( (v9 & 8) == 0 )
            goto LABEL_16;
          v13 = *(_BYTE *)(v11 + 23) == 0;
        }
        else
        {
          v12 = sub_1403DF3B0(*(unsigned int **)v11, *v10);
          if ( (v9 & 8) == 0 )
            goto LABEL_16;
          v13 = (v12 & 8) == 0;
        }
        if ( v13 )
        {
LABEL_16:
          v14 = 0;
          goto LABEL_17;
        }
        v14 = 8;
LABEL_17:
        ++v10;
        v9 = v14 | v9 & 0xFFFFFFF7;
        LODWORD(v18) = v9;
      }
      while ( (v9 & 8) != 0 );
    }
  }
  return v18;
}
