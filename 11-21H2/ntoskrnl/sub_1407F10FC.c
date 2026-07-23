/*
 * XREFs of sub_1407F10FC @ 0x1407F10FC
 * Callers:
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 * Callees:
 *     sub_1407F1240 @ 0x1407F1240 (sub_1407F1240.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F10FC(__int64 a1, __int64 *a2)
{
  int v3; // edi
  __int64 v4; // rax
  __int128 v5; // xmm6
  unsigned int v6; // r9d
  char v7; // si
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 Pool2; // rax
  __int64 v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  v16 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *(_QWORD *)(a1 + 296);
  v18 = 0;
  v5 = *(_OWORD *)(v4 + 80);
  v6 = sub_1407F1240(a1, (unsigned int)&v17, (unsigned int)&v16, (unsigned int)&v18, 0LL);
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    v7 = 1;
  }
  else
  {
    if ( v6 != -1073741275 )
      return v6;
    v7 = 0;
  }
  v8 = v18;
  v9 = 1LL;
  v10 = 0xFFFFFFFFLL;
  if ( v18 > 1 )
    v9 = v18;
  v11 = 16 * v9;
  if ( v11 > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v12 = v11 + 48;
    if ( (int)v11 + 48 >= (unsigned int)v11 )
      v10 = v12;
    v6 = v12 < (unsigned int)v11 ? 0xC0000095 : 0;
    if ( v12 >= (unsigned int)v11 )
    {
      Pool2 = ExAllocatePool2(256LL, v10, 1414616912LL);
      v14 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 44) = v8;
        *(_OWORD *)(Pool2 + 8) = v5;
        if ( v7 )
        {
          *(_DWORD *)Pool2 |= 1u;
          sub_1407F1240(v3, Pool2 + 40, Pool2 + 24, Pool2 + 44, Pool2 + 48);
        }
        *a2 = v14;
        return 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v6;
}
