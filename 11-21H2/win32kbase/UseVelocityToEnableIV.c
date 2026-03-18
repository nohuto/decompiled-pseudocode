/*
 * XREFs of UseVelocityToEnableIV @ 0x1C0038478
 * Callers:
 *     IsKeyboardIVEnabled @ 0x1C0006EF4 (IsKeyboardIVEnabled.c)
 *     IsMouseIVEnabled @ 0x1C0038414 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C0042570 (IsPTPIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01F0D34 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01F0DB4 (IsTouchIVEnabled.c)
 * Callees:
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // al
  char v1; // cl

  v0 = isRootPartition();
  v1 = 0;
  if ( v0 || dword_1C028F6FC == 3 )
    return 1;
  return v1;
}
