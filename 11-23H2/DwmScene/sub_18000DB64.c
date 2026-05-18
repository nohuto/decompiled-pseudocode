/*
 * XREFs of sub_18000DB64 @ 0x18000DB64
 * Callers:
 *     sub_18000DC40 @ 0x18000DC40 (sub_18000DC40.c)
 * Callees:
 *     sub_18000E074 @ 0x18000E074 (sub_18000E074.c)
 *     sub_18000E218 @ 0x18000E218 (sub_18000E218.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18000DB64(__int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  __int64 v5; // rdi
  char v6; // bl
  char v7; // bp
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rsi
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v5 = a1;
  v6 = 0;
  *a2 = 0;
  v7 = 0;
  if ( qword_1801D3258 )
  {
    v8 = (__int64 *)sub_18000E074();
    v9 = v8;
    if ( v8 )
    {
      if ( *v8 )
      {
        *a2 = 0;
        if ( (unsigned __int8)sub_18000E218(v5, *v8, a2, a3) )
          *(_QWORD *)(v5 + 72) = a2;
        v10 = *v9;
        do
        {
          v7 |= (***(__int64 (__fastcall ****)(_QWORD, __int64))(v10 + 8))(*(_QWORD *)(v10 + 8), v5);
          v10 = *(_QWORD *)(v10 + 16);
        }
        while ( v10 );
      }
    }
  }
  result = qword_1801D3268;
  if ( qword_1801D3268 )
  {
    if ( v7 || (*(_BYTE *)(v5 + 4) & 2) != 0 )
      v6 = 1;
    LOBYTE(a1) = v6;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1801D3268(a1, v5);
  }
  return result;
}
