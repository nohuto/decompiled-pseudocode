/*
 * XREFs of GetProcessorGroupInformation @ 0x1C0009E70
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CE8C (NVMeControllerFilterResourceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C0009B2C (FreeProcessorGroupInfo.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // eax
  unsigned __int16 v4; // bp
  _QWORD *v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // eax

  FreeProcessorGroupInfo(a1);
  v2 = (unsigned __int16 *)(a1 + 240);
  StorPortExtendedFunction(18LL, a1, a1 + 240);
  v3 = *(unsigned __int16 *)(a1 + 240);
  v4 = 0;
  if ( (_WORD)v3
    && (v5 = (_QWORD *)(a1 + 256), StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v3)), *(_QWORD *)(a1 + 256)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 256), 16 * *v2);
    if ( *v2 )
    {
      do
      {
        v6 = 16LL * v4;
        StorPortExtendedFunction(19LL, a1, v4);
        *(_WORD *)(v6 + *v5) = v4++;
        v7 = *(_DWORD *)(*v5 + v6 + 8) - ((*(_DWORD *)(*v5 + v6 + 8) >> 1) & 0x55555555);
        *(_WORD *)(*v5 + v6 + 2) = (unsigned __int16)((16843009
                                                     * (((v7 & 0x33333333)
                                                       + ((v7 >> 2) & 0x33333333)
                                                       + (((v7 & 0x33333333) + ((v7 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v8 = HIDWORD(*(_QWORD *)(*v5 + v6 + 8)) - (((unsigned int)HIDWORD(*(_QWORD *)(*v5 + v6 + 8)) >> 1) & 0x55555555);
        *(_WORD *)(*v5 + v6 + 2) += (unsigned __int16)((16843009
                                                      * (((v8 & 0x33333333)
                                                        + ((v8 >> 2) & 0x33333333)
                                                        + (((v8 & 0x33333333) + ((v8 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        *(_WORD *)(a1 + 242) += *(_WORD *)(*v5 + v6 + 2);
      }
      while ( v4 < *v2 );
    }
    return 1;
  }
  else
  {
    FreeProcessorGroupInfo(a1);
    return 0;
  }
}
