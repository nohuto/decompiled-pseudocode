/*
 * XREFs of sub_14039FE50 @ 0x14039FE50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

void __fastcall sub_14039FE50(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = -1LL;
  KeSetTimer2((__int64)&unk_140C2BA40, -(__int64)(unsigned int)(150000 * dword_140D05190), 0LL, (__int64)v4);
}
