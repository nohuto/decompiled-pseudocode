/*
 * XREFs of IsBlankIdPage @ 0x1C0012BC4
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C0017A48 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C0012D98 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C0012DE4 (StorInitVPDIdEnumeration.c)
 */

char __fastcall IsBlankIdPage(__int64 a1)
{
  char result; // al
  __int64 NextVPDIdDescriptor; // rax
  char v3; // r10
  char v4; // r11
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  result = 0;
  v8 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    if ( (unsigned __int8)StorInitVPDIdEnumeration(&v7, a1) )
    {
LABEL_3:
      while ( 1 )
      {
        NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(&v7);
        if ( !NextVPDIdDescriptor )
          break;
        v5 = *(_BYTE *)(NextVPDIdDescriptor + 3);
        v6 = 0;
        if ( v5 )
        {
          while ( (*(_BYTE *)(v6 + NextVPDIdDescriptor + 4) & 0xDF) == 0 )
          {
            v6 += v3;
            if ( v6 >= v5 )
              goto LABEL_3;
          }
          return 0;
        }
      }
      if ( v4 )
        return v3;
    }
    return 0;
  }
  return result;
}
