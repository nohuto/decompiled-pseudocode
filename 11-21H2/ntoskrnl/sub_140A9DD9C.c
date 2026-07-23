/*
 * XREFs of sub_140A9DD9C @ 0x140A9DD9C
 * Callers:
 *     sub_140601DB0 @ 0x140601DB0 (sub_140601DB0.c)
 * Callees:
 *     sub_14063B338 @ 0x14063B338 (sub_14063B338.c)
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 sub_140A9DD9C()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // rcx
  int v2; // edx
  int v3; // eax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx

  v0 = 0;
  v1 = ntoskrnl_12(0);
  v2 = 0x10000;
  v3 = dword_140D57518;
  v4 = v1 >> 18;
  if ( (unsigned int)dword_140D57518 <= 0x10000 )
  {
    if ( (unsigned int)v4 > 4 )
    {
      if ( (unsigned int)v4 > 0x10 )
      {
        v3 = 0x80000;
        goto LABEL_14;
      }
      v5 = (unsigned __int64)(unsigned int)v4 >> 2;
      do
      {
        v2 *= 2;
        --v5;
      }
      while ( v5 );
    }
    v3 = v2;
    goto LABEL_14;
  }
  v6 = 0x800000;
  if ( (unsigned int)dword_140D57518 > 0x800000 )
  {
    v3 = 0x800000;
    dword_140D57518 = 0x800000;
    goto LABEL_15;
  }
  while ( (v6 & dword_140D57518) == 0 )
  {
    v6 >>= 1;
    if ( v6 < 0x10000 )
      goto LABEL_15;
  }
  v3 = v6 & dword_140D57518;
LABEL_14:
  dword_140D57518 = v3;
LABEL_15:
  qword_140D575A8 = (PVOID)ExAllocatePool3(64LL, (unsigned int)(424 * v3), 0x6E496956u, (__int64)&byte_140C5B0E0, 1u);
  if ( qword_140D575A8 )
    sub_14063B338(0x10u);
  else
    return (unsigned int)-1073741801;
  return v0;
}
