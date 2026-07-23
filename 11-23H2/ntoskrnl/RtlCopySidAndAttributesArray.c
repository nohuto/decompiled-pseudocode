/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1407150C0
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x1407F3D84 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140A18C0C (CmpBuildAdminInformation.c)
 * Callees:
 *     RtlCopySid @ 0x140715180 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG v8; // r15d
  ULONG *p_Attributes; // rbx
  signed __int64 v12; // rdi
  unsigned int v13; // r14d

  v8 = 0;
  if ( Count )
  {
    p_Attributes = &Dest->Attributes;
    v12 = (char *)Src - (char *)Dest;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)p_Attributes + v12 - 8) + 1LL) + 8;
      if ( v13 > SidAreaSize )
        return -1073741789;
      *((_QWORD *)p_Attributes - 1) = SidArea;
      *p_Attributes = *(ULONG *)((char *)p_Attributes + v12);
      SidAreaSize -= v13;
      RtlCopySid(v13, SidArea, *(PSID *)((char *)p_Attributes + v12 - 8));
      ++v8;
      SidArea = (char *)SidArea + v13;
      p_Attributes += 4;
      if ( v8 >= Count )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *RemainingSidArea = SidArea;
    *RemainingSidAreaSize = SidAreaSize;
    return 0;
  }
}
