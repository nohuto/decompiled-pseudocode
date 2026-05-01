/*
 * XREFs of ?ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z @ 0x18074602C
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805DA2A0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterTouchTargeting(
        ImmersiveApplicationLayout *this,
        int a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  int v3; // r8d
  __int64 v4; // r9
  unsigned int v5; // r10d

  v3 = 0;
  v4 = 0LL;
  v5 = 184;
  while ( (_DWORD)this != *(_DWORD *)((char *)&unk_1808B50B0 + v4 + 16) * a2 / 100 )
  {
    ++v3;
    v4 += 24LL;
    if ( v3 )
      return v5;
  }
  return *(unsigned int *)((char *)&unk_1808B50B0 + v4 + 20);
}
