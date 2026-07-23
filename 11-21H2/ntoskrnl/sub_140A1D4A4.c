/*
 * XREFs of sub_140A1D4A4 @ 0x140A1D4A4
 * Callers:
 *     sub_140A1E118 @ 0x140A1E118 (sub_140A1E118.c)
 *     sub_140A1EE84 @ 0x140A1EE84 (sub_140A1EE84.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A204C4 @ 0x140A204C4 (sub_140A204C4.c)
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 * Callees:
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1D4A4(__int64 a1, unsigned int a2, GUID **a3, _DWORD *a4)
{
  int v8; // ebx
  GUID *PoolWithTag; // rdi
  __int64 v10; // r8
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  *a4 = 0;
  *a3 = 0LL;
  v8 = sub_140812D44(a1, a2, (__int64)a3, 0LL, (unsigned int *)&NumberOfBytes);
  if ( v8 == -1073741789 )
  {
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
    if ( PoolWithTag )
    {
      v8 = sub_140812D44(a1, a2, v10, PoolWithTag, (unsigned int *)&NumberOfBytes);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
      }
      else
      {
        *a4 = NumberOfBytes;
        *a3 = PoolWithTag;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
