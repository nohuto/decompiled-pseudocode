/*
 * XREFs of StorFindDictionary @ 0x1C00081BC
 * Callers:
 *     RaidAdapterFindUnitAtDirql @ 0x1C0008160 (RaidAdapterFindUnitAtDirql.c)
 *     StorRemoveDictionary @ 0x1C001805C (StorRemoveDictionary.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorFindDictionary(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall *v3)(_QWORD *); // r15
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  _QWORD **v7; // r14
  unsigned int v8; // ebx
  _QWORD *i; // rsi
  __int64 v10; // rax
  int v11; // eax

  v3 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 16)
                 + 16LL * ((*(unsigned int (__fastcall **)(__int64))(a1 + 40))(a2) % *(_DWORD *)(a1 + 4)));
  v8 = -1073741275;
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v10 = v3(i);
    v11 = v4(v10, a2);
    if ( !v11 )
    {
      v8 = 0;
      if ( a3 )
        *a3 = i;
      return v8;
    }
    if ( v11 < 0 )
    {
      if ( a3 )
        *a3 = 0LL;
      return v8;
    }
  }
  return v8;
}
