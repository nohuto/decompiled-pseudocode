/*
 * XREFs of ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800E7280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x1800E6FB8 (-RemoveAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E70F8 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x1800E91B0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::ValidateVisual(CTouchDragVisual *this)
{
  int v1; // eax
  DWORD TickCount; // ebp
  signed int v4; // edi
  __int64 v5; // rsi
  signed int v6; // edi
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( *((_DWORD *)this + 88) > 1u )
    {
      TickCount = GetTickCount();
      v4 = *((_DWORD *)this + 88) - 1;
      if ( v4 > 0 )
      {
        v5 = 28LL * v4;
        do
        {
          if ( TickCount - *(_DWORD *)(v5 + *((_QWORD *)this + 41)) < *((_DWORD *)this + 76) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 41, v4--);
          v5 -= 28LL;
        }
        while ( v4 > 0 );
      }
      v6 = *((_DWORD *)this + 96) - 1;
      if ( v6 >= 0 )
      {
        v7 = 28LL * v6;
        do
        {
          if ( TickCount - *(_DWORD *)(*((_QWORD *)this + 45) + v7) < *((_DWORD *)this + 76) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 45, v6);
          v7 -= 28LL;
          --v6;
        }
        while ( v6 >= 0 );
      }
      CTouchDragVisual::UpdateVisual(this);
      v1 = *((_DWORD *)this + 22);
    }
    *((_DWORD *)this + 22) = v1 & 0xFFFFEFFF;
  }
  v8 = CTouchVisual::ValidateVisual(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x148,
    (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
