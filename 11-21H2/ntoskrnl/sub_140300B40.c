/*
 * XREFs of sub_140300B40 @ 0x140300B40
 * Callers:
 *     sub_1406827E8 @ 0x1406827E8 (sub_1406827E8.c)
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     PsGetThreadSessionId @ 0x1407B6780 (PsGetThreadSessionId.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 *     sub_14098C390 @ 0x14098C390 (sub_14098C390.c)
 *     sub_14098FDE4 @ 0x14098FDE4 (sub_14098FDE4.c)
 *     sub_1409EAB74 @ 0x1409EAB74 (sub_1409EAB74.c)
 *     sub_1409F5D80 @ 0x1409F5D80 (sub_1409F5D80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140300B40(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
