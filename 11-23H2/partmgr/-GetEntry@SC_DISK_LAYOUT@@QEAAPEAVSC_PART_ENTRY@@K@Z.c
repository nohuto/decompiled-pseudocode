/*
 * XREFs of ?GetEntry@SC_DISK_LAYOUT@@QEAAPEAVSC_PART_ENTRY@@K@Z @ 0x1C0010BE0
 * Callers:
 *     ?PmCheckServicePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAVSC_DISK_LAYOUT@@@Z @ 0x1C0026AF8 (-PmCheckServicePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

struct SC_PART_ENTRY *__fastcall SC_DISK_LAYOUT::GetEntry(SC_DISK_LAYOUT *this, unsigned int a2)
{
  return (SC_DISK_LAYOUT *)((char *)this + 144 * a2 + 48);
}
