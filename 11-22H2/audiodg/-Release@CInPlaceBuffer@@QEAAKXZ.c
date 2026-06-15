/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025024
 * Callers:
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000D610 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14001118C (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14005C084 (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1CInPlaceBuffer@@QEAA@XZ @ 0x140025064 (--1CInPlaceBuffer@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
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
