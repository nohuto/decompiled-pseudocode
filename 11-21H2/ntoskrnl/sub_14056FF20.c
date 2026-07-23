/*
 * XREFs of sub_14056FF20 @ 0x14056FF20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14056FFF0 @ 0x14056FFF0 (sub_14056FFF0.c)
 *     RtlLocateSupervisorFeature @ 0x1405EC610 (RtlLocateSupervisorFeature.c)
 */

__int64 __fastcall sub_14056FF20(__int64 a1, PVOID *a2, ULONG *a3)
{
  __int64 result; // rax
  ULONG v6; // eax
  PXSAVE_AREA_HEADER XStateHeader; // [rsp+38h] [rbp+10h] BYREF

  XStateHeader = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  result = sub_14056FFF0(a1, &XStateHeader);
  if ( (int)result >= 0 )
  {
    if ( (_bittest64(&qword_140D06A68, 8u) & _bittest64(&qword_140D068D8, 0x17u)) != 0 )
    {
      *a2 = RtlLocateSupervisorFeature(XStateHeader, 8u, a3);
    }
    else if ( (_DWORD)dword_140D06964 )
    {
      v6 = dword_140D06A10;
      *a2 = (char *)&XStateHeader[1] + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8];
      *a3 = v6;
    }
    else
    {
      *a2 = 0LL;
      *a3 = 0;
    }
    return 0LL;
  }
  return result;
}
