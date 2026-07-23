/*
 * XREFs of sub_1409528A8 @ 0x1409528A8
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_140952178 @ 0x140952178 (sub_140952178.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409528A8(ULONG_PTR *a1, __int64 a2)
{
  int SystemImage; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  SystemImage = sub_140952178(&DestinationString);
  if ( SystemImage >= 0 )
  {
    SystemImage = MmLoadSystemImage((int)&DestinationString, 0, 0, 2, (__int64)&BugCheckParameter2, (__int64)&v12);
    if ( SystemImage >= 0 )
    {
      memset((void *)(a2 + 8), 0, 0x58uLL);
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)a2 = 96;
      SystemImage = sub_14042A5E0(a2, 0LL);
      if ( SystemImage >= 0 )
      {
        if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
        {
          SystemImage = 0;
          *a1 = BugCheckParameter2;
          goto LABEL_23;
        }
        v5 = qword_140C448A8;
        SystemImage = -1073741637;
        v6 = *(_DWORD *)(qword_140C448A8 + 33272);
        if ( !v6 )
          v6 = 4893;
        v7 = 9;
      }
      else
      {
        v5 = qword_140C448A8;
        v6 = *(_DWORD *)(qword_140C448A8 + 33272);
        if ( !v6 )
          v6 = 4877;
        v7 = 8;
      }
    }
    else
    {
      v5 = qword_140C448A8;
      v6 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v6 )
        v6 = 4863;
      v7 = 10;
    }
    *(_DWORD *)(v5 + 33272) = v6;
    v8 = *(_DWORD *)(v5 + 33276);
    if ( !v8 )
      v8 = v7;
    *(_DWORD *)(v5 + 33276) = v8;
  }
  if ( BugCheckParameter2 )
    MmUnloadSystemImage(BugCheckParameter2);
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)SystemImage;
}
