/*
 * XREFs of sub_140A66050 @ 0x140A66050
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     sub_140A677B8 @ 0x140A677B8 (sub_140A677B8.c)
 */

void __fastcall sub_140A66050(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edx
  int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  int v9; // [rsp+28h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  v8 = 0;
  v7 = *((_DWORD *)CurrentPrcb + 9);
  RtlCaptureContext(*((PCONTEXT *)CurrentPrcb + 4408));
  sub_14041F720((__int64)CurrentPrcb + 256, v6);
  do
    sub_140A677B8(DeferredContext, &v7);
  while ( v8 != -1 );
}
