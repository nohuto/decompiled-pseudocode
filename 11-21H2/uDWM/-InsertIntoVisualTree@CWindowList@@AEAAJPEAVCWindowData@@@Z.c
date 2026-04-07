/*
 * XREFs of ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002F838
 * Callers:
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800129D8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CWindowList::InsertIntoVisualTree(CWindowList *this, struct CWindowData *a2)
{
  __int64 v3; // rax
  struct _RTL_GENERIC_TABLE *v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // rsi
  struct CVisual *v7; // rdi
  __int64 v8; // rax
  char *v9; // rax
  _UNKNOWN **v10; // rcx
  __int64 i; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int inserted; // eax
  unsigned int v15; // edi
  struct CVisual *v16; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  _QWORD Buffer[2]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v21; // [rsp+48h] [rbp-59h]
  __int128 v22; // [rsp+58h] [rbp-49h]
  __int128 v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+78h] [rbp-29h]
  char v25; // [rsp+80h] [rbp-21h]
  _QWORD v26[2]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v27; // [rsp+A8h] [rbp+7h]
  __int128 v28; // [rsp+B8h] [rbp+17h]
  __int128 v29; // [rsp+C8h] [rbp+27h]
  __int64 v30; // [rsp+D8h] [rbp+37h]
  char v31; // [rsp+E0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( (*((_BYTE *)a2 + 670) & 8) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 75) + 440LL) + 272LL);
    v7 = *(struct CVisual **)(*(_QWORD *)(v6 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 72) - 1));
  }
  else
  {
    v3 = *((_QWORD *)a2 + 17);
    v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    Buffer[1] = 0LL;
    v24 = -1LL;
    v21 = 0LL;
    v25 = 0;
    v22 = 0LL;
    v23 = 0LL;
    Buffer[0] = v3;
    v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v5 )
      v6 = v5[3];
    else
      v6 = 0LL;
    v7 = 0LL;
    if ( *(struct CWindowData **)a2 != a2 )
    {
      v8 = *((_QWORD *)a2 + 17);
      v26[1] = 0LL;
      v30 = -1LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v26[0] = v8;
      v31 = 0;
      v9 = (char *)RtlLookupElementGenericTable(v4, v26);
      v10 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
      if ( v9 )
        v10 = (_UNKNOWN **)(v9 + 80);
      for ( i = *((_QWORD *)a2 + 1); (_UNKNOWN **)i != v10; i = *(_QWORD *)(i + 8) )
      {
        v12 = *(_QWORD *)(i + 440);
        if ( v12 && *(_QWORD *)(v12 + 24) )
        {
          v7 = *(struct CVisual **)(i + 440);
          if ( (*(_BYTE *)(i + 670) & 8) != 0 )
          {
            i = *(_QWORD *)(i + 600);
            v7 = *(struct CVisual **)(i + 440);
          }
          v13 = *(_QWORD *)(i + 464);
          if ( v13 && *(_QWORD *)(v13 + 24) )
            v7 = *(struct CVisual **)(i + 464);
          break;
        }
      }
    }
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(v6 + 32), *((struct CVisual **)a2 + 55), v7, 1, 1);
  v15 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4B,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted);
    return v15;
  }
  else
  {
    v16 = (struct CVisual *)*((_QWORD *)a2 + 58);
    if ( v16
      && *((_QWORD *)v16 + 3)
      && (v18 = VisualCollection::InsertRelative(
                  (VisualCollection *)(v6 + 32),
                  v16,
                  *((struct CVisual **)a2 + 55),
                  1,
                  1),
          v19 = v18,
          v18 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4F,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v18);
      return v19;
    }
    else
    {
      return 0LL;
    }
  }
}
