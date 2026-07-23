/*
 * XREFs of sub_140A81B20 @ 0x140A81B20
 * Callers:
 *     sub_1406055D0 @ 0x1406055D0 (sub_1406055D0.c)
 * Callees:
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_140A81B20(PCONTEXT ContextRecord, _QWORD *a2)
{
  char v5; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // r9
  int v8; // ecx
  signed __int64 v9; // rdi
  size_t v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  Src = 0LL;
  v18 = 0LL;
  v16 = 0;
  if ( !ContextRecord )
    return 0;
  v5 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  RtlCaptureContext(ContextRecord);
  if ( !(unsigned __int8)sub_140294D90((__int64)&v16, (__int64)&Src, (__int64)&v18)
    || v16 <= 9 && (v8 = 929, _bittest(&v8, v16)) )
  {
    v5 = 0;
  }
  else
  {
    v9 = sub_14041FAB0() - (_BYTE *)Src;
    memset(&unk_140D61790, 0, 0x6000uLL);
    v10 = v18 - (_QWORD)Src;
    if ( (unsigned __int64)(v18 - (_QWORD)Src) > 0x6000 )
      v10 = 24576LL;
    memmove(&unk_140D61790, Src, v10);
    *a2 = &unk_140D61790;
    ContextRecord->Rsp = (DWORD64)&unk_140D61790 + v9;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
