/*
 * XREFs of sub_18000DE50 @ 0x18000DE50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000E5E0 @ 0x18000E5E0 (sub_18000E5E0.c)
 *     sub_18000FBFC @ 0x18000FBFC (sub_18000FBFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18000DE50(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  char v6; // bp
  __int64 v7; // rbx
  unsigned __int64 CurrentThreadId; // r9
  _QWORD *i; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax

  v5 = a1;
  *a2 = 0;
  v6 = 0;
  v7 = qword_1801F7380;
  if ( qword_1801F7380 )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xA);
    for ( i = *(_QWORD **)(v7 + 8 * (CurrentThreadId % 0xA)); i; i = (_QWORD *)i[1] )
    {
      if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      {
        i += 2;
        break;
      }
    }
    if ( i && *i )
    {
      *a2 = 0;
      if ( (unsigned __int8)sub_18000E4E8(v5, *i, a2, a3) )
        *(_QWORD *)(v5 + 72) = a2;
      v10 = *i;
      do
      {
        v6 |= (***(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(v10 + 8))(*(_QWORD *)(v10 + 8), v5);
        v10 = *(_QWORD *)(v10 + 16);
      }
      while ( v10 );
    }
  }
  if ( qword_1801F7390 )
  {
    LOBYTE(a1) = v6;
    qword_1801F7390(a1, v5);
  }
  LODWORD(v11) = GetCurrentThreadId();
  if ( dword_1801F7418 != (_DWORD)v11 )
  {
    if ( _InterlockedIncrement(&dword_1801F741C) < 4 )
    {
      dword_1801F7418 = v11;
      v11 = sub_18000E5E0();
      if ( v11 )
        LODWORD(v11) = sub_18000FBFC(v11, v5);
      dword_1801F7418 = 0;
    }
    _InterlockedDecrement(&dword_1801F741C);
  }
  return v11;
}
