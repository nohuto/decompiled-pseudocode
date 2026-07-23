/*
 * XREFs of sub_140725858 @ 0x140725858
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 * Callees:
 *     sub_1402A488C @ 0x1402A488C (sub_1402A488C.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     sub_140726494 @ 0x140726494 (sub_140726494.c)
 */

__int64 __fastcall sub_140725858(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  char *v6; // rcx

  v2 = a1 - 48;
  if ( *(_QWORD *)(v2 + 32) == 1LL )
    return 0LL;
  v4 = sub_1402A488C(v2);
  v5 = sub_140726494(*((_QWORD *)KeGetCurrentThread() + 23), a2, 0LL);
  if ( v5 )
  {
    v6 = *(char **)(v4 + 16);
    if ( v6 )
      sub_140724DC8(v6, *(unsigned int *)(v4 + 8), 0LL);
    *(_DWORD *)(v4 + 8) = a2;
    *(_QWORD *)(v4 + 16) = v5;
    return 0LL;
  }
  return 3221225540LL;
}
