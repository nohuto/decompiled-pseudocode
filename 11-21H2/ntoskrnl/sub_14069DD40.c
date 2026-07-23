/*
 * XREFs of sub_14069DD40 @ 0x14069DD40
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140225D70 @ 0x140225D70 (sub_140225D70.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 */

NTSTATUS __fastcall sub_14069DD40(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    byte_140C239E0 = 1;
    sub_14069DDE8(0LL);
    PoLatencySensitivityHint(3);
  }
  else
  {
    sub_140225D70();
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    byte_140C239E0 = 0;
    sub_14069DDE8(0LL);
  }
  Buffer = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(Buffer) = 3;
  return ZwUpdateWnfStateData(&stru_14000E8F8, &Buffer, 8u, 0LL, 0LL, 0, 0);
}
