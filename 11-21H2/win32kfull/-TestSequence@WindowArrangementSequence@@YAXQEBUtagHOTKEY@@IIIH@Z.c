/*
 * XREFs of ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00F67B8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C023625C (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 */

void __fastcall WindowArrangementSequence::TestSequence(
        WindowArrangementSequence *this,
        const struct tagHOTKEY *const a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  int v5; // eax
  bool v6; // zf
  __int64 v7; // rcx

  if ( this )
  {
    if ( (((unsigned __int16)a2 << 16) | a4) == qword_1C0335C80 )
      return;
    v5 = *(_QWORD *)this == gptiRit && (unsigned int)(*((_DWORD *)this + 8) - 16) <= 8;
    if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress == v5 )
      return;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = v5;
    v6 = v5 == 0;
    goto LABEL_19;
  }
  if ( a5 )
  {
    if ( !a3 )
    {
      if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
        return;
      goto LABEL_20;
    }
    if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
      return;
    v6 = (a3 & 0xE) == 0;
LABEL_19:
    if ( !v6 )
      return;
LABEL_20:
    v7 = 1LL;
    goto LABEL_21;
  }
  if ( a3 == 8 && WindowArrangementSequence::fWindowArrangementSequenceInProgress )
  {
    v7 = 2LL;
LABEL_21:
    NotifyShell::ArrangementHotKey(v7, 8LL);
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
}
