/*
 * XREFs of sub_140A90090 @ 0x140A90090
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A6E0A0 @ 0x140A6E0A0 (sub_140A6E0A0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A90090(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int v10[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  char v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v10[0] = 0;
  v5 = a1 & 0x20;
  if ( (int)sub_140A6E0A0(a1, 0, (int *)v10, &v13, &v12) < 0 )
    return ExAllocatePool2(a1, a2, a3);
  if ( (qword_140D01450 & 0x40000) != 0 && qword_140D57510 && (unsigned __int8)sub_14042A5E0("ExAllocatePool2", v7) )
  {
    if ( !v5 )
      return 0LL;
LABEL_17:
    RtlRaiseStatus(-1073741670);
  }
  v9 = v10[0];
  if ( (v10[0] & 8) != 0 )
    v9 = v10[0] & 0xFFFFFFF7;
  if ( (v9 & 0x10) != 0 )
    v9 &= ~0x10u;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(v9, retaddr, 0);
  if ( sub_140A8FEC0 == (__int64 (__fastcall *)(__int64, __int64))off_140D4E030[0] || !off_140D4E030[0] )
    return ExAllocatePool2(a1, a2, a3);
  result = sub_14042A5E0(v9 | 0x80, 0LL);
  if ( !result && v5 )
    goto LABEL_17;
  return result;
}
