/*
 * XREFs of HalHandleNMI @ 0x14050A180
 * Callers:
 *     sub_14029B9A0 @ 0x14029B9A0 (sub_14029B9A0.c)
 * Callees:
 *     sub_14021294C @ 0x14021294C (sub_14021294C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 */

char HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  char result; // al
  unsigned __int8 v3; // al
  char v4; // bl
  __int64 v5; // rax

  _InterlockedAdd(&dword_140CE21C0, 1u);
  dword_140C54AE8 = 1;
  dword_140C0CA2C = HIDWORD(KeGetPcr()[1].LockArray);
  if ( !dword_140C54BA4 )
    goto LABEL_7;
  v0 = (__int64 *)qword_140C4BC60;
  v1 = 0;
  if ( (__int64 *)qword_140C4BC60 == &qword_140C4BC60 )
    goto LABEL_7;
  do
  {
    result = sub_14021294C((__int64)v0);
    v0 = (__int64 *)*v0;
    if ( result )
      v1 = 1;
  }
  while ( v0 != &qword_140C4BC60 );
  if ( v1 != 1 )
  {
LABEL_7:
    v3 = __inbyte(0x61u);
    v4 = v3;
    if ( dword_140C54AE4 != 1 )
    {
      byte_140C4BF30 = 1;
      byte_140C4C451 = 1;
      KeBugCheckEx(0x80u, 0x4F4454uLL, v3, 0LL, 0LL);
    }
    memset(&dword_140C54AF0, 0, 0x5CuLL);
    dword_140C54AF4 = 3;
    dword_140C54B00 = 3;
    dword_140C54B0C = 3;
    dword_140C54AF0 = 1095059543;
    dword_140C54B48 = ((unsigned int)dword_140C54AFC >> 2) & 1;
    dword_140C54AF8 = 92;
    dword_140C54B04 = 1;
    dword_140C54B08 = dword_140C54AE0;
    xmmword_140C54B10 = xmmword_14003A620;
    dword_140C54B28 = 4;
    dword_140C54B30 = 80;
    dword_140C54B34 = 12;
    byte_140C54B40 = v4;
    v5 = sub_140643F2C(&unk_140CE1A98, (unsigned int)dword_140C54AE0);
    PshedRetrieveErrorInfo(&dword_140C54AF0, (v5 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64));
    result = WheaReportHwError(&dword_140C54AF0);
  }
  _InterlockedDecrement(&dword_140CE21C0);
  dword_140C0CA2C = 2048;
  return result;
}
