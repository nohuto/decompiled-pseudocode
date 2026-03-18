/*
 * XREFs of ??1VPTPContact@@QEAA@XZ @ 0x1C01F2B90
 * Callers:
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1C01F2D3C (--_GVPTPContact@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall VPTPContact::~VPTPContact(VPTPContact ***this)
{
  VPTPContact **v1; // rdx
  VPTPContact **v2; // rax

  v1 = *this;
  if ( (*this)[1] != (VPTPContact *)this || (v2 = this[1], *v2 != (VPTPContact *)this) )
    __fastfail(3u);
  *v2 = (VPTPContact *)v1;
  v1[1] = (VPTPContact *)v2;
  if ( *this[4] == (VPTPContact *)this[4] )
    InputExtensibilityCallout::CoreMsgSendMessage((__int64)this, 19);
}
