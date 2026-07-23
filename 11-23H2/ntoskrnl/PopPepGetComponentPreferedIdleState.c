/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x140310CA8
 * Callers:
 *     PopPepUpdateIdleState @ 0x140310C48 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x140355694 (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // r9
  __int64 v4; // r8
  unsigned int v5; // ebx
  unsigned int *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  bool v11; // cl
  int v12; // eax

  v1 = a1[41];
  LODWORD(v2) = 0;
  v4 = (unsigned int)(a1[47] - 1);
  if ( (unsigned int)v4 >= v1 )
    v4 = v1;
  v5 = v4;
  if ( (_DWORD)v4 )
  {
    v6 = a1 + 38;
    v7 = 6LL;
    do
    {
      v8 = *v6;
      v9 = *v6++;
      if ( v8 >= v5 )
        v9 = v5;
      v5 = v9;
      v10 = v2 + 1;
      if ( v8 != (_DWORD)v4 )
        v10 = v2;
      v2 = v10;
      --v7;
    }
    while ( v7 );
    v11 = 0;
    if ( v10 == 5 )
      v11 = a1[40] < (unsigned int)v4;
    v12 = a1[1];
    if ( (v12 & 4) != 0 )
    {
      if ( !v11 )
      {
        a1[1] = v12 & 0xFFFFFFFB;
        _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
      }
    }
    else if ( v11 )
    {
      a1[1] = v12 | 4;
      if ( !_InterlockedExchangeAdd(&PopPepPoweredIdleComponentCount, 1u) )
        PopPepArmIdleTimer(0LL, a1, v4, v2);
    }
  }
  return v5;
}
