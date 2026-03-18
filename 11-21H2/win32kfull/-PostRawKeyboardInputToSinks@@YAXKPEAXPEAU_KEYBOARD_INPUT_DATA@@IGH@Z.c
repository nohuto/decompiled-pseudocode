/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0001838
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00AA5A8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0001B1C (AllocateHidData.c)
 *     FreeHidData @ 0x1C0003270 (FreeHidData.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        unsigned int a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // rbp
  __int64 v10; // rcx
  __int64 *i; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 HidData; // rax
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // [rsp+70h] [rbp-38h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  if ( gpqForeground )
  {
    v6 = *(_QWORD *)(PtiKbdFromQ() + 424);
    v17 = *(_QWORD *)(v10 + 424);
  }
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
        i != &RawInputManagerObject::gHidRequestTable[4];
        i = (__int64 *)*i )
  {
    if ( (*((_DWORD *)i + 25) & 0x40) != 0 )
    {
      v12 = (_QWORD *)i[9];
      if ( v12 )
      {
        v13 = v12[5];
        if ( *(char *)(v13 + 20) >= 0 && *(char *)(v13 + 19) >= 0 && v12[3] == grpdeskRitInput )
        {
          if ( !v6
            || (unsigned __int8)CheckAccess(*(_QWORD *)(v12[2] + 424LL) + 880LL, &v17)
            || (v16 = *(_QWORD *)(i[9] + 16), *(int *)(*(_QWORD *)(v16 + 424) + 12LL) < 0) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(i[9] + 16) + 424LL) != v6 && ((*((_DWORD *)i + 25) & 0x80u) == 0 || !a6) )
            {
              HidData = AllocateHidData((_DWORD)a2, 1, 16, 1, i[9]);
              v15 = (void *)HidData;
              if ( !HidData )
                return;
              *(_WORD *)(HidData + 56) = a3->MakeCode;
              *(_WORD *)(HidData + 58) = a3->Flags;
              *(_WORD *)(HidData + 60) = a3->Reserved;
              *(_DWORD *)(HidData + 64) = a4;
              *(_WORD *)(HidData + 62) = a5;
              *(_DWORD *)(HidData + 68) = a3->ExtraInformation;
              if ( !(unsigned int)PostInputMessage(
                                    *(struct tagQ **)(*(_QWORD *)(i[9] + 16) + 432LL),
                                    (struct tagWND *)i[9],
                                    0xFFu,
                                    *(_QWORD *)HidData,
                                    a1,
                                    0LL,
                                    a3->ExtraInformation,
                                    0,
                                    0LL,
                                    a2,
                                    0LL,
                                    0,
                                    0LL) )
                FreeHidData(v15);
            }
          }
          else
          {
            EtwTraceUIPIInputError(v16, 0LL, gpqForeground, v17, 5);
          }
        }
      }
    }
  }
}
