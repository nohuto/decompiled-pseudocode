/*
 * XREFs of PopEnlargeHiberFile @ 0x140988750
 * Callers:
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x1409890E0 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  qword_140C3E608 = qword_140C3CF70;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140C673C8 + 17040LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140C3E618 = v5;
    qword_140C3E620 = v6;
    qword_140C3E610 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
