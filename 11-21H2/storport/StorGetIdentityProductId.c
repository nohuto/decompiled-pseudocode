/*
 * XREFs of StorGetIdentityProductId @ 0x1C001FFBC
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001FD38 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00879FC (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0087B64 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
    {
      v2 = v4 + 25;
      goto LABEL_4;
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)a1 + 16LL;
LABEL_4:
    RaCopyPaddedString(a2, 17LL, v2, 16LL);
    return 0LL;
  }
  return 3221225485LL;
}
