/*
 * XREFs of sub_1402F09D8 @ 0x1402F09D8
 * Callers:
 *     sub_14023EF40 @ 0x14023EF40 (sub_14023EF40.c)
 *     sub_1402EE2D0 @ 0x1402EE2D0 (sub_1402EE2D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140232968 @ 0x140232968 (sub_140232968.c)
 *     sub_14024C7D4 @ 0x14024C7D4 (sub_14024C7D4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F1004 @ 0x1402F1004 (sub_1402F1004.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402F09D8(_QWORD *Object, char a2, unsigned __int8 a3)
{
  void *v3; // r14
  unsigned __int64 v5; // rdi
  volatile signed __int32 *v7; // rax
  char v8; // al
  void *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf

  v3 = (void *)Object[10];
  v5 = a3;
  v7 = (volatile signed __int32 *)sub_1402F1004(v3);
  v8 = sub_140232968(v7, Object);
  v9 = (void *)Object[11];
  if ( !v8 && (!a2 || !sub_14024C7D4(Object[11], Object)) )
    return 0;
  Object[11] = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KeReleaseSpinLockFromDpcLevel(Object + 12);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
