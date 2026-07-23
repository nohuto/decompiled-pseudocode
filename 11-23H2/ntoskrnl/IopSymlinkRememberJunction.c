/*
 * XREFs of IopSymlinkRememberJunction @ 0x14087F658
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1407DFCEC (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14087F758 (IopGraftName.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A970 (RtlAppendUnicodeToString.c)
 *     IopSymlinkGetECP @ 0x1402FDB40 (IopSymlinkGetECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1407CDC68 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1407D96F8 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14087FD80 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 *     IopGetRelatedFileName @ 0x140944C50 (IopGetRelatedFileName.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int RelatedFileName; // esi
  UNICODE_STRING *RelatedMountPoint; // rax
  UNICODE_STRING *v10; // r9
  UNICODE_STRING *v11; // rbx
  UNICODE_STRING *Buffer; // rax
  __int64 Pool2; // rax
  __int64 v15; // r8
  __int16 v16; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING *v17; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (UNICODE_STRING *)IopSymlinkGetRelatedMountPoint(a4, a1);
  v11 = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    RelatedMountPoint->Length = a1;
    IopSymlinkFreeRelatedMountPointChain((__int64)RelatedMountPoint);
  }
  else
  {
    Buffer = (UNICODE_STRING *)v10->Buffer;
    v11 = v10;
    while ( Buffer )
    {
      v11 = Buffer;
      Buffer = (UNICODE_STRING *)Buffer->Buffer;
    }
    v11->MaximumLength |= 1u;
    v17 = v11;
    v11->Length = a1;
    if ( a4 == v11 )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v15 = (unsigned __int16)(v10[1].Length + 2);
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = 0LL;
        v16 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, &Destination, v15, &v16);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, a4, v16, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v17);
          v11 = v17;
        }
      }
    }
  }
  Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 88) + 32LL, 1767075657LL);
  v11->Buffer = (wchar_t *)Pool2;
  if ( Pool2 )
    IopSymlinkInitializeSymlinkInfo(
      Pool2,
      *(_WORD *)(a2 + 88) + 32,
      *(const void **)(a2 + 96),
      *(_WORD *)(a2 + 88),
      0,
      0LL,
      0,
      0,
      0,
      0LL);
  else
    return (unsigned int)-1073741670;
  return (unsigned int)RelatedFileName;
}
