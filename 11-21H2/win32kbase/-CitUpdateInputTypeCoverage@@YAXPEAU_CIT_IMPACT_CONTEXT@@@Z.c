/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A5474
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00A42A4 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int128 v2; // xmm1

  if ( *((_WORD *)a1 + 149) != *((_WORD *)a1 + 133) && (unsigned int)dword_1C028F154 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F148);
  if ( *((_WORD *)a1 + 150) != *((_WORD *)a1 + 134) && (unsigned int)dword_1C028F184 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F178);
  if ( *((_WORD *)a1 + 152) != *((_WORD *)a1 + 136) && (unsigned int)dword_1C028F16C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F160);
  if ( *((_WORD *)a1 + 154) != *((_WORD *)a1 + 138) && (unsigned int)dword_1C028F10C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F100);
  if ( *((_WORD *)a1 + 155) != *((_WORD *)a1 + 139) && (unsigned int)dword_1C028F0F4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F0E8);
  if ( *((_WORD *)a1 + 157) != *((_WORD *)a1 + 141) && (unsigned int)dword_1C028F13C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F130);
  if ( *((_WORD *)a1 + 160) != *((_WORD *)a1 + 144) && (unsigned int)dword_1C028F124 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F118);
  if ( *((_WORD *)a1 + 161) != *((_WORD *)a1 + 145) && (unsigned int)dword_1C028F0C4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F0B8);
  if ( *((_WORD *)a1 + 151) != *((_WORD *)a1 + 135) && (unsigned int)dword_1C028D81C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028D810);
  if ( *((_WORD *)a1 + 153) != *((_WORD *)a1 + 137) && (unsigned int)dword_1C028D834 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028D828);
  if ( *((_WORD *)a1 + 156) != *((_WORD *)a1 + 140) && (unsigned int)dword_1C028F0DC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F0D0);
  if ( *((_WORD *)a1 + 158) != *((_WORD *)a1 + 142) && (unsigned int)dword_1C028F094 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F088);
  if ( *((_WORD *)a1 + 162) != *((_WORD *)a1 + 146) && (unsigned int)dword_1C028F07C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F070);
  if ( *((_WORD *)a1 + 159) != *((_WORD *)a1 + 143) && (unsigned int)dword_1C028F0AC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C028F0A0);
  v2 = *(_OWORD *)((char *)a1 + 280);
  *(_OWORD *)((char *)a1 + 296) = *(_OWORD *)((char *)a1 + 264);
  *(_OWORD *)((char *)a1 + 312) = v2;
}
