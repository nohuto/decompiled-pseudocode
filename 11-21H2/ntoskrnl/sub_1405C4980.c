/*
 * XREFs of sub_1405C4980 @ 0x1405C4980
 * Callers:
 *     sub_14022CE0C @ 0x14022CE0C (sub_14022CE0C.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_1405BE6F4 @ 0x1405BE6F4 (sub_1405BE6F4.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 */

__int64 __fastcall sub_1405C4980(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  char v4; // bp
  ULONG_PTR *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = sub_1405BE6F4((__int64)v5, 0, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)sub_14032A4B0((__int64)v5, a2, 0) )
    {
      v7 = -1073741523;
LABEL_9:
      sub_1405BF468((__int64)v5, 0, v4, a2);
      return v7;
    }
    if ( !(unsigned int)sub_1402821F4(v5, a2, 0LL) )
    {
      if ( v3 )
        sub_14028CE10((__int64)v5, a2);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
