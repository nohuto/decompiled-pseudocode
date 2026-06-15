/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140088530
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140088460 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14002BD28 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x14008969C (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140089758 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentPadding(
        CCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  CCrossProcessBaseEndpoint *v9; // rbp
  signed __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // edx
  double v19; // xmm1_8
  __int64 v20; // rcx

  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 8) + 16LL), 0LL, 0LL);
  v7 = *((_QWORD *)this + 8);
  v8 = v6;
  v9 = (CCrossProcessBaseEndpoint *)((char *)this - 8);
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), 0LL, 0LL);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)((char *)this - 8), v6, v7, a4)
    && CCrossProcessBaseEndpoint::IsValidOffset(v9, v10, v11, v12) )
  {
    if ( v8 >= v10 )
    {
      v15 = v8 - v10;
    }
    else
    {
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pqxxxx_EventWriteTransfer(v14, v13, (_DWORD)v9, 4, 0, v8, v10, 0);
      v15 = 0;
      ShipAssert(65537LL, 0LL);
    }
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0pqxxxx_EventWriteTransfer(
        v10 / *((unsigned int *)this + 20),
        v8 % *((unsigned int *)this + 20),
        (_DWORD)v9,
        3,
        0,
        v8 / *((unsigned int *)this + 20),
        v10 / *((unsigned int *)this + 20),
        v15 / *((_DWORD *)this + 20));
    v16 = v15 / *((_DWORD *)this + 20);
    v17 = *((_QWORD *)this + 9);
    v18 = *(_DWORD *)(v17 + 188) % (unsigned int)*(unsigned __int16 *)(v17 + 192);
    v19 = (double)v16
        * 10000000.0
        / (double)(int)(*(_DWORD *)(v17 + 188) / (unsigned int)*(unsigned __int16 *)(v17 + 192))
        + 0.5;
    v20 = (unsigned int)(int)v19;
    *a2 = v20;
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(v20, v18, 0, 100, v8, v10, (int)v19, v16, 0, 0, 0, 0);
  }
  else
  {
    *a2 = 0LL;
  }
}
