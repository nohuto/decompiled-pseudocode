/*
 * XREFs of sub_1406EF020 @ 0x1406EF020
 * Callers:
 *     sub_140630D00 @ 0x140630D00 (sub_140630D00.c)
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EEF3C @ 0x1406EEF3C (sub_1406EEF3C.c)
 *     sub_1409E4DAC @ 0x1409E4DAC (sub_1409E4DAC.c)
 * Callees:
 *     sub_1406EF170 @ 0x1406EF170 (sub_1406EF170.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407940E4 @ 0x1407940E4 (sub_1407940E4.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 */

__int64 __fastcall sub_1406EF020(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v5; // r9d
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  __int64 result; // rax
  __int64 v13; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 24) - 0x11D232049E814AADLL;
  v5 = *(unsigned __int8 *)(a1 + 4232);
  *a3 = 0LL;
  if ( !v3 )
    v3 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
  v7 = v5;
  if ( !v3 )
  {
    v9 = v5;
LABEL_8:
    LOBYTE(v7) = 1;
    v10 = sub_140797594(a1, v9, v7);
    *a3 = v10;
    v11 = v10 == 0;
    goto LABEL_9;
  }
  if ( !*(_WORD *)(a2 + 144) )
  {
    v8 = *(unsigned __int16 *)(a2 + 8);
    v9 = v5;
    if ( (_WORD)v8 != 0xFFFF )
      v9 = v8;
    if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 16) )
      return 3221225480LL;
    goto LABEL_8;
  }
  UnicodeString = 0LL;
  result = sub_1406EF170(a2 + 144, &UnicodeString);
  if ( (int)result < 0 )
    return result;
  LOBYTE(v13) = 1;
  *a3 = sub_1407940E4(a1, &UnicodeString, v13);
  RtlFreeUnicodeString(&UnicodeString);
  v11 = *a3 == 0;
LABEL_9:
  if ( v11 )
    return 3221226134LL;
  else
    return 0LL;
}
