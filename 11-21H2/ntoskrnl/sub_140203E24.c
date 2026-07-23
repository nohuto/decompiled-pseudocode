/*
 * XREFs of sub_140203E24 @ 0x140203E24
 * Callers:
 *     sub_1406718F8 @ 0x1406718F8 (sub_1406718F8.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall sub_140203E24(void *a1, __int64 a2, int *a3, _PS_PKG_CLAIM *a4, unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax
  ULONG Flags; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    a4->Flags = 0;
    v8 = 0;
    goto LABEL_4;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
LABEL_4:
    if ( (*a5 & 1) == 0 )
    {
LABEL_5:
      v9 = 3014656;
LABEL_6:
      *a3 = v9;
      return v8;
    }
    if ( (*a5 & 8) == 0 )
    {
      Flags = a4->Flags;
      if ( (a4->Flags & 0x10000) != 0 )
        goto LABEL_5;
      if ( (Flags & 0x4000) != 0 || (Flags & 4) != 0 )
      {
        v9 = 3014658;
        goto LABEL_6;
      }
      if ( (Flags & 0x400) == 0 && (Flags & 0x800) == 0 )
      {
        if ( (Flags & 0x40) != 0 )
          goto LABEL_5;
        v9 = 3014656;
        if ( (a4->Flags & 0x1000) != 0 )
          goto LABEL_6;
      }
    }
    v9 = 3014657;
    goto LABEL_6;
  }
  return v8;
}
