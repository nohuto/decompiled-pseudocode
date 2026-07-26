/*
 * XREFs of ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C007289C
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0004680 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013730 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1C001405C (-ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z.c)
 *     datapathVerifierReportProblem @ 0x1C0072550 (datapathVerifierReportProblem.c)
 *     verifySingleRxNbl @ 0x1C0072F8C (verifySingleRxNbl.c)
 */

void __fastcall ndisNblVerifyRxIndication(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        int a3,
        unsigned int a4,
        const struct _NDIS_OBJECT_HEADER *BugCheckParameter3,
        enum _NDIS_MEDIUM a6)
{
  const struct _NDIS_OBJECT_HEADER *v6; // rbx
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // rdi
  KIRQL CurrentIrql; // al
  ULONG_PTR v10; // r12
  int v11; // eax
  __int16 v12; // r13
  __int16 v13; // r14
  __int16 v14; // r15
  __int16 v15; // bp
  __int16 v16; // si
  __int16 v17; // ax
  __int16 v18; // ax
  char v19; // [rsp+20h] [rbp-58h]
  __int16 v20; // [rsp+22h] [rbp-56h]
  unsigned __int16 v21[42]; // [rsp+24h] [rbp-54h] BYREF
  __int16 v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v6 = BugCheckParameter3;
  v7 = BugCheckParameter4;
  v8 = a4;
  if ( a2 > 0x1000000 )
    datapathVerifierReportProblem(0x10uLL, (ULONG_PTR)BugCheckParameter3, a2);
  if ( (v8 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    datapathVerifierReportProblem(0x20uLL, (ULONG_PTR)v6, CurrentIrql);
  }
  if ( (v8 & 0xFFFF00FC) != 0 )
    datapathVerifierReportProblem(1uLL, (ULONG_PTR)v6, v8);
  v10 = v7;
  *(_DWORD *)v21 = 0;
  v11 = 0;
  v19 = 0;
  v12 = 0;
  v20 = 0;
  v13 = 0;
  v23 = 0;
  v14 = 0;
  v15 = 0;
  if ( v7 )
  {
    LODWORD(v8) = 0;
    v16 = 0;
    do
    {
      LODWORD(v8) = v8 + 1;
      verifySingleRxNbl(v10, v6);
      v21[0] = 0;
      LOBYTE(v23) = 0;
      if ( ndisParseReceivedNBL(a6, (const struct _NET_BUFFER_LIST *)v10, v21, (unsigned __int8 *)&v23) && (_BYTE)v23 )
      {
        v12 |= v21[0];
        v13 |= ~v21[0];
      }
      else
      {
        v19 = 1;
      }
      v17 = (*(_DWORD *)(v10 + 176) >> 4) & 0xFFF;
      v20 |= v17;
      v14 |= ~v17;
      v18 = *(_WORD *)(v10 + 258);
      v10 = *(_QWORD *)v10;
      v16 |= v18;
      v15 |= ~v18;
    }
    while ( v10 );
    *(_DWORD *)v21 = v8;
    LOWORD(v8) = v25;
    v11 = *(_DWORD *)v21;
    v23 = v16;
    v7 = BugCheckParameter4;
  }
  if ( v11 != v24 )
    datapathVerifierReportProblem(4uLL, (ULONG_PTR)v6, v7);
  if ( (v8 & 0x100) != 0 && (v12 != ~v13 || v19) )
    datapathVerifierReportProblem(0x21uLL, (ULONG_PTR)v6, v7);
  if ( (v8 & 0x200) != 0 && v20 != ~v14 )
    datapathVerifierReportProblem(0x22uLL, (ULONG_PTR)v6, v7);
  if ( (v8 & 0x800) != 0 && v23 != ~v15 )
    datapathVerifierReportProblem(0x23uLL, (ULONG_PTR)v6, v7);
}
