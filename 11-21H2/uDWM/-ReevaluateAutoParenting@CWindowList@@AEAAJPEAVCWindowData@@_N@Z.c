/*
 * XREFs of ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18000F014 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180023CF0 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800129D8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002F838 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180063470 (-ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CWindowList::ReevaluateAutoParenting(CWindowList *this, struct CWindowData *a2, char a3)
{
  const struct _LIST_ENTRY *v6; // rax
  const struct _LIST_ENTRY *v7; // rbp
  struct CWindowData *v8; // rbx
  __int64 v9; // rax
  char ShouldBeAutoParented; // al
  CWindowList *v11; // rcx
  int inserted; // esi
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int128 v20; // [rsp+50h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp-28h]
  char v22; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *(struct CWindowData **)a2 == a2 )
  {
    if ( (*((_BYTE *)a2 + 670) & 8) == 0 )
      return 0LL;
    v14 = CWindowList::ToggleAutoParenting(this, a2);
    v15 = v14;
    if ( v14 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2224,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  Buffer[1] = 0LL;
  v21 = -1LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  Buffer[0] = *((_QWORD *)a2 + 17);
  v6 = (const struct _LIST_ENTRY *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v6 )
    v7 = v6 + 5;
  else
    v7 = 0LL;
  v8 = a2;
  while ( 1 )
  {
    if ( !a3 )
    {
      if ( (*((_BYTE *)v8 + 664) & 1) == 0 )
        goto LABEL_7;
      v9 = *((_QWORD *)v8 + 55);
      if ( !v9 || !*(_QWORD *)(v9 + 24) )
        goto LABEL_7;
    }
    ShouldBeAutoParented = CWindowData::ShouldBeAutoParented(v8, v7);
    LOBYTE(v11) = (*((_BYTE *)v8 + 670) & 8) != 0;
    if ( ShouldBeAutoParented != (_BYTE)v11 )
      break;
    if ( !a3 )
      return 0LL;
    inserted = CWindowList::InsertIntoVisualTree(this, v8);
    if ( inserted < 0 )
    {
      v16 = 8763LL;
      goto LABEL_24;
    }
LABEL_7:
    v8 = *(struct CWindowData **)v8;
    a3 = 0;
    if ( !v8 || v8 == (struct CWindowData *)v7 || v8 == a2 )
      return 0LL;
  }
  inserted = CWindowList::ToggleAutoParenting(v11, v8);
  if ( inserted >= 0 )
    goto LABEL_7;
  v16 = 8756LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
