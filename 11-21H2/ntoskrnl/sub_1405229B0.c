/*
 * XREFs of sub_1405229B0 @ 0x1405229B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

__int64 __fastcall sub_1405229B0(__int64 a1, unsigned int a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( qword_140C4E418 )
    return sub_140AF9E94(qword_140C4E418, &v3, a2, 0LL);
  else
    return 0LL;
}
