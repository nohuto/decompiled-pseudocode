/*
 * XREFs of sub_1406BCC20 @ 0x1406BCC20
 * Callers:
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 * Callees:
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406BCC20(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  bool v8; // di
  void *Pool2; // rbx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v14; // r9d
  int v15; // r9d
  int v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  ULONG SecurityDescriptorLength; // [rsp+70h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0LL;
  SecurityDescriptorLength = 128;
  v8 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 128LL, 1852141648LL);
  if ( !Pool2 )
    return 0LL;
  v10 = sub_14077CD90(qword_140D00AC0, a2, a3, 24, (__int64)&v16, (__int64)Pool2, (__int64)&SecurityDescriptorLength, 0);
  if ( v10 == -1073741789 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, SecurityDescriptorLength, 1852141648LL);
    if ( !Pool2 )
      return 0LL;
    v10 = sub_14077CD90(
            qword_140D00AC0,
            a2,
            a3,
            24,
            (__int64)&v16,
            (__int64)Pool2,
            (__int64)&SecurityDescriptorLength,
            0);
  }
  if ( v10 >= 0
    && v16 == 3
    && RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0)
    && (LOBYTE(v15) = 1, (int)SeCaptureSecurityDescriptor((_DWORD)Pool2, 0, 1, v15, (__int64)&v17) >= 0) )
  {
    v8 = 1;
  }
  else
  {
    v11 = a5;
    if ( a5 )
    {
      v12 = sub_1406BDAE4(
              qword_140D00AC0,
              a4,
              a5,
              24,
              (__int64)&v16,
              (__int64)Pool2,
              (__int64)&SecurityDescriptorLength);
      if ( v12 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, SecurityDescriptorLength, 1852141648LL);
        if ( !Pool2 )
          return 0LL;
        v12 = sub_1406BDAE4(
                qword_140D00AC0,
                a4,
                v11,
                24,
                (__int64)&v16,
                (__int64)Pool2,
                (__int64)&SecurityDescriptorLength);
      }
      if ( v12 >= 0 && v16 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0) )
        {
          LOBYTE(v14) = 1;
          v8 = (int)SeCaptureSecurityDescriptor((_DWORD)Pool2, 0, 1, v14, (__int64)&v17) >= 0;
        }
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( !v8 )
    return 0LL;
  return v17;
}
