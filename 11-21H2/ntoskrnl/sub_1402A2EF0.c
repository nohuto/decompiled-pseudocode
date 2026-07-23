/*
 * XREFs of sub_1402A2EF0 @ 0x1402A2EF0
 * Callers:
 *     sub_1402A2E8C @ 0x1402A2E8C (sub_1402A2E8C.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A3F70 @ 0x1402A3F70 (sub_1402A3F70.c)
 */

__int64 __fastcall sub_1402A2EF0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r8
  char v5; // r10
  __int64 result; // rax
  PSLIST_ENTRY v7; // rax
  _SLIST_ENTRY *v8; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = sub_1402A3A60(a1, &v9);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_7;
  }
  v4 = sub_1402A3A14(a1, 6LL);
  if ( !v4 )
  {
LABEL_7:
    v7 = sub_140202234((__int64)&stru_140CE2980);
    v4 = (__int64)v7;
    if ( !v7 )
      return 3221225626LL;
    v5 = 1;
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v2 = sub_1402A3F70(v9, 6LL);
    if ( v2 < 0 )
      sub_140203D88((__int64)&stru_140CE2980, v8, (__int64)v8);
  }
  return (unsigned int)v2;
}
