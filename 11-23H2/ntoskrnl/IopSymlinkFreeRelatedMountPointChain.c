/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1407D96F8
 * Callers:
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopSymlinkCleanupECP @ 0x1407D96E0 (IopSymlinkCleanupECP.c)
 *     IopSymlinkRememberJunction @ 0x14087F658 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
