/*
 * XREFs of ?ReleaseAllReferences@AllocatedStorage@CSparseStorage@@QEAAXXZ @ 0x18003CE98
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18007E120 (-Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSparseStorage::AllocatedStorage::ReleaseAllReferences(CSparseStorage::AllocatedStorage *this)
{
  char *v2; // rdi
  int v3; // ecx
  int v4; // edx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = (char *)this + 12;
    if ( (char *)this + 16 <= (char *)this + *(unsigned int *)this )
    {
      do
      {
        v3 = HIBYTE(*(_DWORD *)v2) & 0x7F;
        if ( !v3 )
          break;
        v4 = *(_DWORD *)v2;
        if ( (__ROR4__(1, v3) & *((_DWORD *)this + 1)) != 0 && v4 < 0 )
        {
          (*(void (__fastcall **)(_QWORD))(_mm_srli_si128(*(__m128i *)(v2 + 4), 8).m128i_u64[0] + 8))(*(_QWORD *)(v2 + 4));
          *(_DWORD *)v2 &= ~0x80000000;
          v4 = *(_DWORD *)v2;
        }
        v2 += (v4 & 0xFFFFFF) + 4;
      }
      while ( v2 + 4 <= (char *)this + *(unsigned int *)this );
    }
  }
  *((_DWORD *)this + 1) = 0;
}
