/*
 * XREFs of sub_1406F3800 @ 0x1406F3800
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1405B239C @ 0x1405B239C (sub_1405B239C.c)
 *     sub_1406F367C @ 0x1406F367C (sub_1406F367C.c)
 *     sub_1406F3738 @ 0x1406F3738 (sub_1406F3738.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_1406F3860 @ 0x1406F3860 (sub_1406F3860.c)
 */

__int64 __fastcall sub_1406F3800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 *v6; // rcx
  int v7; // edx
  char v8; // r11

  v3 = *(__int64 **)(a1 + 32);
  v4 = (unsigned int)a2;
  v5 = *v3;
  v6 = v3 + 9;
  if ( (a3 & 1) == 0 || (unsigned int)a2 >= *((_DWORD *)v3 + 14) )
    return 0LL;
  while ( !*(_QWORD *)(v5 + 8LL * (unsigned int)a2)
       && !(unsigned int)sub_1406F3860(v6, a2, a3, v4)
       && ((v8 & 2) == 0 || !(unsigned int)PsGetHostSilo()) )
  {
    a2 = (unsigned int)(v7 + 1);
    if ( (_DWORD)a2 != (_DWORD)v4 )
      return 0LL;
  }
  return 1LL;
}
