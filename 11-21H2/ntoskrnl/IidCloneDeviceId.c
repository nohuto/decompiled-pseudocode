/*
 * XREFs of IidCloneDeviceId @ 0x140846F90
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x1403CD7E0 (HalpIommuCloneDeviceId.c)
 * Callees:
 *     IidCloneDeviceIdPci @ 0x14025E734 (IidCloneDeviceIdPci.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IidCloneDeviceIdAcpi @ 0x14064F6D8 (IidCloneDeviceIdAcpi.c)
 */

__int64 __fastcall IidCloneDeviceId(_DWORD *Src, void *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !Src || !a2 || (unsigned int)(*Src - 1) > 5 )
    return (unsigned int)-1073741811;
  switch ( *Src )
  {
    case 1:
      return (unsigned int)IidCloneDeviceIdPci((__int64)Src, (__int64)a2);
    case 2:
      return (unsigned int)IidCloneDeviceIdAcpi((__int64)Src, (__int64)a2);
    case 6:
      memmove(a2, Src, a3);
      break;
    default:
      return (unsigned int)-1073741637;
  }
  return v3;
}
