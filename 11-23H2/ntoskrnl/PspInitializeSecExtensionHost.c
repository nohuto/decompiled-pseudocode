/*
 * XREFs of PspInitializeSecExtensionHost @ 0x140B4D2EC
 * Callers:
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x140821910 (ExRegisterHost.c)
 */

__int64 __fastcall PspInitializeSecExtensionHost(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall **v4)(); // [rsp+30h] [rbp-28h]
  __int128 v5; // [rsp+38h] [rbp-20h]

  v3[1] = 0;
  v3[3] = 0;
  v3[0] = 65550;
  v5 = 0LL;
  v3[2] = 512;
  v4 = PspSecHostInterface;
  result = ExRegisterHost(&PspSecExtensionHost, a2, (unsigned __int16 *)v3);
  if ( (int)result < 0 )
    PspSecExtensionHost = 0LL;
  return result;
}
