/*
 * XREFs of sub_14042A160 @ 0x14042A160
 * Callers:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 * Callees:
 *     sub_140429980 @ 0x140429980 (sub_140429980.c)
 */

void sub_14042A160()
{
  char v0; // r8
  __int64 v1; // [rsp+28h] [rbp-10h]
  __int64 v2; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v4; // [rsp+40h] [rbp+8h] BYREF

  sub_140429980();
  *(_QWORD *)(v2 + 152) = &v4;
  *(_QWORD *)(v2 + 248) = retaddr;
  if ( *(_QWORD *)(v1 + 16) == -1LL )
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v2 + 248);
  if ( v0 )
    RtlRaiseException((PEXCEPTION_RECORD)v2);
  else
    sub_14041E540(v2, v1);
}
