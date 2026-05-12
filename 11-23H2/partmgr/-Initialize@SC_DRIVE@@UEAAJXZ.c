/*
 * XREFs of ?Initialize@SC_DRIVE@@UEAAJXZ @ 0x1C0010F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1C00094B0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 */

__int64 __fastcall SC_DRIVE::Initialize(SC_DRIVE *this)
{
  return SC_DISK::Initialize(this);
}
