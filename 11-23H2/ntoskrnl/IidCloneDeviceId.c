/*
 * XREFs of IidCloneDeviceId @ 0x14082961C
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x1403915C8 (HalpIommuCloneDeviceId.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140828D90 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     IidCloneDeviceIdPci @ 0x14036EFCC (IidCloneDeviceIdPci.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IidCloneDeviceIdAcpi @ 0x140674330 (IidCloneDeviceIdAcpi.c)
 */

__int64 __fastcall IidCloneDeviceId(_DWORD *Src, void *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !Src || !a2 || (unsigned int)(*Src - 1) > 4 )
    return (unsigned int)-1073741811;
  switch ( *Src )
  {
    case 1:
      return (unsigned int)IidCloneDeviceIdPci((__int64)Src, (__int64)a2);
    case 2:
      return (unsigned int)IidCloneDeviceIdAcpi((__int64)Src, (__int64)a2);
    case 5:
      memmove(a2, Src, a3);
      break;
    default:
      return (unsigned int)-1073741637;
  }
  return v3;
}
