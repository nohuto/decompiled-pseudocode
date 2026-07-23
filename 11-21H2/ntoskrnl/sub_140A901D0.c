/*
 * XREFs of sub_140A901D0 @ 0x140A901D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 __fastcall sub_140A901D0(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rdx

  v6 = a1 & 0x20;
  if ( (qword_140D01450 & 0x40000) != 0 && qword_140D57510 && (unsigned __int8)sub_14042A5E0("ExAllocatePool3", a2) )
  {
    if ( !v6 )
      return 0LL;
LABEL_15:
    RtlRaiseStatus(-1073741670);
  }
  if ( (char *)sub_140A8FEC0 == (char *)off_140D4E050 || !off_140D4E050 )
  {
    result = ExAllocatePool3(a1, a2, a3, a4, a5);
  }
  else
  {
    v11 = a1 & 0xFFFFFFFFFFFFFFDFuLL;
    if ( !v6 )
      v11 = a1;
    result = sub_14042A5E0(0LL, v11 | 0x200);
  }
  if ( !result && v6 )
    goto LABEL_15;
  return result;
}
