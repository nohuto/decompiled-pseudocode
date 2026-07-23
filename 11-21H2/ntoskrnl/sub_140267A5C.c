/*
 * XREFs of sub_140267A5C @ 0x140267A5C
 * Callers:
 *     sub_1402678C8 @ 0x1402678C8 (sub_1402678C8.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1405B2734 @ 0x1405B2734 (sub_1405B2734.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

int __fastcall sub_140267A5C(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // rbx
  void *v11; // r12
  int v13; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(24512LL * *(unsigned int *)(a1 + 80) + *(_QWORD *)(v3 + 16) + 22965) )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 156);
      v7 = v6;
      v8 = a2 & 1;
      if ( (a2 & 1) == 0 )
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 160);
        if ( (_DWORD)v3 )
          v7 = *(_DWORD *)(a1 + 160);
      }
      v9 = 0;
      if ( v6 )
      {
        LODWORD(v3) = a2 & 8;
        v13 = v3;
        v10 = v5 + 4;
        do
        {
          if ( (_DWORD)v3 )
          {
            if ( (*(_BYTE *)v10 & 1) == 0 )
              goto LABEL_15;
            if ( (*(_BYTE *)v10 & 0x10) == 0 )
            {
              v11 = *(void **)(*(_QWORD *)(v10 + 4) + 272LL);
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v11, 1953261124LL) )
              {
                *(_BYTE *)(a1 + 133) = 1;
                KeSetActualBasePriorityThread((ULONG_PTR)v11);
                ObfDereferenceObject(v11);
              }
            }
          }
          if ( (a2 & 4) != 0 )
            *(_BYTE *)v10 |= 4u;
          if ( (v8 || (*(_BYTE *)v10 & 8) != 0) && (*(_BYTE *)v10 & 2) != 0 )
          {
            *(_BYTE *)v10 &= ~2u;
            ++*(_DWORD *)(a1 + 164);
            LODWORD(v3) = KeSetEvent((PRKEVENT)(v10 + 12), 0, 0);
            if ( !--v7 )
              return v3;
          }
LABEL_15:
          LODWORD(v3) = v13;
          ++v9;
          v10 += 40LL;
        }
        while ( v9 < v6 );
      }
    }
  }
  return v3;
}
