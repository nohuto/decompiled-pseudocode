/*
 * XREFs of sub_140A255C0 @ 0x140A255C0
 * Callers:
 *     sub_140A2545C @ 0x140A2545C (sub_140A2545C.c)
 * Callees:
 *     sub_14024263C @ 0x14024263C (sub_14024263C.c)
 *     sub_1402426B4 @ 0x1402426B4 (sub_1402426B4.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14064F720 @ 0x14064F720 (sub_14064F720.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     sub_140770200 @ 0x140770200 (sub_140770200.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 */

__int64 __fastcall sub_140A255C0(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        ULONG a5,
        void *a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int inited; // ebx
  void *v12; // r15
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  HANDLE v19; // rdx
  HANDLE v20; // rsi
  const wchar_t *v21; // rax
  HANDLE v22; // r9
  int v23; // eax
  __int64 v25; // [rsp+28h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  inited = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v12 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v12 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !sub_1402426B4(a4) )
    goto LABEL_55;
  if ( !sub_14064F720(v13) )
    return (unsigned int)-1073741790;
  if ( a4 == 8 || a4 == 13 )
  {
    v18 = 1;
  }
  else
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741264;
    if ( a4 <= 19 )
    {
      v18 = 7;
    }
    else
    {
      if ( a4 != 24 )
      {
        if ( (unsigned int)(v17 - 26) <= 2 )
        {
          v18 = 4;
          goto LABEL_21;
        }
        return (unsigned int)-1073741264;
      }
      v18 = 3;
    }
  }
LABEL_21:
  if ( a5 != v18 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_31;
    return (unsigned int)-1073741811;
  }
  if ( a4 != 24 || !SecurityDescriptorLength )
  {
LABEL_31:
    if ( !a3 )
    {
      inited = sub_140789460(a1, v14, v16, v17, 33554438, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_56;
    }
    if ( a4 < 20 )
    {
      v20 = a3;
      if ( !a3 )
        v20 = Handle;
    }
    else
    {
      v19 = Handle;
      if ( a3 )
        v19 = a3;
      inited = sub_14077EF20(a1, (__int64)v19, 0LL, 2u, 1, v25, &KeyHandle);
      if ( inited < 0 )
        goto LABEL_56;
      v20 = KeyHandle;
    }
    v21 = sub_14024263C(v15, a4);
    if ( v21 )
    {
      if ( SecurityDescriptorLength )
      {
        v23 = sub_1406D5A30(v20, v21, a5, v12, SecurityDescriptorLength);
        if ( v23 == -1073741444 )
        {
          inited = -1073741772;
          goto LABEL_56;
        }
        if ( v23 < 0 )
        {
          inited = v23;
          goto LABEL_56;
        }
      }
      else
      {
        DestinationString = 0LL;
        inited = RtlInitUnicodeStringEx(&DestinationString, v21);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v20, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
        if ( inited < 0 )
          goto LABEL_56;
      }
      v22 = Handle;
      if ( a3 )
        v22 = a3;
      sub_140770200(a1, a2, 2u, (__int64)v22, a4);
      goto LABEL_56;
    }
LABEL_55:
    inited = -1073741264;
    goto LABEL_56;
  }
  if ( RtlValidRelativeSecurityDescriptor(v12, SecurityDescriptorLength, 0)
    && RtlLengthSecurityDescriptor(v12) == SecurityDescriptorLength )
  {
    v14 = a2;
    goto LABEL_31;
  }
  inited = -1073741811;
LABEL_56:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
