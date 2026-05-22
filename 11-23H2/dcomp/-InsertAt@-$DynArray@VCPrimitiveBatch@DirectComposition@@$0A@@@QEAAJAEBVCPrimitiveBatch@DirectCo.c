/*
 * XREFs of ?InsertAt@?$DynArray@VCPrimitiveBatch@DirectComposition@@$0A@@@QEAAJAEBVCPrimitiveBatch@DirectComposition@@I@Z @ 0x1800FA55C
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<DirectComposition::CPrimitiveBatch,0>::InsertAt(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD *v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD *v16; // rdx
  _OWORD *v17; // r8
  _OWORD *v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *(_DWORD *)(a1 + 24) )
  {
    v5 = -2147024809;
    v6 = 459;
    v7 = -2147024809;
LABEL_5:
    DoStackCaptureDirect(v7, v6);
    return v5;
  }
  v19 = (_OWORD *)a2;
  v8 = DynArrayImpl<0>::Grow(a1, 0x50u, 1, 0, (unsigned __int64 *)&v19);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = 469;
    v7 = v8;
    goto LABEL_5;
  }
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 24) = v9 + 1;
  if ( (unsigned int)v9 > (unsigned int)v4 )
  {
    v11 = (_OWORD *)(v10 + 80 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      v12 = *(_OWORD *)(v10 + 80 * v9 + 16);
      *v11 = *(_OWORD *)(v10 + 80 * v9);
      v13 = *(_OWORD *)(v10 + 80 * v9 + 32);
      v11[1] = v12;
      v14 = *(_OWORD *)(v10 + 80 * v9 + 48);
      v11[2] = v13;
      v15 = *(_OWORD *)(v10 + 80 * v9 + 64);
      v11[3] = v14;
      v11[4] = v15;
      v11 -= 5;
    }
    while ( (unsigned int)v9 > (unsigned int)v4 );
  }
  v16 = v19;
  v17 = (_OWORD *)(v10 + 80 * v4);
  if ( v19 >= v17 && (unsigned __int64)v19 < 80 * (unsigned __int64)*(unsigned int *)(a1 + 24) + v10 - 80 )
    v16 = v19 + 5;
  *v17 = *v16;
  v17[1] = v16[1];
  v17[2] = v16[2];
  v17[3] = v16[3];
  v17[4] = v16[4];
  return v5;
}
