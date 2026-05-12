/*
 * XREFs of sub_1C0066128 @ 0x1C0066128
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C0066298 @ 0x1C0066298 (sub_1C0066298.c)
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 * Callees:
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 */

void __fastcall sub_1C0066128(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  PSLIST_ENTRY v8; // rax
  PSLIST_ENTRY v9; // rax
  __int64 v10; // rdi
  struct _IO_WORKITEM *v11; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v5 = a1 + 64;
      if ( a1 != -64 )
      {
        v6 = *(_QWORD *)(a2 + 64);
        if ( *(_DWORD *)v6 == 1431193940 )
          v6 = *(_QWORD *)(v6 + 24);
        v7 = 0LL;
        if ( *(_DWORD *)(a1 + 128) )
        {
          do
          {
            while ( 1 )
            {
              v9 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)v5 + 8 * v7));
              if ( !v9 )
                break;
              if ( a3 )
                sub_1C00084E4(v6, (__int64)v9);
              else
                ExFreePoolWithTag(v9, 0x53526152u);
            }
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < *(_DWORD *)(v5 + 64) );
        }
        else if ( *(_DWORD *)(a1 + 136) )
        {
          do
          {
            v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v5);
            if ( !v8 )
              break;
            if ( a3 )
              sub_1C00084E4(v6, (__int64)v8);
            else
              ExFreePoolWithTag(v8, 0x53526152u);
            LODWORD(v7) = v7 + 1;
          }
          while ( (unsigned int)v7 < *(_DWORD *)(v5 + 72) );
        }
        *(_DWORD *)(v5 + 72) = 0;
        if ( *(_DWORD *)(v5 + 64) )
        {
          v10 = 0LL;
          do
          {
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)v5 + 8 * v10), 0x53526152u);
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < *(_DWORD *)(v5 + 64) );
          ExFreePoolWithTag(*(PVOID *)v5, 0x53526152u);
          *(_DWORD *)(v5 + 64) = 0;
        }
        v11 = *(struct _IO_WORKITEM **)(a1 + 288);
        if ( v11 )
        {
          IoFreeWorkItem(v11);
          *(_QWORD *)(a1 + 288) = 0LL;
        }
      }
    }
  }
}
