/*
 * XREFs of ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x1800C425C
 * Callers:
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x1800C4868 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_IsImmersiveAppOnTaskbar(CLivePreview *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // ecx

  if ( ((*((_DWORD *)this + 142) - 3) & 0xFFFFFFFD) == 0 )
  {
    v1 = *((_QWORD *)this + 66);
    v2 = *((_QWORD *)this + 67);
    while ( v1 != v2 )
    {
      v3 = *(_DWORD *)(*(_QWORD *)v1 + 132LL);
      if ( ((v3 - 6) & 0xFFFFFFF9) == 0 && v3 != 12 )
        return 1;
      v1 += 8LL;
    }
  }
  return 0;
}
