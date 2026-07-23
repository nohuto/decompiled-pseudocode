/*
 * XREFs of sub_14075D0B0 @ 0x14075D0B0
 * Callers:
 *     sub_14075EE80 @ 0x14075EE80 (sub_14075EE80.c)
 * Callees:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14075D7DC @ 0x14075D7DC (sub_14075D7DC.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 */

__int64 __fastcall sub_14075D0B0(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int *v7; // rdi
  int v9; // ebp
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v6 = a3;
  v7 = a2;
  v16[0] = 0LL;
  v9 = 0;
  v17 = 0LL;
  if ( *a2 > a3 )
  {
LABEL_17:
    v11 = -1073741811;
  }
  else
  {
    while ( 1 )
    {
      v11 = sub_14075D7DC(v7, v6, v7[2], v16);
      if ( v11 < 0 )
        break;
      v11 = sub_14075D7DC(v7, v10, v7[3], &v17);
      if ( v11 < 0 )
        break;
      if ( 32 * v7[4] + 24 > v6 )
        goto LABEL_17;
      if ( a4 )
        v12 = sub_1409DE80C(a1, v7, v6);
      else
        v12 = sub_14075D1B4(a1, (_DWORD)v7, v6, v16[0], v17);
      v11 = v12;
      v13 = v9 + 1;
      if ( v11 < 0 )
        v13 = v9;
      v9 = v13;
      v14 = v7[1];
      if ( !(_DWORD)v14 )
        break;
      if ( v6 < (unsigned int)v14 )
        break;
      v6 -= v14;
      if ( v6 < 0x18 )
        break;
      v7 = (unsigned int *)((char *)v7 + v14);
      if ( (unsigned int *)(((unsigned __int64)v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL) != v7 )
        break;
      if ( *v7 > v6 )
        goto LABEL_17;
    }
  }
  if ( !v9 )
    return (unsigned int)v11;
  return v4;
}
