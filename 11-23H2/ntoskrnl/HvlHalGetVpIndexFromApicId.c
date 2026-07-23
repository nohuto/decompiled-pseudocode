/*
 * XREFs of HvlHalGetVpIndexFromApicId @ 0x140544CE0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetVpIndexFromApicId @ 0x14054167C (HvlpGetVpIndexFromApicId.c)
 */

__int64 __fastcall HvlHalGetVpIndexFromApicId(ULONG a1, _DWORD *a2)
{
  __int64 result; // rax
  ULONG v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = HvlpGetVpIndexFromApicId(a1, &v4);
  *a2 = v4;
  return result;
}
