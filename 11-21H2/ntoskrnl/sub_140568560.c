/*
 * XREFs of sub_140568560 @ 0x140568560
 * Callers:
 *     KdEnableDebugger @ 0x140565580 (KdEnableDebugger.c)
 *     sub_1405790F8 @ 0x1405790F8 (sub_1405790F8.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 */

bool __fastcall sub_140568560(int a1)
{
  bool v1; // r9
  __int64 v2; // r8
  __int64 *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r11

  v1 = byte_140D068E6 == 0;
  if ( a1 )
  {
    LOBYTE(v2) = 0;
  }
  else
  {
    LOBYTE(v2) = 1;
    if ( !byte_140D068E6 && (_DWORD)dword_140D06884 )
    {
      v3 = qword_140D088C0;
      do
      {
        v4 = *v3;
        *(_DWORD *)(v4 + 32428) = 0;
        *(_DWORD *)(v4 + 33116) = 0;
        sub_140222280(v4);
        v3 = (__int64 *)(v5 + 8);
      }
      while ( v6 != v2 );
    }
  }
  byte_140D068E6 = v2;
  return v1;
}
