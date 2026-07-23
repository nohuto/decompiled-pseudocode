/*
 * XREFs of sub_140A93644 @ 0x140A93644
 * Callers:
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140761DD8 @ 0x140761DD8 (sub_140761DD8.c)
 *     sub_1407FCA70 @ 0x1407FCA70 (sub_1407FCA70.c)
 *     sub_140A9391C @ 0x140A9391C (sub_140A9391C.c)
 */

__int64 __fastcall sub_140A93644(__int64 a1)
{
  int v2; // edi
  void *i; // rcx
  ULONG_PTR v5; // rax
  void *v6; // rbx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = 0;
  _InterlockedExchange(&dword_140D575BC, 0);
  _InterlockedExchange(&dword_140D57570, 0);
  if ( !sub_140359DE0(*(_QWORD *)(a1 + 48)) )
    return sub_140A9391C(a1);
  for ( i = 0LL; ; i = v6 )
  {
    v5 = sub_1402A1770(i);
    v6 = (void *)v5;
    if ( !v5 )
      break;
    v2 = sub_1402312E0(v5);
    if ( v2 >= 0 )
    {
      if ( sub_140761DD8(*(_QWORD *)(a1 + 48)) )
      {
        v2 = sub_140A9391C(a1);
        if ( v2 < 0 )
        {
          sub_1407FCA70(v6);
          return (unsigned int)v2;
        }
      }
      sub_140231240((__int64)v6, (__int64)v7);
    }
  }
  return (unsigned int)v2;
}
