/*
 * XREFs of RtlGetDefaultCodePage @ 0x1406E9F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 RtlGetDefaultCodePage()
{
  _WORD *v0; // rax
  _WORD *v1; // r9
  __int64 result; // rax
  _WORD *v3; // rdx

  v0 = sub_140347DB0();
  *v1 = v0[532];
  result = (unsigned __int16)v0[564];
  *v3 = result;
  return result;
}
