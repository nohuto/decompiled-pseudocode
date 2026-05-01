/*
 * XREFs of sub_18000DDEC @ 0x18000DDEC
 * Callers:
 *     sub_18000DED0 @ 0x18000DED0 (sub_18000DED0.c)
 * Callees:
 *     sub_18000E304 @ 0x18000E304 (sub_18000E304.c)
 *     sub_18000E54C @ 0x18000E54C (sub_18000E54C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18000DDEC(__int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  char v3; // bl
  __int64 v6; // rdi
  char v7; // bp
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rsi
  char v11; // al
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v3 = 0;
  *a2 = 0;
  v6 = a1;
  v7 = 0;
  if ( qword_180032918 )
  {
    v8 = (__int64 *)sub_18000E304();
    v9 = v8;
    if ( v8 )
    {
      if ( *v8 )
      {
        *a2 = 0;
        if ( (unsigned __int8)sub_18000E54C(v6, *v8, a2, a3) )
          *(_QWORD *)(v6 + 72) = a2;
        v10 = *v9;
        do
        {
          v11 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v10 + 8))(*(_QWORD *)(v10 + 8), v6);
          v10 = *(_QWORD *)(v10 + 16);
          v7 |= v11;
        }
        while ( v10 );
      }
    }
  }
  result = qword_180032D58;
  if ( qword_180032D58 )
  {
    if ( v7 || (*(_BYTE *)(v6 + 4) & 2) != 0 )
      v3 = 1;
    LOBYTE(a1) = v3;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_180032D58(a1, v6);
  }
  return result;
}
