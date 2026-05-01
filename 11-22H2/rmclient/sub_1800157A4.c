/*
 * XREFs of sub_1800157A4 @ 0x1800157A4
 * Callers:
 *     sub_180015960 @ 0x180015960 (sub_180015960.c)
 * Callees:
 *     sub_180015484 @ 0x180015484 (sub_180015484.c)
 *     sub_180015888 @ 0x180015888 (sub_180015888.c)
 *     sub_180015DE4 @ 0x180015DE4 (sub_180015DE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1800157A4(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // r10d
  int v8; // edx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v10; // [rsp+30h] [rbp-48h]
  signed __int32 v11[10]; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+84h] [rbp+Ch]
  int v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h]

  v15 = a4;
  LOBYTE(v14) = a3;
  v4 = (int)a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
    v15 = *(_QWORD *)sub_180015484(a1, v11);
  v13 = 2;
  v12 = 0;
  v14 = 3;
  v6 = sub_180015DE4(3LL, v5);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))sub_180015888(
                                                                                                     v4 + 8,
                                                                                                     v8,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v6);
  if ( (_DWORD)result )
  {
    result = qword_180032DB0;
    if ( qword_180032DB0 )
    {
      v10 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))qword_180032DB0(39841886LL, &v12, 0LL, v5, &v14, 0LL, v10, 1LL);
    }
  }
  return result;
}
