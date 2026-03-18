/*
 * XREFs of CmpLightWeightUpdateSharedSetValueData @ 0x14065DDFC
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLightWeightUpdateSharedSetValueData(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 result; // rax
  _DWORD *v5; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = a2 + 208;
  v3 = 32LL;
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v6, v3);
    if ( !result )
      break;
    if ( (unsigned int)(*(_DWORD *)(result + 68) - 4) <= 2 )
    {
      *(_QWORD *)(result + 104) = v5;
      ++*v5;
    }
  }
  return result;
}
