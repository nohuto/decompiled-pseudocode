/*
 * XREFs of SeAdjustAccessStateForAccessConstraints @ 0x1407B4BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FBE30 @ 0x1402FBE30 (sub_1402FBE30.c)
 */

__int64 __fastcall SeAdjustAccessStateForAccessConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  __int64 result; // rax
  int v8; // ebp
  int v9; // eax
  int v10; // r15d
  _DWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // ebx
  int v15; // r15d
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // ecx
  char v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v19 = 0;
  v20 = 0LL;
  v4 = -1;
  result = *(unsigned int *)(a3 + 12);
  v8 = -1;
  if ( (result & 6) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 68);
    if ( v9 == 1 )
    {
      v3 = 17957001;
      v10 = 18809110;
    }
    else if ( v9 == 256 )
    {
      v3 = 16908313;
      v10 = 17760262;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_DWORD **)(a3 + 32);
    if ( !v11 )
      v11 = *(_DWORD **)(a3 + 48);
    sub_1402FBC90(a2, 0LL, v11, 1, (int *)&v20);
    if ( BYTE4(v20) )
      v4 = v20;
    v12 = sub_1402FBE30(a2);
    v13 = v12;
    if ( v12 )
    {
      v16 = v12 + 8;
      if ( v12 == -8 || (v17 = sub_140232910((__int64 *)(a3 + 32)), sub_1402F8A20(v17, v16, &v19), !v19) )
        v8 = *(_DWORD *)(v13 + 4);
    }
    result = ~(v4 & (unsigned int)v8);
    v14 = result & v3;
    v15 = result & v10;
    if ( v8 != -1 || v4 != -1 )
    {
      v18 = *(_DWORD *)(a3 + 12);
      result = *(unsigned int *)(a3 + 20);
      if ( (v18 & 2) != 0 )
        result = ~v14 & (unsigned int)result;
      if ( (v18 & 4) != 0 )
        result = ~v15 & (unsigned int)result;
      *(_DWORD *)(a3 + 20) = result;
    }
  }
  return result;
}
