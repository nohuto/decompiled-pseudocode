/*
 * XREFs of HalpInterruptPerformDirectedEndOfInterrupt @ 0x14050A598
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1402523CC (HalpInterruptFindLinesForGsiRange.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpInterruptPerformDirectedEndOfInterrupt(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR *v3; // rax

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 108) )
    {
      v1 = *(_DWORD **)(a1 + 160);
      if ( v1 )
      {
        if ( !v1[2] )
        {
          LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v1[16], v1[16] + 1);
          if ( LinesForGsiRange )
          {
            v3 = HalpInterruptLookupController(LinesForGsiRange[4]);
            if ( (*((_DWORD *)v3 + 57) & 0x400) != 0 )
              ((void (__fastcall *)(ULONG_PTR, _QWORD, _QWORD))v3[25])(v3[2], (unsigned int)v1[3], v1[12] & 0x3FFFFFFF);
          }
        }
      }
    }
  }
}
