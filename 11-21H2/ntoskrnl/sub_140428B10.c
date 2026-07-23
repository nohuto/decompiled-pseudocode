/*
 * XREFs of sub_140428B10 @ 0x140428B10
 * Callers:
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 * Callees:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 */

// bad sp value at call has been detected, the output may be wrong!
char __fastcall sub_140428B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v7; // rbp
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF

  result = sub_1402F2540(v7 - 128);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  if ( (*((_BYTE *)CurrentPrcb + 13244) & 0xBF) != 0 )
    return sub_140428D70((_DWORD)CurrentPrcb, v9, v11, v12, a5, a6, a7, (__int64)&v15);
  _enable();
  if ( *((_BYTE *)CurrentPrcb + 13241) )
  {
    *((_BYTE *)CurrentPrcb + 13241) = 0;
    return sub_14028FFD0(v10, v9, v11);
  }
  else if ( *((_QWORD *)CurrentPrcb + 2) )
  {
    v14 = *((_QWORD *)CurrentPrcb + 1);
    if ( (*(_BYTE *)(v14 + 2) & 4) == 0 )
      return sub_140428BA0();
    result = sub_140291C10(v14, (__int64)CurrentPrcb);
    if ( !result )
      return sub_140428BA0();
  }
  return result;
}
