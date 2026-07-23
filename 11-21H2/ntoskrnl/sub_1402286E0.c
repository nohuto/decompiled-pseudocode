/*
 * XREFs of sub_1402286E0 @ 0x1402286E0
 * Callers:
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 * Callees:
 *     sub_14022876C @ 0x14022876C (sub_14022876C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 */

__int64 __fastcall sub_1402286E0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 168);
  sub_14032F1B0(v1);
  if ( *(_DWORD *)(v1 + 208) )
  {
    v3 = 48LL * *(_QWORD *)(v1 + 216) - 0x220000000000LL;
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v4);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    sub_14022876C(v3, *(unsigned int *)(v1 + 208));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v1 + 208) = 0;
  }
  return 0LL;
}
