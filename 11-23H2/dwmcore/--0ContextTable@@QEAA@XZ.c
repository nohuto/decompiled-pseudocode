/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800FB654
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003E30 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_1803E6508) = 0;
  Block = 0LL;
  RtlInitializeSRWLock(&unk_1803E6510);
  return (ContextTable *)&Block;
}
