/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180051DB0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180050958 (TppAlpcpValidateAlpc.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     ZwAlpcQueryInformation @ 0x18009FF00 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+48h] [rbp+10h] BYREF

  result = TppAlpcpValidateAlpc((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 280);
    if ( v3 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v3);
    return TppBarrierAdjust(a1 + 128, 0LL, 1LL);
  }
  return result;
}
