/*
 * XREFs of IommuHvFlushAllPasid @ 0x140524750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuHvFlushAllPasid(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  if ( qword_140C62598 )
  {
    v4 = 0;
    qword_140C62598(0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, a3, v4);
  }
  return 0LL;
}
