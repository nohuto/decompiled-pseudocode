/*
 * XREFs of sub_140A5B2F8 @ 0x140A5B2F8
 * Callers:
 *     sub_140A5B290 @ 0x140A5B290 (sub_140A5B290.c)
 * Callees:
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

int sub_140A5B2F8()
{
  KPCR *v0; // rax
  __int64 v1; // rbx
  KPCR *Pcr; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  ULONG_PTR v5; // rdi
  void *v6; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  LODWORD(v0) = KeGetCurrentProcessorNumberEx(&ProcNumber);
  v1 = (unsigned int)v0;
  if ( !(_DWORD)v0 && !qword_140C549A8 )
  {
    v5 = 192 * (unsigned int)sub_1403B3BA0();
    v6 = (void *)sub_1403B1F04(v5, v5);
    qword_140C549A8 = (__int64)v6;
    if ( !v6 )
      KeBugCheckEx(0xACu, v5, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x222uLL);
    LODWORD(v0) = (unsigned int)memset(v6, 0, (unsigned int)v5);
  }
  Pcr = KeGetPcr();
  if ( !byte_140C4C450 )
  {
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      v3 = qword_140C549A8 + 192 * v1;
      *(_QWORD *)&Pcr->HalReserved[6] = v3;
      *(_QWORD *)(v3 + 184) = 0LL;
      *(_DWORD *)(v3 + 172) = v1;
    }
    v0 = KeGetPcr();
    v4 = *(_QWORD *)&v0->HalReserved[6];
    if ( !*(_BYTE *)(v4 + 160) )
    {
      KeInitializeDpc((PRKDPC)(v4 + 48), (PKDEFERRED_ROUTINE)sub_1403990C0, *(PVOID *)&v0->HalReserved[6]);
      LODWORD(v0) = KeSetTargetProcessorDpcEx((PKDPC)(v4 + 48), &ProcNumber);
      *(_BYTE *)(v4 + 160) = 1;
    }
  }
  return (int)v0;
}
