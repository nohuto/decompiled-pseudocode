/*
 * XREFs of sub_1403D7250 @ 0x1403D7250
 * Callers:
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x14035F800 (RtlGetCompressionWorkSpaceSize.c)
 *     sub_1403898C4 @ 0x1403898C4 (sub_1403898C4.c)
 */

int __fastcall sub_1403D7250(__int64 a1, __int64 a2, USHORT a3)
{
  int result; // eax
  ULONG CompressFragmentWorkSpaceSize; // [rsp+30h] [rbp+8h] BYREF

  CompressFragmentWorkSpaceSize = 0;
  result = RtlGetCompressionWorkSpaceSize(a3, (PULONG)(a1 + 132), &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    result = sub_1403898C4(a1, a2, 0);
    if ( result >= 0 )
    {
      *(_DWORD *)(a1 + 88) = 1;
      result = sub_1403898C4(a1, a2, 1u);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
