/*
 * XREFs of sub_1405E0600 @ 0x1405E0600
 * Callers:
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char __fastcall sub_1405E0600(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v6; // rax
  signed __int32 *v7; // r9
  unsigned __int64 v8; // rdi
  signed __int32 v9; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // eax
  int v12; // ecx
  signed __int32 v13; // ett
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  signed __int32 v18; // eax
  signed __int64 v19; // rdx
  bool v20; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)CurrentThread + 23);
  v7 = *(signed __int32 **)(v6 + 1328);
  if ( v7 )
  {
    v8 = 0x4000000000000000LL;
    LOBYTE(v6) = 0;
    if ( a1 >= 276 )
      v8 = 0x8000000000000000uLL;
    _m_prefetchw(v7);
    v9 = *v7;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --*((_WORD *)CurrentThread + 242);
    if ( (v9 & 1) != 0 )
      goto LABEL_19;
    do
    {
      LODWORD(v6) = v9 & 0xFFFE;
      if ( (unsigned int)v6 >= 0x800 )
        break;
      v11 = v9;
      v12 = ((unsigned __int16)v9 ^ (unsigned __int16)(v9 + 2)) & 0xFFFE ^ v9;
      v13 = v11;
      LODWORD(v6) = _InterlockedCompareExchange(v7, (v12 ^ (v12 + 0x10000)) & 0x7FFF0000 ^ v12, v11);
      v9 = v6;
      if ( v13 == (_DWORD)v6 )
        break;
    }
    while ( (v6 & 1) == 0 );
    if ( (v9 & 1) != 0 || (LODWORD(v6) = v9 & 0xFFFE, (unsigned int)v6 >= 0x800) )
    {
LABEL_19:
      _m_prefetchw(v7 + 2);
      v19 = *((_QWORD *)v7 + 1);
      if ( v19 != -1 )
      {
        do
        {
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 1, v19 + 1, v19);
          v20 = v19 == v6;
          v19 = v6;
        }
        while ( !v20 && v6 != -1 );
      }
    }
    else
    {
      v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      v15 = (unsigned __int16)v9 >> 1;
      v16 = a3 | 1;
      if ( a1 >= 276 )
        v16 = v14;
      v17 = 3 * v15;
      *(_QWORD *)&v7[2 * v17 + 10] = a2;
      *(_QWORD *)&v7[6 * v15 + 12] = v16;
      *(_QWORD *)&v7[2 * v17 + 14] = *((_QWORD *)CurrentThread + 154);
      v18 = _InterlockedExchangeAdd(v7, 0xFFFF0000);
      if ( (v18 & 1) != 0 && (v18 & 0x7FFF0000) == 0x10000 )
        sub_14024B0B4(v7 + 4, 0);
      v6 = *((_QWORD *)CurrentThread + 45);
      if ( v6 )
        _InterlockedOr64((volatile signed __int64 *)v6, v8);
    }
    if ( !CurrentIrql )
      LOBYTE(v6) = sub_1402F9540((__int64)CurrentThread);
  }
  return v6;
}
