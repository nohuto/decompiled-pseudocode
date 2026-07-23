/*
 * XREFs of sub_1406B539C @ 0x1406B539C
 * Callers:
 *     sub_1406B52CC @ 0x1406B52CC (sub_1406B52CC.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1409C6730 (SeAdjustAccessStateForTrustLabel.c)
 * Callees:
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FBE30 @ 0x1402FBE30 (sub_1402FBE30.c)
 */

__int64 __fastcall sub_1406B539C(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v7; // ebp
  int v8; // r12d
  __int64 result; // rax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  v23 = 0;
  v7 = -1;
  v8 = -1;
  result = *(unsigned int *)(a4 + 12);
  if ( (result & 6) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 68);
    if ( v10 == 1 )
    {
      v11 = 17957001;
      v12 = 18809110;
    }
    else if ( v10 == 256 )
    {
      v11 = 16908313;
      v12 = 17760262;
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
    v13 = *(_DWORD **)(a4 + 32);
    if ( !v13 )
      v13 = *(_DWORD **)(a4 + 48);
    sub_1402FBC90(a2, 0LL, v13, 1, (int *)&v22);
    if ( BYTE4(v22) && a3 )
      v7 = v22;
    v14 = sub_1402FBE30(a2);
    v15 = v14;
    if ( v14 )
    {
      v19 = v14 + 8;
      if ( v14 == -8 || (v20 = sub_140232910((__int64 *)(a4 + 32)), sub_1402F8A20(v20, v19, &v23), !v23) )
        v8 = *(_DWORD *)(v15 + 4);
    }
    v16 = ~(v7 & v8);
    v17 = v16 & v11;
    v18 = v16 & v12;
    result = 0xFFFFFFFFLL;
    if ( v8 != -1 || v7 != -1 )
    {
      v21 = *(_DWORD *)(a4 + 12);
      result = *(unsigned int *)(a4 + 20);
      if ( (v21 & 2) != 0 )
        result = ~v17 & (unsigned int)result;
      if ( (v21 & 4) != 0 )
        result = ~v18 & (unsigned int)result;
      *(_DWORD *)(a4 + 20) = result;
    }
  }
  return result;
}
