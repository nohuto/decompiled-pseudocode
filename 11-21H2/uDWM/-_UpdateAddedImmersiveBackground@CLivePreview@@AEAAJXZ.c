/*
 * XREFs of ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x1800C4C9C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C2D14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x1800C4868 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 */

__int64 __fastcall CLivePreview::_UpdateAddedImmersiveBackground(CLivePreview *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rcx
  char v8; // al

  v2 = 0;
  if ( CLivePreview::_ShouldAddImmersiveChrome(this) )
  {
    v3 = *((_QWORD *)this + 66);
    v4 = *((_QWORD *)this + 67);
    if ( v3 == v4 )
    {
      v5 = 0;
    }
    else
    {
      v8 = 1;
      do
      {
        v5 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v3 + 132LL) != 1 )
          v5 = v8;
        v3 += 8LL;
        v8 = v5;
      }
      while ( v3 != v4 );
    }
    if ( *((_DWORD *)this + 116) )
    {
      do
      {
        v6 = 32LL * v2;
        *(_BYTE *)(*((_QWORD *)this + 55) + v6 + 24) = v5;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + *((_QWORD *)this + 55)) + 104LL))(*(_QWORD *)(v6 + *((_QWORD *)this + 55)));
        ++v2;
      }
      while ( v2 < *((_DWORD *)this + 116) );
    }
  }
  return 0LL;
}
