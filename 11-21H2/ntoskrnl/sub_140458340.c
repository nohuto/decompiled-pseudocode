/*
 * XREFs of sub_140458340 @ 0x140458340
 * Callers:
 *     <none>
 * Callees:
 *     IoMapTransfer @ 0x140390AC0 (IoMapTransfer.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140458340(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 *v4; // rsi
  int *v5; // r12
  PHYSICAL_ADDRESS *v6; // r14
  char *v7; // rdi
  BOOLEAN v9; // dl
  unsigned int v10; // ebp
  unsigned int v11; // eax
  struct _DMA_ADAPTER *v12; // r12
  __int64 *v13; // r8
  unsigned int v14; // edx
  int v15; // r15d
  unsigned int v16; // ecx
  PHYSICAL_ADDRESS *v17; // rbx
  __int64 LowPart; // rax
  int *v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  BOOLEAN WriteToDevice; // [rsp+A0h] [rbp+18h]
  PDMA_ADAPTER DmaAdapter; // [rsp+A8h] [rbp+20h]
  int DmaAdaptera; // [rsp+A8h] [rbp+20h]

  v4 = *(__int64 **)(a4 + 8);
  v5 = (int *)(a4 + 48);
  v6 = (PHYSICAL_ADDRESS *)(a4 + 64);
  v7 = *(char **)(a4 + 32);
  v9 = *(_BYTE *)(a4 + 152);
  v10 = *(_DWORD *)(a4 + 40);
  v21 = *(_QWORD *)(a4 + 104);
  DmaAdapter = *(PDMA_ADAPTER *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  *(_QWORD *)(a4 + 56) = a4;
  v11 = *((_DWORD *)v4 + 8) + *((_DWORD *)v4 + 10) + *((_DWORD *)v4 + 11) - (_DWORD)v7;
  WriteToDevice = v9;
  v20 = (int *)(a4 + 48);
  if ( v10 )
  {
    v12 = DmaAdapter;
    do
    {
      v13 = (__int64 *)*v4;
      v14 = v10;
      v15 = v10;
      if ( v11 <= v10 )
        v14 = v11;
      v16 = v10;
      if ( v13 )
        v15 = v14;
      v10 = v13 != 0LL ? v10 - v14 : 0;
      DmaAdaptera = v13 != 0LL ? v16 - v14 : 0;
      if ( v15 > 0 )
      {
        do
        {
          v17 = v6 + 1;
          v6[1].LowPart = v15;
          *v6 = IoMapTransfer(v12, (PMDL)v4, a3, v7, (PULONG)&v6[1], WriteToDevice);
          v6 += 3;
          LowPart = v17->LowPart;
          v15 -= LowPart;
          v7 += LowPart;
        }
        while ( v15 > 0 );
        v10 = DmaAdaptera;
        v13 = (__int64 *)*v4;
      }
      if ( !v13 )
        break;
      v4 = v13;
      v7 = (char *)(v13[4] + *((unsigned int *)v13 + 11));
      v11 = *((_DWORD *)v13 + 10);
    }
    while ( v10 );
    v5 = v20;
  }
  *v5 = ((int)v6 - (int)v5 - 16) / 24;
  sub_14042A5E0(a1, v21);
  return 3LL;
}
