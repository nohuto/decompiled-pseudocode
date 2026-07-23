/*
 * XREFs of sub_14035F4C8 @ 0x14035F4C8
 * Callers:
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 * Callees:
 *     sub_140259B30 @ 0x140259B30 (sub_140259B30.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_140391CE4 @ 0x140391CE4 (sub_140391CE4.c)
 */

void __fastcall sub_14035F4C8(__int64 a1, int a2, int a3)
{
  unsigned int i; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  signed int v10; // edi
  KPRIORITY PriorityThread; // eax
  struct _EX_RUNDOWN_REF *v12; // rax

  if ( (*(_DWORD *)(a1 + 1840) & 0x20) != 0 )
    sub_140259B30((PEX_SPIN_LOCK)(a1 + 1264), a2, a3);
  for ( i = 0; i < 0x400; ++i )
  {
    v6 = sub_14035F5AC(a1, i);
    v7 = v6;
    if ( v6 )
    {
      *(_BYTE *)(v6 + 6022) = a2;
      v8 = *(unsigned __int8 *)(v6 + 6022);
      v9 = *(unsigned __int8 *)(v6 + 6022);
      if ( v8 == 4 )
        v10 = *(_DWORD *)(v7 + 6728);
      else
        v10 = *((_DWORD *)qword_14001BFE0 + v9);
      PriorityThread = KeQueryPriorityThread(*(PKTHREAD *)(v7 + 6200));
      if ( a2 < 4 )
      {
        if ( PriorityThread != v10 )
          KeSetActualBasePriorityThread(*(_QWORD *)(v7 + 6200), v10);
        if ( a2 <= 0 )
          sub_140391CE4(v7 + 80, v7 + 5976);
      }
      else if ( PriorityThread > v10 )
      {
        KeSetActualBasePriorityThread(*(_QWORD *)(v7 + 6200), v10);
      }
      v12 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, *(_DWORD *)(v7 + 6016) & 0x3FF);
      sub_1402AD030(v12 + 1);
    }
  }
}
