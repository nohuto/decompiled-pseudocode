/*
 * XREFs of ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C00552B0
 * Callers:
 *     ?DXGADAPTER_SetMockDriverState@@YAXPEAVDXGADAPTER@@W4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C004BA00 (-DXGADAPTER_SetMockDriverState@@YAXPEAVDXGADAPTER@@W4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 * Callees:
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001DFD8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?QueueDurationViolationWorkItem@@YAXPEAVDXGADAPTER@@IPEAU_MOCKDRIVERSTATE_DURATION@@@Z @ 0x1C00550EC (-QueueDurationViolationWorkItem@@YAXPEAVDXGADAPTER@@IPEAU_MOCKDRIVERSTATE_DURATION@@@Z.c)
 */

void __fastcall MOCKDRIVERSTATE::SetMockDriverState(__int64 *a1, int a2, unsigned int *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 v13; // rdi
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx

  if ( *((_BYTE *)a1 + 32) )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
      {
        v5 = a1[2];
        if ( !*(_BYTE *)(v5 + 8) && *(_DWORD *)(a1[3] + 2632) > 1u )
        {
          v6 = *a3;
          if ( *(_DWORD *)(v5 + 3140) == a3[1] )
          {
            if ( *(_DWORD *)(v5 + 3132) )
              ++*(_DWORD *)(v5 + 3136);
          }
          else
          {
            ++*(_DWORD *)(v5 + 3132);
            *(_DWORD *)(a1[2] + 3136) = 0;
          }
          *(_DWORD *)(a1[2] + 3140) = a3[1];
          *(_DWORD *)(*a1 + 16 * (a3[2] + 10 * v6) + 68) = a3[1];
          v7 = a1[2];
          v8 = *(unsigned int *)(v7 + 3128);
          v9 = 3 * (v8 + 8 * v6);
          *(_DWORD *)(v7 + 8 * v9 + 56) = a3[1];
          *(_DWORD *)(a1[2] + 24 * (v8 + 8 * v6) + 60) = a3[2];
          RtlStringCbCopyA((char *)(a1[2] + 8 * (v9 + 8)), 16LL, *((const char **)a3 + 2));
          *(_DWORD *)(*(_QWORD *)(v10 + 16) + 3128LL) = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v10 + 16) + 3128LL) + 1) & 7;
          v11 = *(_QWORD *)(v10 + 16);
          if ( *(_DWORD *)(v11 + 3132) == 4 )
          {
            QueueDurationViolationWorkItem(
              *(struct DXGADAPTER **)(v10 + 24),
              v6,
              *(struct _MOCKDRIVERSTATE_DURATION **)(v10 + 16));
          }
          else if ( *(_DWORD *)(v11 + 3136) == 16 )
          {
            *(_DWORD *)(v11 + 3132) = 0;
          }
        }
      }
    }
    else
    {
      v12 = 0;
      if ( a3[1] )
      {
        v13 = 5LL * *a3;
        do
        {
          v14 = a3[4 * v12 + 3];
          v15 = a3[4 * v12 + 2] + 2 * v13;
          v16 = v15 + 4;
          v17 = 2 * v15;
          *(_BYTE *)(*a1 + 16 * v16) = v14;
          v18 = *a1;
          if ( v14 )
          {
            *(_QWORD *)(v18 + 8 * v17 + 56) = *(_QWORD *)&a3[4 * v12 + 4];
          }
          else
          {
            *(_QWORD *)(v18 + 8 * v17 + 56) = 0LL;
            *(_DWORD *)(*a1 + 8 * v17 + 68) = 0;
          }
          ++v12;
        }
        while ( v12 < a3[1] );
      }
    }
  }
}
