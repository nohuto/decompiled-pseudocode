/*
 * XREFs of sub_14097FBF4 @ 0x14097FBF4
 * Callers:
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 * Callees:
 *     sub_14028DA5C @ 0x14028DA5C (sub_14028DA5C.c)
 *     sub_14028DC08 @ 0x14028DC08 (sub_14028DC08.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14097FBF4(_QWORD *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebx

  v1 = a1[12];
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  sub_14028DC08((__int64)CurrentThread, v4);
  if ( qword_140C1B920 )
    v6 = sub_14042A5E0(v5, *(_QWORD *)(*a1 + 32LL));
  else
    v6 = -1073741637;
  sub_14028DA5C((__int64)CurrentThread, v4);
  return v6;
}
