/*
 * XREFs of sub_140972F98 @ 0x140972F98
 * Callers:
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_140972D90 @ 0x140972D90 (sub_140972D90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140972F98(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rax
  void *v4; // rdi
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = sub_14030E280(a1, 512);
  v4 = (void *)v3;
  v5 = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    *(_DWORD *)(v5 + 68) |= 2u;
    if ( (*(_DWORD *)(v5 + 68) & 1) != 0 )
      v5 = 0LL;
  }
  sub_140281C44((__int64)CurrentThread, a1);
  if ( v4 )
  {
    if ( v5 )
      sub_140972D90((char *)v5);
    ExFreePoolWithTag(v4, 0);
  }
  sub_14030B7F0((__int64)CurrentThread, a1);
}
