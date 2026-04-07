/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800276EC
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z @ 0x18001013C (-RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z.c)
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x1800116CC (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  char v5; // r8
  struct CVisualProxy *v6; // rdx
  CVisualProxy *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int inserted; // eax

  v2 = 0;
  if ( ((*((_BYTE *)this + 92) & 4) != 0) != a2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (4 * a2) | *((_BYTE *)this + 92) & 0xFB;
    v6 = (struct CVisualProxy *)*((_QWORD *)this + 2);
    *((_BYTE *)this + 92) = v5;
    v7 = *(CVisualProxy **)(*(_QWORD *)(v4 + 40) + 16LL);
    if ( (v5 & 4) != 0 )
    {
      inserted = CVisualProxy::InsertChildAt(v7, v6, 0);
      v9 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x182u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3FDu);
      }
    }
    else
    {
      v8 = CVisualProxy::RemoveChild(v7, v6);
      v9 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x19Du);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x401u);
      }
    }
    return v9;
  }
  return v2;
}
