/*
 * XREFs of ?InsertAt@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJAEBUDwmAnimationTimeEventData@@I@Z @ 0x1800E8D08
 * Callers:
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<DwmAnimationTimeEventData,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  _OWORD *v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  _OWORD *v15; // [rsp+40h] [rbp+8h] BYREF

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
  v15 = (_OWORD *)a2;
  v8 = DynArrayImpl<0>::Grow(a1, 0x10u, 1, 0, (unsigned __int64 *)&v15);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = 469;
    v7 = v8;
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 24) = v9 + 1;
  if ( v9 > (unsigned int)v4 )
  {
    v11 = (_OWORD *)(v10 + 16LL * v9);
    do
      *v11-- = *(_OWORD *)(v10 + 16LL * --v9);
    while ( v9 > (unsigned int)v4 );
  }
  v12 = v15;
  v13 = (_OWORD *)(v10 + 16 * v4);
  if ( v15 >= v13 && (unsigned __int64)v15 < v10 + 16 * (unsigned __int64)*(unsigned int *)(a1 + 24) - 16 )
    v12 = v15 + 1;
  *v13 = *v12;
  return v5;
}
