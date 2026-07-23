/*
 * XREFs of sub_140A5A7C8 @ 0x140A5A7C8
 * Callers:
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403D2700 @ 0x1403D2700 (sub_1403D2700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14050E490 @ 0x14050E490 (sub_14050E490.c)
 *     sub_14050F000 @ 0x14050F000 (sub_14050F000.c)
 *     sub_140A5A8F8 @ 0x140A5A8F8 (sub_140A5A8F8.c)
 */

void __fastcall sub_140A5A7C8(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // ebp
  unsigned int *v4; // rsi
  unsigned int v5; // edx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (dword_140C4C44C & 4) == 0 || !*(_BYTE *)(a1 + 42) )
    byte_140C0C685 = 0;
  if ( !byte_140C0C685 && (dword_140C4C44C & 8) == 0 )
    byte_140C0C684 = 0;
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = dword_140D0E5E0;
    do
    {
      v5 = *v4;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v5 >> 6);
      Affinity.Mask = 1LL << (v5 & 0x3F);
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      sub_1403D2700();
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        sub_140A5A8F8(a1, *(_QWORD *)(i + 172));
      ++v2;
      ++v4;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( byte_140C4C450 )
  {
    if ( byte_140C0C684 )
    {
      sub_14050E490();
      sub_14050F000();
    }
  }
}
