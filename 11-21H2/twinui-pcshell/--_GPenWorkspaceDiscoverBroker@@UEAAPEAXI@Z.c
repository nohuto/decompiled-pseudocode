/*
 * XREFs of ??_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z @ 0x18017CE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1PenWorkspaceDiscoverBroker@@UEAA@XZ @ 0x18017CECC (--1PenWorkspaceDiscoverBroker@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

PenWorkspaceDiscoverBroker *__fastcall PenWorkspaceDiscoverBroker::`scalar deleting destructor'(
        PenWorkspaceDiscoverBroker *this,
        char a2)
{
  PenWorkspaceDiscoverBroker::~PenWorkspaceDiscoverBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
