/*
 * XREFs of sub_14024187C @ 0x14024187C
 * Callers:
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14024187C(unsigned __int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)CurrentPrcb + 4309) + 8LL)) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)*((unsigned int *)CurrentPrcb + 9) << 48);
  *a1 = result;
  return result;
}
