/*
 * XREFs of sub_14094D7E8 @ 0x14094D7E8
 * Callers:
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140744E30 @ 0x140744E30 (sub_140744E30.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_14094A7D4 @ 0x14094A7D4 (sub_14094A7D4.c)
 */

__int64 __fastcall sub_14094D7E8(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 *v6; // rsi
  __int64 i; // rdi
  int v9; // [rsp+28h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-28h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v4 = sub_140744E30(a2);
  v5 = v4;
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073740653 )
  {
    v5 = sub_14094A7D4(&UnicodeString, (const void **)(a2 + 392), 0LL, 1);
    if ( v5 >= 0 )
    {
      v6 = (__int64 *)(a2 + 208);
      for ( i = *v6; (__int64 *)i != v6; i = *(_QWORD *)i )
      {
        v5 = sub_140744E30(i);
        if ( ((v5 + 0x80000000) & 0x80000000) == 0 && v5 != -1073740653 )
          goto LABEL_13;
        v5 = sub_14094A7D4(&UnicodeString, (const void **)(i + 392), 0LL, 1);
        if ( v5 < 0 )
          goto LABEL_13;
      }
      if ( UnicodeString.Buffer )
        v5 = sub_14077139C(
               *(__int64 *)&qword_140D00AC0,
               (_DWORD *)a1,
               *(_QWORD *)(a1 + 8),
               1u,
               *(_QWORD *)(a1 + 16),
               v9,
               (__int64)qword_1400388F0,
               8210,
               (__int64)UnicodeString.Buffer,
               UnicodeString.Length,
               0);
      else
        v5 = -1073740653;
    }
  }
LABEL_13:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v5;
}
