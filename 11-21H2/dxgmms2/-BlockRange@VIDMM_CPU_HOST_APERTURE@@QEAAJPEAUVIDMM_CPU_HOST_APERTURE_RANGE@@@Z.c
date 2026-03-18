/*
 * XREFs of ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0033214
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B08B0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::BlockRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  int v4; // r9d
  __int64 result; // rax

  v2 = *((unsigned int *)a2 + 1);
  v3 = *((_QWORD *)this + 5);
  v4 = *((_DWORD *)a2 + 1) - *(_DWORD *)a2 + 1;
  if ( *(_DWORD *)a2 == *((_DWORD *)this + 16) )
  {
    *((_DWORD *)this + 16) = *(_DWORD *)(v3 + 4 * v2);
  }
  else
  {
    *(_DWORD *)(v3 + 4LL * (unsigned int)(*(_DWORD *)a2 - 1)) = *(_DWORD *)(v3 + 4 * v2);
    v3 = *((_QWORD *)this + 5);
  }
  *(_DWORD *)(v3 + 4LL * *((unsigned int *)a2 + 1)) = v4;
  result = 0LL;
  *((_DWORD *)this + 15) -= v4;
  *((_DWORD *)this + 17) = v4;
  return result;
}
