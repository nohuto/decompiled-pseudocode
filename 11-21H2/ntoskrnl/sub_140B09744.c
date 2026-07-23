/*
 * XREFs of sub_140B09744 @ 0x140B09744
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 sub_140B09744()
{
  PVOID v0; // rax
  PVOID v1; // rax
  unsigned __int64 v2; // rcx
  PVOID v3; // rax
  unsigned __int64 v4; // r9
  PVOID v5; // rax
  __int64 result; // rax

  v0 = sub_1402828F0(256, 0x10000uLL, 0x69526D4Du);
  if ( !v0 )
    return 0LL;
  qword_140C4F308 = 0x7FFFFLL;
  qword_140C4F310 = (__int64)v0;
  qword_140C4F318 = sub_140363220(1) & 0x7FFFE;
  v1 = sub_1402828F0(256, 0x500uLL, 0x69526D4Du);
  if ( !v1 )
    return 0LL;
  qword_140C4F3A0 = (__int64)v1;
  qword_140C4F398 = 10240LL;
  qword_140C4F3A8 = (unsigned int)sub_140363220(1) % 0x2800uLL;
  v2 = (unsigned __int64)(unsigned __int8)sub_140363220(1) << 16;
  qword_140C4F320 = v2 + 2013265920;
  qword_140C4F328 = v2 + 2013265920;
  qword_140C4F330 = v2 + 3758096384u;
  qword_140C4F338 = v2 + 3758096384u;
  v3 = sub_1402828F0(256, 0x500uLL, 0x69526D4Du);
  if ( !v3 )
    return 0LL;
  qword_140C4F350[-2] = 10240LL;
  qword_140C4F350[-1] = v3;
  v4 = (unsigned __int64)(unsigned __int8)sub_140363220(1) << 16;
  qword_140C4F350[0] = v4 + 2013265920;
  qword_140C4F350[1] = v4 + 2013265920;
  qword_140C4F350[2] = v4 + 3758096384u;
  qword_140C4F350[3] = v4 + 3758096384u;
  qword_140C4F380 = (unsigned __int8)sub_140363220(1);
  v5 = sub_1402828F0(256, 0x500uLL, 0x69526D4Du);
  if ( !v5 )
    return 0LL;
  qword_140C4F390 = (__int64)v5;
  result = 1LL;
  qword_140C4F388 = 10240LL;
  return result;
}
