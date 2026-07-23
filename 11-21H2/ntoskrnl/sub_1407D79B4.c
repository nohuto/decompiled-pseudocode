/*
 * XREFs of sub_1407D79B4 @ 0x1407D79B4
 * Callers:
 *     sub_1407D7634 @ 0x1407D7634 (sub_1407D7634.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_1407DD6F0 @ 0x1407DD6F0 (sub_1407DD6F0.c)
 */

char __fastcall sub_1407D79B4(__int64 a1)
{
  const void *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = (const void *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C54720, 1u);
  v8 = qword_140C54710 - 16;
  if ( !memcmp((const void *)(qword_140C54710 - 16 + 32), v1, 0x40uLL)
    || (v8 = sub_1407DD6F0(&unk_140C546F8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 116) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140C54720);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
