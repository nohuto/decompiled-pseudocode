/*
 * XREFs of sub_140813B50 @ 0x140813B50
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
 *     sub_140813C34 @ 0x140813C34 (sub_140813C34.c)
 */

NTSTATUS __fastcall sub_140813B50(unsigned int *a1)
{
  bool v1; // zf
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 4) == 0;
  LOBYTE(ThreadInformation) = 0;
  if ( v1 )
    result = sub_140813C34(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
