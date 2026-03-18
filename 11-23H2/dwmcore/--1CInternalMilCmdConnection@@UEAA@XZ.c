/*
 * XREFs of ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x1801B5318
 * Callers:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x1801B30E0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180098A80 (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1801CDE6C (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CInternalMilCmdConnection::~CInternalMilCmdConnection(union _SLIST_HEADER *this)
{
  this->Alignment = (ULONGLONG)&CInternalMilCmdConnection::`vftable';
  CInternalMilCmdConnection::FreeBatchPool(this);
  CChannelTable::~CChannelTable((CChannelTable *)((char *)&this[3].HeaderX64 + 8));
  CConnection::~CConnection((CConnection *)this);
}
