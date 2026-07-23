/*
 * XREFs of sub_14084C25C @ 0x14084C25C
 * Callers:
 *     sub_140B21B40 @ 0x140B21B40 (sub_140B21B40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14084C474 @ 0x14084C474 (sub_14084C474.c)
 */

__int64 __fastcall sub_14084C25C(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  wchar_t **v3; // rbx
  wchar_t *v4; // rsi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  char v7; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  v3 = &off_140C04850;
  v7 = 0;
  if ( off_140C04860 )
  {
    v4 = 0LL;
    do
    {
      if ( v3[6] && (int)sub_14042A5E0(v3, a2) < 0 )
      {
        *((_DWORD *)v3 + 2) = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, *v3);
        v3[8] = 0LL;
        v3[10] = (wchar_t *)sub_14084C370;
        v3[11] = v4;
        if ( (int)sub_14084C474(&DestinationString, v3 + 4, &v7) >= 0 )
        {
          ZwNotifyChangeKey(
            v3[4],
            0LL,
            (PIO_APC_ROUTINE)(v3 + 8),
            (PVOID)1,
            (PIO_STATUS_BLOCK)v3 + 6,
            *((_DWORD *)v3 + 2),
            1u,
            0LL,
            0,
            1u);
          if ( v7 )
            *((_DWORD *)v3 + 10) |= 1u;
        }
      }
      v4 = (wchar_t *)++v2;
      v3 = &(&off_140C04850)[14 * v2];
    }
    while ( v3[2] );
  }
  return 0LL;
}
