/*
 * XREFs of KiInitializeForegroundBoostThread @ 0x1402BE0E8
 * Callers:
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 * Callees:
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiAbProcessThreadPriorityModification @ 0x140307BB0 (KiAbProcessThreadPriorityModification.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 */

char __fastcall KiInitializeForegroundBoostThread(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  char v4; // cl
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  _WORD *v11; // rdx
  __int64 v12; // rdx
  _BYTE v14[336]; // [rsp+20h] [rbp-168h] BYREF

  LOBYTE(v2) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL);
  if ( (_BYTE)v2 == 2 )
  {
    v3 = 0;
    if ( !*(_BYTE *)(a1 + 564) )
    {
      LODWORD(v2) = *(_DWORD *)(a1 + 120);
      if ( (v2 & 8) == 0 )
      {
        v4 = *(_BYTE *)(a1 + 195);
        if ( v4 > 0 )
        {
          LOBYTE(v2) = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
          v5 = v2;
          if ( (char)v2 >= 16 )
            v5 = 15;
          if ( v5 > v4 )
          {
            *(_BYTE *)(a1 + 564) = (v5 - v4) & 0xF;
            memset(v14, 0, sizeof(v14));
            LOBYTE(v6) = v5;
            KiAbProcessThreadPriorityModification(a1, v6, 1LL);
            *(_BYTE *)(a1 + 195) = v5;
            if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) != (unsigned __int8)*(_DWORD *)(a1 + 512) )
              KiSetThreadQosLevelUnsafe(a1);
            v8 = *(_DWORD *)(a1 + 120);
            if ( (v8 & 0x400000) != 0 )
            {
              LOBYTE(v7) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v7);
              v8 = *(_DWORD *)(a1 + 120);
            }
            v2 = *(unsigned int *)(a1 + 588);
            v9 = KiProcessorBlock[v2];
            v10 = *(_QWORD *)(v9 + 34880);
            if ( v10 )
            {
              v2 = *(unsigned __int8 *)(v9 + 208);
              v11 = *(_WORD **)(a1 + 576);
              if ( (unsigned __int16)v2 >= *v11 )
                v12 = 0LL;
              else
                v12 = *(_QWORD *)&v11[4 * v2 + 4];
              LOBYTE(v3) = (v10 & v12) == v10;
            }
            if ( v3 != ((v8 >> 13) & 1) )
              _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
          }
        }
      }
    }
  }
  return v2;
}
