/*
 * XREFs of sub_14076FF88 @ 0x14076FF88
 * Callers:
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 * Callees:
 *     sub_1402DE400 @ 0x1402DE400 (sub_1402DE400.c)
 *     sub_1402DE48C @ 0x1402DE48C (sub_1402DE48C.c)
 *     sub_1402DF5A4 @ 0x1402DF5A4 (sub_1402DF5A4.c)
 *     sub_1402DF64C @ 0x1402DF64C (sub_1402DF64C.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     sub_140770200 @ 0x140770200 (sub_140770200.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 */

__int64 __fastcall sub_14076FF88(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        ULONG a5,
        _DWORD *SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  NTSTATUS inited; // ebx
  int v12; // r12d
  _DWORD *v13; // rbp
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  HANDLE v19; // rcx
  int v20; // eax
  int v21; // r9d
  HANDLE v23; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  inited = 0;
  Handle = 0LL;
  v12 = a1;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = SecurityDescriptorInput;
    if ( !SecurityDescriptorInput )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !sub_1402DF5A4(a1, a4) )
    goto LABEL_55;
  if ( !sub_1402DE48C(v15, v14) )
    return (unsigned int)-1073741790;
  v16 = sub_1402DE400(a4);
  if ( !v16 )
    return (unsigned int)-1073741264;
  if ( a5 != v16 )
    return (unsigned int)-1073741811;
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_12;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && (unsigned __int8)sub_140789040(a2) )
      {
        inited = -1073741808;
        goto LABEL_24;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  if ( a4 == 24
    && SecurityDescriptorLength
    && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
     || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    inited = -1073741811;
    goto LABEL_24;
  }
LABEL_12:
  if ( a3 || (inited = sub_14077F2EC(v12, (_DWORD)a2, 16, 0, 33554434, 0, (__int64)&Handle, 0LL), inited >= 0) )
  {
    if ( a4 == 8 )
      goto LABEL_21;
    v18 = sub_1402DF64C(v17, a4);
    if ( v18 )
    {
      if ( SecurityDescriptorLength )
      {
        v19 = Handle;
        if ( a3 )
          v19 = a3;
        v20 = sub_1406D5A30(v19, v18, a5, v13, SecurityDescriptorLength);
        if ( v20 == -1073741444 )
        {
          inited = -1073741810;
          goto LABEL_24;
        }
        if ( v20 < 0 )
        {
          inited = v20;
          goto LABEL_24;
        }
      }
      else
      {
        v23 = Handle;
        DestinationString = 0LL;
        if ( a3 )
          v23 = a3;
        inited = RtlInitUnicodeStringEx(&DestinationString, v18);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v23, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
      }
      if ( inited < 0 )
        goto LABEL_24;
LABEL_21:
      v21 = (int)Handle;
      if ( a3 )
        v21 = (int)a3;
      sub_140770200(v12, (_DWORD)a2, 1, v21, a4);
      goto LABEL_24;
    }
LABEL_55:
    inited = -1073741264;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
