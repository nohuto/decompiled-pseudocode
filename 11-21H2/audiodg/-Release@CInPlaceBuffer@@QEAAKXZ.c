/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14002D2BC
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140015E90 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1400590A4 (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140059218 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInPlaceBuffer@@QEAA@XZ @ 0x140008794 (--1CInPlaceBuffer@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CInPlaceBuffer::Release(CInPlaceBuffer *this)
{
  bool v1; // zf
  unsigned int v3; // edi

  v1 = (*((_DWORD *)this + 4))-- == 1;
  v3 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    CInPlaceBuffer::~CInPlaceBuffer(this);
    operator delete(this);
  }
  return v3;
}
