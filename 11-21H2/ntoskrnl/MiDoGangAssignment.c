/*
 * XREFs of MiDoGangAssignment @ 0x1405C00C0
 * Callers:
 *     MiDpcGangTarget @ 0x1405C02A0 (MiDpcGangTarget.c)
 *     MiStartDpcGang @ 0x1405C0634 (MiStartDpcGang.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     MiInitializeNewPfns @ 0x1403B790C (MiInitializeNewPfns.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140589B90 (MiInitializeLargeMdlLeafPfns.c)
 */

void __fastcall MiDoGangAssignment(__int64 a1, ULONG_PTR **a2)
{
  int v3; // ecx
  unsigned __int64 *v4; // rbx
  unsigned __int16 v5; // r12
  ULONG_PTR *v6; // r14
  __m128i *v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  int v10; // eax
  SIZE_T v11; // rax
  int v12; // edx
  bool v13; // zf
  __m128i v14[3]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      v5 = **(_WORD **)(a1 + 168);
    else
      v5 = 0;
    v6 = *a2;
    if ( (v3 & 0x38) != 0 )
    {
      v8 = 512LL;
      v7 = (__m128i *)(*(_QWORD *)(a1 + 160) + ((*v6 - *(_QWORD *)a1) << 12));
    }
    else
    {
      v7 = 0LL;
      v8 = 0x4000LL;
    }
    while ( 1 )
    {
      v9 = v6[1];
      if ( !v9 )
        break;
      if ( v8 <= v9 )
        v9 = v8;
      if ( v7 )
      {
        v10 = *(_DWORD *)(a1 + 184);
        if ( (v10 & 8) != 0 )
        {
          KeZeroPages(v7, v9 << 12);
        }
        else if ( (v10 & 0x10) != 0 )
        {
          memset(v7, -1, v9 << 12);
        }
        else if ( (v10 & 0x20) != 0 )
        {
          v11 = RtlCompareMemoryUlong(v7, v9 << 12, 0);
          if ( v11 != v9 << 12 )
            KeBugCheckEx(0x127u, (ULONG_PTR)v7, *v6, v11, v9 << 12);
        }
      }
      if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 180);
        memset(v14, 0, sizeof(v14));
        MiCreatePfnTemplate((__int64)v14, v12, v5);
        MiInitializeNewPfns((__m128i *)(48 * *v6 - 0x220000000000LL), v9, v14, v5, *(_DWORD *)(a1 + 180), 0LL, 0LL);
      }
      v13 = v6[1] == v9;
      v6[1] -= v9;
      if ( v13 )
        break;
      *v6 += v9;
      if ( KeShouldYieldProcessor() )
        goto LABEL_4;
      if ( v7 )
        v7 += 256 * v9;
    }
  }
  else
  {
    v4 = *a2;
    if ( **a2 )
    {
      MiInitializeLargeMdlLeafPfns(v4, *(_QWORD *)a1);
      if ( *v4 )
LABEL_4:
        *(_DWORD *)(a1 + 196) = 1;
    }
  }
}
