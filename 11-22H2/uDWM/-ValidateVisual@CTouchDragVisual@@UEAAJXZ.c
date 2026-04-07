/*
 * XREFs of ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x18006E470
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18006EC20 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x1800E7CFC (-RemoveAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E7E38 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::ValidateVisual(CTouchDragVisual *this)
{
  DWORD TickCount; // ebp
  int v3; // edi
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0x1000) != 0 )
  {
    if ( *((_DWORD *)this + 88) > 1u )
    {
      TickCount = GetTickCount();
      v3 = *((_DWORD *)this + 88) - 1;
      if ( v3 > 0 )
      {
        v4 = 28LL * v3;
        do
        {
          if ( TickCount - *(_DWORD *)(v4 + *((_QWORD *)this + 41)) < *((_DWORD *)this + 76) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((char *)this + 328, (unsigned int)v3--);
          v4 -= 28LL;
        }
        while ( v3 > 0 );
      }
      v5 = *((_DWORD *)this + 96) - 1;
      if ( v5 >= 0 )
      {
        v6 = 28LL * v5;
        do
        {
          if ( TickCount - *(_DWORD *)(*((_QWORD *)this + 45) + v6) < *((_DWORD *)this + 76) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((char *)this + 360, (unsigned int)v5);
          v6 -= 28LL;
          --v5;
        }
        while ( v5 >= 0 );
      }
      CTouchDragVisual::UpdateVisual(this);
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
  }
  v7 = CTouchVisual::ValidateVisual(this);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x142,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return v8;
}
