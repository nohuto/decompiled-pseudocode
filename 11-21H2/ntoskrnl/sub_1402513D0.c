/*
 * XREFs of sub_1402513D0 @ 0x1402513D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 */

__int64 __fastcall sub_1402513D0(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rdx
  bool v9; // zf

  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *((_QWORD *)CurrentPrcb + 4375);
      v9 = (*(_DWORD *)(v8 + 20) & 0xFFFF0001) == 0;
      *(_DWORD *)(v8 + 20) &= 0xFFFF0001;
      if ( v9 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  sub_140702AF8(CurrentThread);
  if ( (((unsigned __int8)*((_DWORD *)CurrentThread + 344) ^ 1) & 3) == 3 )
    sub_14042A5E0(a2, v4);
  LOBYTE(v5) = 1;
  return sub_14079F130(CurrentThread, 0LL, v5);
}
