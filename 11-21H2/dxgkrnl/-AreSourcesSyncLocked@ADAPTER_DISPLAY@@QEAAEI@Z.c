/*
 * XREFs of ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02BF2EC
 * Callers:
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C015EEE8 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::AreSourcesSyncLocked(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // r8
  bool result; // al

  result = 0;
  if ( a2 )
  {
    v2 = (((a2 ^ (unsigned int)(a2 - 1)) >> 1) & 0x55555555) + (((a2 ^ (unsigned int)(a2 - 1)) >> 2) & 0x55555555);
    v3 = (((v2 & 0x33333333) + ((v2 >> 2) & 0x33333333)) & 0xF0F0F0F)
       + ((((v2 & 0x33333333) + ((v2 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
    v4 = *(unsigned int *)(4000LL
                         * ((((v3 & 0xFF00FF) + ((v3 >> 8) & 0xFF00FF)) >> 16)
                          + (unsigned __int16)((unsigned __int8)v3 + BYTE1(v3)))
                         + *((_QWORD *)this + 16)
                         + 3780);
    if ( (_DWORD)v4 )
    {
      if ( (a2 & *((_DWORD *)this + 20 * v4 + 216)) == a2 )
        return 1;
    }
  }
  return result;
}
