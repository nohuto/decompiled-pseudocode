/*
 * XREFs of sub_140459B00 @ 0x140459B00
 * Callers:
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     sub_14054B3A4 @ 0x14054B3A4 (sub_14054B3A4.c)
 */

char __fastcall sub_140459B00(__int64 a1)
{
  int v1; // eax
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v3; // rbx
  unsigned int *v4; // rcx
  __int64 v5; // rcx

  LOBYTE(v1) = dword_140D0688C;
  if ( (dword_140D0688C & 2) != 0 )
  {
    LODWORD(a1) = HIDWORD(KeGetPcr()[1].LockArray);
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
    v3 = *((_QWORD *)sub_14039E528(LpIndexFromProcessorIndex) + 5);
    _m_prefetchw((const void *)(v3 + 1024));
    v1 = *(_DWORD *)(v3 + 1024);
    if ( v1 )
    {
      v4 = (unsigned int *)(v3 + 1040);
      if ( *(_DWORD *)(v3 + 1024) == -2147483612 )
      {
        sub_14054B3A4(v4);
      }
      else
      {
        v5 = qword_140D01AF8 + 104LL * *v4;
        *(_DWORD *)(v5 + 4) = 2;
        sub_140345190(v5 + 8, 0LL, 0LL, 0LL, 0);
      }
      *(_DWORD *)(v3 + 1024) = 0;
      LOBYTE(v1) = *(_BYTE *)(v3 + 1029);
      if ( (v1 & 1) != 0 )
      {
        LOBYTE(v1) = 0;
        __writemsr(0x40000084u, 0LL);
      }
    }
  }
  return v1;
}
