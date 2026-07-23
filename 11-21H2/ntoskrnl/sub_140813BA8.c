/*
 * XREFs of sub_140813BA8 @ 0x140813BA8
 * Callers:
 *     sub_1408073EC @ 0x1408073EC (sub_1408073EC.c)
 *     sub_140813960 @ 0x140813960 (sub_140813960.c)
 *     sub_140A1E0A0 @ 0x140A1E0A0 (sub_140A1E0A0.c)
 *     sub_140A1F760 @ 0x140A1F760 (sub_140A1F760.c)
 *     sub_140A1F7E0 @ 0x140A1F7E0 (sub_140A1F7E0.c)
 *     sub_140A1F8F4 @ 0x140A1F8F4 (sub_140A1F8F4.c)
 *     sub_140A20758 @ 0x140A20758 (sub_140A20758.c)
 *     sub_140A207C4 @ 0x140A207C4 (sub_140A207C4.c)
 *     sub_140A2089C @ 0x140A2089C (sub_140A2089C.c)
 *     sub_140A20A2C @ 0x140A20A2C (sub_140A20A2C.c)
 *     sub_140A20AA4 @ 0x140A20AA4 (sub_140A20AA4.c)
 *     sub_140A20C90 @ 0x140A20C90 (sub_140A20C90.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     sub_1406CB908 @ 0x1406CB908 (sub_1406CB908.c)
 *     sub_140813C34 @ 0x140813C34 (sub_140813C34.c)
 */

__int64 __fastcall sub_140813BA8(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  __int64 result; // rax
  int v6; // edi
  __int64 ThreadInformation; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(ThreadInformation) = 0;
  v2 = a2;
  if ( (*((_DWORD *)KeGetCurrentThread() + 344) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = sub_1406CB908(2, 0, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v6 = sub_140813C34(a1, a2, &ThreadInformation);
  if ( v6 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = ThreadInformation;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return (unsigned int)v6;
}
