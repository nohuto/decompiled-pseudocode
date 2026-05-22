/*
 * XREFs of ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801AD62C
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1801AD890 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AD40C (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AD530 (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AD6E4 (-OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x1801ADAB4 (-OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnGestureUpdate(
        EdgyProcessorTarget *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a1 + 8) )
    return 0LL;
  if ( (a2 & 0x10) != 0 )
  {
    v5 = EdgyProcessorTarget::OnHorizontalDrag(a1);
    if ( v5 < 0 )
    {
      v6 = 657LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else if ( (a2 & 0x20) != 0 )
  {
    v5 = EdgyProcessorTarget::OnVerticalDrag(a1);
    if ( v5 < 0 )
    {
      v6 = 661LL;
      goto LABEL_5;
    }
  }
  else if ( (a2 & 0x100) != 0 )
  {
    v5 = EdgyProcessorTarget::OnFlick(a1);
    if ( v5 < 0 )
    {
      v6 = 665LL;
      goto LABEL_5;
    }
  }
  if ( *((_DWORD *)a1 + 8) != 2 )
    return 0LL;
  v8 = EdgyProcessorTarget::OnEdgeGestureDetected(a1, a2, a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A2,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
