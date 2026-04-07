/*
 * XREFs of ?GetPVLTarget@CInputView_SizeChangeOnly@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800D65E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputView_SizeChangeOnly::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CInputView_SizeChangeOnly::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned int)++v3 >= 3 )
      return v2;
  }
  return `CInputView_SizeChangeOnly::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}
