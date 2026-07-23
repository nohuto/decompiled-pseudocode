/*
 * XREFs of ObGetObjectType @ 0x1406CAAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObGetObjectType(__int64 a1)
{
  return qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
}
