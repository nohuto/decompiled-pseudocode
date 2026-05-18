/*
 * XREFs of sub_18001B060 @ 0x18001B060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B060(__int64 a1, float *a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-18h]

  LODWORD(v3) = (int)*a2;
  DWORD1(v3) = (int)a2[1];
  DWORD2(v3) = (int)a2[2];
  result = (unsigned int)(int)a2[3];
  HIDWORD(v3) = (int)a2[3];
  *(_OWORD *)(a1 + 128) = v3;
  return result;
}
