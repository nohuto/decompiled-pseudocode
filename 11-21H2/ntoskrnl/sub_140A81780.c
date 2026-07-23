/*
 * XREFs of sub_140A81780 @ 0x140A81780
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 *     sub_140B21B40 @ 0x140B21B40 (sub_140B21B40.c)
 * Callees:
 *     sub_1405FDAE4 @ 0x1405FDAE4 (sub_1405FDAE4.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140604D38 @ 0x140604D38 (sub_140604D38.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A92E6C @ 0x140A92E6C (sub_140A92E6C.c)
 *     sub_140A92FF0 @ 0x140A92FF0 (sub_140A92FF0.c)
 *     sub_140A9307C @ 0x140A9307C (sub_140A9307C.c)
 */

void __fastcall sub_140A81780(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140C1B288, 1u);
        _InterlockedExchange(&dword_140D57698, 1);
        sub_140A9307C();
        _InterlockedExchange(&dword_140D575FC, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140C1B294, 1u);
            v5 = sub_140A92FF0();
            if ( v5 < 0 && (dword_140C29FC0 & 0x8000000) != 0 )
              sub_1405FDF9C("Failed to start branch tracing. <Status == 0x%08X>\n", v5);
            if ( (dword_140C1AA7C & 0x10) != 0 )
            {
              sub_1405FDF9C("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              sub_1405FDAE4();
            }
            sub_140A89F08(0LL, 2LL);
            sub_140604D38();
          }
        }
        else
        {
          _InterlockedAdd(&dword_140C1B290, 1u);
          sub_140A92FF0();
        }
        return;
      }
      _InterlockedAdd(&dword_140C1B28C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140C1B284, 1u);
    }
    sub_140A9307C();
    return;
  }
  _InterlockedAdd(&dword_140C1B280, 1u);
  v7 = sub_140A92E6C();
  if ( v7 < 0 && (dword_140C29FC0 & 0x8000000) != 0 )
    sub_1405FDF9C("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
