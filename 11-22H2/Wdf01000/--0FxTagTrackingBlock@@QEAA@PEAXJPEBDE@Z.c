/*
 * XREFs of ??0FxTagTrackingBlock@@QEAA@PEAXJPEBDE@Z @ 0x1C0045F3C
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTagTrackingBlock::FxTagTrackingBlock(
        FxTagTrackingBlock *this,
        void *Tag,
        int Line,
        const char *File,
        unsigned __int8 Initial)
{
  int v5; // eax

  this->Tag = Tag;
  this->Next = 0LL;
  this->StackFrames = 0LL;
  this->File = File;
  this->Line = Line;
  this->TimeLocked.QuadPart = MEMORY[0xFFFFF78000000320];
  if ( !Initial && !File )
  {
    v5 = this->Line;
    if ( !Line )
      v5 = 1;
    this->Line = v5;
  }
}
